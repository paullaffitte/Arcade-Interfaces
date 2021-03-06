/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Sprite.hpp
*/

#pragma once

#include <string>

#include "Drawable.hpp"
#include "RenderTarget.hpp"
#include "Transformable.hpp"
#include "Vector.hpp"

namespace engine
{
	class Sprite : public virtual Drawable
	{
	public:
		Sprite() = default;
		~Sprite() override = default;

		Sprite(Sprite const &) = delete;
		Sprite(Sprite &&) = default;

		Sprite &operator=(Sprite const &) = delete;
		Sprite &operator=(Sprite &&) = default;

		/**
		 * \brief Set the image file path.
		 * \param std::string filepath
		 */
		virtual void setImageFile(std::string const &filepath) = 0;

		/**
		 * \brief Set the ASCII image file path.
		 * \param std::string filepath
		 */
		virtual void setAsciiFile(std::string const &filepath) = 0;

		/**
		 * \brief Set the sprite size.
		 * \param Vector2f size
		 */
		virtual void setSize(Vector2f const &size) = 0;

		/**
		 * \brief Set the sprite rotation.
		 * \param std::size_t rotation
		 */
		virtual void setRotation(float rotation) = 0;

		/**
		 * \brief Get the image file path.
		 * \return std::string
		 */
		virtual std::string const &getImageFile() const = 0;

		/**
		 * \brief Get the ASCII image file path.
		 * \return std::string
		 */
		virtual std::string const &getAsciiFile() const = 0;

		/**
		 * \brief Get the sprite size.
		 * \return Vector2f
		 */
		virtual Vector2f const &getSize() const = 0;

		/**
		 * \brief Get the sprite rotation.
		 * \return float
		 */
		virtual float getRotation() const = 0;
	};
}

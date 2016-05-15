﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2016 Ryo Suzuki
//	Copyright (c) 2016 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "Platform.hpp"
# include "Types.hpp"

namespace s3d
{
	//////////////////////////////////////////////////////
	//
	//	Uncopyable.hpp
	//
	class Uncopyable;

	//////////////////////////////////////////////////////
	//
	//	Allocator.hpp
	//
	template <class Type, size_t Alignment> class AlignedAllocator;
	template <class Type> struct DefaultAllocator;

	//////////////////////////////////////////////////////
	//
	//	Array.hpp
	//
	template <class Type, class Allocator> class Array;

	//////////////////////////////////////////////////////
	//
	//	Array.hpp
	//
	template <class Type, class Allocator> class Grid;

	//////////////////////////////////////////////////////
	//
	//	Optional.hpp
	//
	struct nullopt_t;
	template <class Type> class Optional;

	//////////////////////////////////////////////////////
	//
	//	String.hpp
	//
	class String;
	using FilePath = String;

	//////////////////////////////////////////////////////
	//
	//	StringView.hpp
	//
	class StringView;

	//////////////////////////////////////////////////////
	//
	//	Radix.hpp
	//
	class Radix;

	//////////////////////////////////////////////////////
	//
	//	LetterCase.hpp
	//
	enum class LetterCase;

	//////////////////////////////////////////////////////
	//
	//	BigInt.hpp
	//
	class BigInt;

	//////////////////////////////////////////////////////
	//
	//	BigFloat.hpp
	//
	class BigFloat;

	//////////////////////////////////////////////////////
	//
	//	Format.hpp
	//
	struct FormatData;

	//////////////////////////////////////////////////////
	//
	//	Date.hpp
	//
	struct Date;

	//////////////////////////////////////////////////////
	//
	//	DateTime.hpp
	//
	struct DateTime;

	//////////////////////////////////////////////////////
	//
	//	Stopwatch.hpp
	//
	class Stopwatch;

	//////////////////////////////////////////////////////
	//
	//	SpeedStopwatch.hpp
	//
	class SpeedStopwatch;

	//////////////////////////////////////////////////////
	//
	//	Timer.hpp
	//
	class Timer;

	//////////////////////////////////////////////////////
	//
	//	TimeProfiler.hpp
	//
	class TimeProfiler;

	//////////////////////////////////////////////////////
	//
	//	RDTSCClock.hpp
	//
	class RDTSCClock;

	//////////////////////////////////////////////////////
	//
	//	FileSystem.hpp
	//
	enum class OpenMode;
	enum class CopyOption;

	//////////////////////////////////////////////////////
	//
	//	IReader.hpp
	//
	class IReader;

	//////////////////////////////////////////////////////
	//
	//	IWriter.hpp
	//
	class IWriter;

	//////////////////////////////////////////////////////
	//
	//	BinaryReader.hpp
	//
	class BinaryReader;

	//////////////////////////////////////////////////////
	//
	//	BinaryWriter.hpp
	//
	class BinaryWriter;

	//////////////////////////////////////////////////////
	//
	//	TextEncoding.hpp
	//
	enum class TextEncoding;

	//////////////////////////////////////////////////////
	//
	//	Point.hpp
	//
	struct Point;
	using Size = Point;
}

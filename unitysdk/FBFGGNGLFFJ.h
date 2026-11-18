#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"

#define FBFGGNGLFFJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x161736E0)
#define FBFGGNGLFFJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16173640)
#define FBFGGNGLFFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x161736D0)

inline static constexpr unsigned int FBFGGNGLFFJ_TypeDefinitionIndex = 61844;

class FBFGGNGLFFJ : public ::ABLPDAPPABA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGGNGLFFJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGGNGLFFJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGGNGLFFJ_FIGPAOKNJLN_OFFSET))(this);
	}
};

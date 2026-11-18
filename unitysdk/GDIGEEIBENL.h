#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GDIGEEIBENL_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x16CADFF0)
#define GDIGEEIBENL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CADFE0)

inline static constexpr unsigned int GDIGEEIBENL_TypeDefinitionIndex = 54034;

class GDIGEEIBENL : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDIGEEIBENL__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void DKDJDEJHABH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIGEEIBENL_DKDJDEJHABH_OFFSET))(this);
	}
};

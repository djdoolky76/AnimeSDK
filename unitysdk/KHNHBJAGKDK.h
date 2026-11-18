#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KHNHBJAGKDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1520F9B0)

inline static constexpr unsigned int KHNHBJAGKDK_TypeDefinitionIndex = 67882;

class KHNHBJAGKDK : public ::System::Object
{
public:
	::System::String* KIHGNGKBADE; // 0x10
	::System::Single CGMNBICLFEI; // 0x18
	::System::Single BMODHKPIHJM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHBJAGKDK__CTOR_OFFSET))(this);
	}
};

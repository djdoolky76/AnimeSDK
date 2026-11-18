#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGDLBEFAJCE_GHOINBGBAHN_COMPARE_OFFSET UNITYSDK_OFFSET(0x11503980)
#define BGDLBEFAJCE_GHOINBGBAHN__CTOR_OFFSET UNITYSDK_OFFSET(0x11504510)

inline static constexpr unsigned int BGDLBEFAJCE_GHOINBGBAHN_TypeDefinitionIndex = 52506;

class BGDLBEFAJCE_GHOINBGBAHN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_GHOINBGBAHN__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_GHOINBGBAHN_COMPARE_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};

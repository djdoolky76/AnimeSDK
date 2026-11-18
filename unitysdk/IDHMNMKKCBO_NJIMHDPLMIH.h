#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
namespace System { class Action; }

#define IDHMNMKKCBO_NJIMHDPLMIH_BABHJDMNLCK_OFFSET UNITYSDK_OFFSET(0x10138250)
#define IDHMNMKKCBO_NJIMHDPLMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x10138240)

inline static constexpr unsigned int IDHMNMKKCBO_NJIMHDPLMIH_TypeDefinitionIndex = 41798;

class IDHMNMKKCBO_NJIMHDPLMIH : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHMNMKKCBO_NJIMHDPLMIH__CTOR_OFFSET))(this);
	}

	::System::Void BABHJDMNLCK(::AKCGFNKLIBA* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + IDHMNMKKCBO_NJIMHDPLMIH_BABHJDMNLCK_OFFSET))(this, PIIPCLCCOIG);
	}
};

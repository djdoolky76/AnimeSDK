#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AHFKCDLNMOC_FONNNKGINFB_KCHMEIPHLFL_OFFSET UNITYSDK_OFFSET(0x16FEBEE0)
#define AHFKCDLNMOC_FONNNKGINFB_LJIFLLJLKEJ_OFFSET UNITYSDK_OFFSET(0x16FEBED0)
#define AHFKCDLNMOC_FONNNKGINFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEBEC0)

inline static constexpr unsigned int AHFKCDLNMOC_FONNNKGINFB_TypeDefinitionIndex = 40177;

class AHFKCDLNMOC_FONNNKGINFB : public ::System::Object
{
public:
	::System::Action* GOOPOJIJKKJ; // 0x10
	::System::Action* MBNOJBFDGHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKCDLNMOC_FONNNKGINFB__CTOR_OFFSET))(this);
	}

	::System::Void LJIFLLJLKEJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AHFKCDLNMOC_FONNNKGINFB_LJIFLLJLKEJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KCHMEIPHLFL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AHFKCDLNMOC_FONNNKGINFB_KCHMEIPHLFL_OFFSET))(this, PIIPCLCCOIG);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFAMDCIGGFB.h"
#include "unitysdk/System/Object.h"

class EKPCAPGLDIO;

#define OKJJALOJEME_HFHCKEHNPID_OFFSET UNITYSDK_OFFSET(0x1844B170)
#define OKJJALOJEME_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x1844B180)
#define OKJJALOJEME__CTOR_OFFSET UNITYSDK_OFFSET(0x1844B140)

inline static constexpr unsigned int OKJJALOJEME_TypeDefinitionIndex = 51945;

class OKJJALOJEME : public ::System::Object
{
public:
	::EKPCAPGLDIO* HOGCDJNHHPC; // 0x10
	::HFAMDCIGGFB _BPCBEFAGLEG_k__BackingField; // 0x18

	::System::Void _ctor(::EKPCAPGLDIO* HOGCDJNHHPC)
	{
		return ((::System::Void(*)(::PVOID, ::EKPCAPGLDIO*))((::PBYTE)hIl2Cpp + OKJJALOJEME__CTOR_OFFSET))(this, HOGCDJNHHPC);
	}

	::System::Void HFHCKEHNPID(::HFAMDCIGGFB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HFAMDCIGGFB))((::PBYTE)hIl2Cpp + OKJJALOJEME_HFHCKEHNPID_OFFSET))(this, EGEGIMGMJHN);
	}

	::HFAMDCIGGFB IGLFKIBEGGH()
	{
		return ((::HFAMDCIGGFB(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJJALOJEME_IGLFKIBEGGH_OFFSET))(this);
	}
};

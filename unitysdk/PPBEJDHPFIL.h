#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKMEDDHGLNL.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define PPBEJDHPFIL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1C2C75E0)
#define PPBEJDHPFIL_JOOHJBBLBCF_OFFSET UNITYSDK_OFFSET(0x1C2C7030)
#define PPBEJDHPFIL_OPLCKJLDMAA_OFFSET UNITYSDK_OFFSET(0x1C2C77D0)
#define PPBEJDHPFIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C7020)

inline static constexpr unsigned int PPBEJDHPFIL_TypeDefinitionIndex = 73693;

class PPBEJDHPFIL : public ::System::Object
{
public:
	::FGCOIBFFCHB* IKLMFJNMLGP; // 0x10
	::UnityEngine::RectTransform* NLHPGEPJMJC; // 0x18
	::UnityEngine::GameObject* DDICPNAACLJ; // 0x20
	::System::Boolean NBLEOPIEPAF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBEJDHPFIL__CTOR_OFFSET))(this);
	}

	::System::Void JOOHJBBLBCF(::System::UInt32 NJBALIKDOCA, ::NKMEDDHGLNL GJBFELEEKAM, ::System::Boolean CENPFMLPFKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NKMEDDHGLNL, ::System::Boolean))((::PBYTE)hIl2Cpp + PPBEJDHPFIL_JOOHJBBLBCF_OFFSET))(this, NJBALIKDOCA, GJBFELEEKAM, CENPFMLPFKB);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBEJDHPFIL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void OPLCKJLDMAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBEJDHPFIL_OPLCKJLDMAA_OFFSET))(this);
	}
};

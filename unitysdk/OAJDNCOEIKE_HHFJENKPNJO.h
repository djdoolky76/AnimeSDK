#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class OAJDNCOEIKE;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define OAJDNCOEIKE_HHFJENKPNJO_CFGMGAKDOIC_OFFSET UNITYSDK_OFFSET(0x14F571C0)
#define OAJDNCOEIKE_HHFJENKPNJO_FBFPLBKHOOJ_OFFSET UNITYSDK_OFFSET(0x14F572F0)
#define OAJDNCOEIKE_HHFJENKPNJO_MNNAKMABLLK_OFFSET UNITYSDK_OFFSET(0x14F57270)
#define OAJDNCOEIKE_HHFJENKPNJO_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x14F57200)
#define OAJDNCOEIKE_HHFJENKPNJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F571B0)

inline static constexpr unsigned int OAJDNCOEIKE_HHFJENKPNJO_TypeDefinitionIndex = 76083;

class OAJDNCOEIKE_HHFJENKPNJO : public ::System::Object
{
public:
	::OAJDNCOEIKE* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath EFKANKHNCNE; // 0x18
	::Foundation::AssetPath DANPBAKPILL; // 0x28
	::UnityEngine::GameObject* OJBCPOKOBOP; // 0x38
	::UnityEngine::GameObject* HGKNIGMPLAC; // 0x40
	::System::Action* GJCDOGJKNHH; // 0x48
	::System::Boolean BDNHNNNGIFB; // 0x50
	::System::Boolean AOLOBPLANMB; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJDNCOEIKE_HHFJENKPNJO__CTOR_OFFSET))(this);
	}

	::System::Void CFGMGAKDOIC(::Foundation::AssetPath IELPEPGDFAG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + OAJDNCOEIKE_HHFJENKPNJO_CFGMGAKDOIC_OFFSET))(this, IELPEPGDFAG);
	}

	::System::Void NBCIIJNMMCI(::UnityEngine::GameObject* CPEANEAEBLE, ::Foundation::AssetPath IELPEPGDFAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + OAJDNCOEIKE_HHFJENKPNJO_NBCIIJNMMCI_OFFSET))(this, CPEANEAEBLE, IELPEPGDFAG);
	}

	::System::Void MNNAKMABLLK(::UnityEngine::GameObject* PMIHLEHGEPM, ::Foundation::AssetPath AKACGLMEFHO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + OAJDNCOEIKE_HHFJENKPNJO_MNNAKMABLLK_OFFSET))(this, PMIHLEHGEPM, AKACGLMEFHO);
	}

	::System::Void FBFPLBKHOOJ(::Foundation::AssetPath IELPEPGDFAG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + OAJDNCOEIKE_HHFJENKPNJO_FBFPLBKHOOJ_OFFSET))(this, IELPEPGDFAG);
	}
};

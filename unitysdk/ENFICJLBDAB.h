#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/PhainonPowerNodeState.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define ENFICJLBDAB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1559FAE0)
#define ENFICJLBDAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1559FB30)
#define ENFICJLBDAB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1559F990)
#define ENFICJLBDAB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1559F930)

inline static constexpr unsigned int ENFICJLBDAB_TypeDefinitionIndex = 71929;

	class ENFICJLBDAB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::System::Boolean IAPJFCPEOBL; // 0x68
		// static const ::System::String* FBJEELGJKLK; // 0x0
		// static const ::System::String* IJHFOIAGGDI; // 0x0
		// static const ::System::String* PFBDHNPIBOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFICJLBDAB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFICJLBDAB__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::PhainonPowerNodeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhainonPowerNodeState))((::PBYTE)hIl2Cpp + ENFICJLBDAB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENFICJLBDAB_BIOBBNGDGDF_OFFSET))(this, a1);
		}

	};

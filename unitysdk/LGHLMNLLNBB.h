#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/AcheronPowerNodeState.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define LGHLMNLLNBB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1BCA8B50)
#define LGHLMNLLNBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA8BA0)
#define LGHLMNLLNBB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1BCA8A00)
#define LGHLMNLLNBB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1BCA8880)

inline static constexpr unsigned int LGHLMNLLNBB_TypeDefinitionIndex = 73881;

	class LGHLMNLLNBB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x60
		::UnityEngine::Transform* CBFEKJKIHLN; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::System::Boolean IAPJFCPEOBL; // 0x78
		// static const ::System::String* FBJEELGJKLK; // 0x0
		// static const ::System::String* IJHFOIAGGDI; // 0x0
		// static const ::System::String* PFBDHNPIBOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHLMNLLNBB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHLMNLLNBB__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::AcheronPowerNodeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AcheronPowerNodeState))((::PBYTE)hIl2Cpp + LGHLMNLLNBB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGHLMNLLNBB_BIOBBNGDGDF_OFFSET))(this, a1);
		}

	};

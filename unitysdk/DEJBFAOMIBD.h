#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define DEJBFAOMIBD_CTOR_OFFSET UNITYSDK_OFFSET(0xE50E620)
#define DEJBFAOMIBD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xE50E560)
#define DEJBFAOMIBD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xE50E5C0)
#define DEJBFAOMIBD__ONBIND_OFFSET UNITYSDK_OFFSET(0xE50E500)

	class DEJBFAOMIBD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x60
		::System::Int32 NOHNKAIALPJ; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJBFAOMIBD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJBFAOMIBD__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DEJBFAOMIBD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEJBFAOMIBD_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};

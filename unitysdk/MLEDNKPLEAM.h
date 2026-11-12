#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class LocalizedText; }

#define MLEDNKPLEAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC262BB0)
#define MLEDNKPLEAM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC262B00)
#define MLEDNKPLEAM__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2628F0)
#define MLEDNKPLEAM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC262890)
#define MLEDNKPLEAM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC2629C0)

inline static constexpr unsigned int MLEDNKPLEAM_TypeDefinitionIndex = 74002;

	class MLEDNKPLEAM : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60
		::System::Single LJCNCEDEEMP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEDNKPLEAM_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MLEDNKPLEAM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEDNKPLEAM__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEDNKPLEAM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLEDNKPLEAM_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};

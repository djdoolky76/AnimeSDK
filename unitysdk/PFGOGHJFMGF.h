#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define PFGOGHJFMGF_CTOR_OFFSET UNITYSDK_OFFSET(0xC20EF40)
#define PFGOGHJFMGF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC20EEE0)
#define PFGOGHJFMGF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC20EE80)

inline static constexpr unsigned int PFGOGHJFMGF_TypeDefinitionIndex = 72292;

	class PFGOGHJFMGF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60
		// static const ::System::String* GJBENKGMEKA; // 0x0
		// static const ::System::String* INLJCPEEBJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGOGHJFMGF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGOGHJFMGF__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFGOGHJFMGF_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};

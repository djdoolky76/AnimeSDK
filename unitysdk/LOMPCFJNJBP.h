#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }

#define LOMPCFJNJBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BD7B0)
#define LOMPCFJNJBP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A5BD530)
#define LOMPCFJNJBP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A5BD400)

inline static constexpr unsigned int LOMPCFJNJBP_TypeDefinitionIndex = 74424;

	class LOMPCFJNJBP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
		::RPG::Client::LocalizedText* GBFKFBCCLKK; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPCFJNJBP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPCFJNJBP__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOMPCFJNJBP_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};

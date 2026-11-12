#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define DDOPGDEICED_CTOR_OFFSET UNITYSDK_OFFSET(0xEE37E30)
#define DDOPGDEICED_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xEE37B70)
#define DDOPGDEICED__ONBIND_OFFSET UNITYSDK_OFFSET(0xEE37C40)

inline static constexpr unsigned int DDOPGDEICED_TypeDefinitionIndex = 73738;

	class DDOPGDEICED : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* OBGCEDPOAEF; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::UnityEngine::UI::Text* GEAHKAMKAOJ; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOPGDEICED_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + DDOPGDEICED_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOPGDEICED__ONBIND_OFFSET))(this);
		}

	};

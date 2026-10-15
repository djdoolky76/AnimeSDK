#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define DDOPGDEICED_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F0FB0)
#define DDOPGDEICED_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xE4F0E20)
#define DDOPGDEICED__ONBIND_OFFSET UNITYSDK_OFFSET(0xE4F0EF0)

inline static constexpr unsigned int DDOPGDEICED_TypeDefinitionIndex = 71747;

	class DDOPGDEICED : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::UnityEngine::UI::Text* GEAHKAMKAOJ; // 0x68
		::UnityEngine::UI::Image* OBGCEDPOAEF; // 0x70
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

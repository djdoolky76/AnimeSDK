#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JPJKCHGBOGB;
namespace InControl { class PlayerAction; }

#define KFCMMMMMIIO_DEEMCOMPDJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB388DB0)
#define KFCMMMMMIIO_DEEMCOMPDJM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB38A190)
#define KFCMMMMMIIO_DEEMCOMPDJM_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xB389BE0)

inline static constexpr unsigned int KFCMMMMMIIO_DEEMCOMPDJM_TypeDefinitionIndex = 75579;

	class KFCMMMMMIIO_DEEMCOMPDJM : public ::System::Object
	{
	public:
		::JPJKCHGBOGB* BINIJNJNDEE; // 0x10
		::InControl::PlayerAction* MBBJOMKNFKC; // 0x18
		::InControl::PlayerAction* MEDILGIIOLJ; // 0x20
		::InControl::PlayerAction* HGJBOEJPOJE; // 0x28
		::InControl::PlayerAction* GCBFKBOLFIG; // 0x30
		::System::Single HPCHCEFOKJB; // 0x38
		::UnityEngine::Vector2 MIFKHBDOGLN; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_DEEMCOMPDJM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_DEEMCOMPDJM_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_DEEMCOMPDJM_NINDHOGICJD_OFFSET))(this);
		}

	};

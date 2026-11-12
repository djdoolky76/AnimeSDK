#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define MJNKFBGOEBK_CTOR_OFFSET UNITYSDK_OFFSET(0xC22CC40)
#define MJNKFBGOEBK_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC22C8F0)
#define MJNKFBGOEBK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC22C830)
#define MJNKFBGOEBK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC22CB50)
#define MJNKFBGOEBK_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC22CBA0)
#define MJNKFBGOEBK__ONBIND_OFFSET UNITYSDK_OFFSET(0xC22C770)
#define MJNKFBGOEBK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC22CBF0)

inline static constexpr unsigned int MJNKFBGOEBK_TypeDefinitionIndex = 73645;

	class MJNKFBGOEBK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::UnityEngine::RectTransform* JAKMENOCECF; // 0x68
		::System::Single BFPOCEDAOMA; // 0x70
		::System::Single HPIMBCGKAIP; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKFBGOEBK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKFBGOEBK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJNKFBGOEBK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MJNKFBGOEBK_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKFBGOEBK_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKFBGOEBK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKFBGOEBK_KANMCJHEFJJ_OFFSET))(this);
		}

	};

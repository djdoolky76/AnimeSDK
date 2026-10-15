#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define NBKFFFNJAJH_AINEOFAFCNP_OFFSET UNITYSDK_OFFSET(0xBAD91F0)
#define NBKFFFNJAJH_BAIJCABAHAM_OFFSET UNITYSDK_OFFSET(0xBAD9160)
#define NBKFFFNJAJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD92D0)
#define NBKFFFNJAJH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBAD8F50)
#define NBKFFFNJAJH_JNGBCLIPFBB_OFFSET UNITYSDK_OFFSET(0xBAD8FF0)
#define NBKFFFNJAJH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBAD8EF0)

	class NBKFFFNJAJH : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x10
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::RectTransform*>* HADAMKNKPLI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKFFFNJAJH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + NBKFFFNJAJH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKFFFNJAJH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JNGBCLIPFBB(::System::String* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NBKFFFNJAJH_JNGBCLIPFBB_OFFSET))(this, a1, a2);
		}

		::System::Void BAIJCABAHAM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBKFFFNJAJH_BAIJCABAHAM_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* AINEOFAFCNP(::System::String* a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBKFFFNJAJH_AINEOFAFCNP_OFFSET))(this, a1);
		}

	};

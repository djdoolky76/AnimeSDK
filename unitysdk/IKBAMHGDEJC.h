#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IKBAMHGDEJC_CTOR_OFFSET UNITYSDK_OFFSET(0x16474C40)
#define IKBAMHGDEJC_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0x16474880)
#define IKBAMHGDEJC_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x16474B60)
#define IKBAMHGDEJC_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x16474620)
#define IKBAMHGDEJC_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x164746B0)

inline static constexpr unsigned int IKBAMHGDEJC_TypeDefinitionIndex = 72064;

	class IKBAMHGDEJC : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* APCNOCJOOOL; // 0x18
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBAMHGDEJC_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + IKBAMHGDEJC_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBAMHGDEJC_ONPLUGINUNINIT_OFFSET))(this);
		}

		::UnityEngine::GameObject* INIJCJJLPKM(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IKBAMHGDEJC_INIJCJJLPKM_OFFSET))(this, a1, a2);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IKBAMHGDEJC_MPFKCHHCIMO_OFFSET))(this, a1);
		}

	};

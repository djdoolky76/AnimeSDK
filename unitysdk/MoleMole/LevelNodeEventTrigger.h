#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class CustomEventAction_1; }
namespace MoleMole { class LevelTriggerShapParam; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_LEVELNODEEVENTTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B4CD90)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKENTERTRIGGER_OFFSET UNITYSDK_OFFSET(0x12B4EEF0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKEXITTRIGGER_OFFSET UNITYSDK_OFFSET(0x12B4EE50)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_CONFIGCOLLIDER_OFFSET UNITYSDK_OFFSET(0x12B4E090)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_DIPLKADNKPG_OFFSET UNITYSDK_OFFSET(0x12B4DBD0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_GET_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x12B4DF00)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_IKEPAJPLKKA_OFFSET UNITYSDK_OFFSET(0x12B4D8A0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_OKGBHBDKEDG_OFFSET UNITYSDK_OFFSET(0x12B4EFE0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B4D190)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B4CF40)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12B4EC80)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x12B4ED60)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_SET_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x12B4DF10)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B4D400)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4EF80)

namespace MoleMole
{
	inline static constexpr unsigned int LevelNodeEventTrigger_TypeDefinitionIndex = 38388;

	class LevelNodeEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* MLGFMBDJKFO; // 0x18
		::System::Boolean IKDFKGEEAGE; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* BPLGIIGPIGK; // 0x28
		::System::Boolean enableAvatar; // 0x30
		::System::Boolean enableMonster; // 0x31
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::List_1<::System::String*>* enableGameplayTags; // 0x38
		::Foundation::CustomEventAction_1<::MoleMole::Battle::Entity*>* TriggerEnterDelegate; // 0x40
		::Foundation::CustomEventAction_1<::MoleMole::Battle::Entity*>* TriggerStayDelegate; // 0x48
		::Foundation::CustomEventAction_1<::MoleMole::Battle::Entity*>* TriggerExitDelegate; // 0x50
		::System::Single stayTickInterval; // 0x58
		::System::Single PEPALPOBPOK; // 0x5C
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* JOEMALFMDCG; // 0x60
		::System::Collections::Generic::Queue_1<::UnityEngine::Collider*>* LHDDBBIGIEA; // 0x68
		::System::Collections::Generic::HashSet_1<::System::Int32>* AKMGGGNFABE; // 0x70
		::System::Collections::Generic::Queue_1<::UnityEngine::Collider*>* OBFOLELCHMJ; // 0x78
		::System::Collections::Generic::HashSet_1<::System::Int32>* CLGGMEJEIBE; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_EnableState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_GET_ENABLESTATE_OFFSET))(this);
		}

		::System::Void set_EnableState(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_SET_ENABLESTATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ConfigCollider(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 BEPMDFENBMH, ::MoleMole::LevelTriggerShapParam* HNOPAJLDCFB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::LevelTriggerShapParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_CONFIGCOLLIDER_OFFSET))(this, CKPGOKHECCH, BEPMDFENBMH, HNOPAJLDCFB);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Boolean CheckExitTrigger(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKEXITTRIGGER_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Boolean CheckEnterTrigger(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKENTERTRIGGER_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void IKEPAJPLKKA(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_IKEPAJPLKKA_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void DIPLKADNKPG(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_DIPLKADNKPG_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Boolean OKGBHBDKEDG(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_OKGBHBDKEDG_OFFSET))(this, HOLFNDIMGJJ);
		}
	};
}

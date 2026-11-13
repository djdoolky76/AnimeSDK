#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BFE7E80)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE8400)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_DBFGKFHGPAL_OFFSET UNITYSDK_OFFSET(0x1BFE8380)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_DBOGNAIDCEJ_OFFSET UNITYSDK_OFFSET(0x1BFE8300)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1BFE7F70)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BFE8100)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BFE80B0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_START_OFFSET UNITYSDK_OFFSET(0x1BFE7F20)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_TICK_OFFSET UNITYSDK_OFFSET(0x1BFE8280)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_UNINIT_OFFSET UNITYSDK_OFFSET(0x1BFE8150)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelAnimator_TypeDefinitionIndex = 81031;

	class ChimeraDuelAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::System::Boolean _ManualTick; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_UNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_TICK_OFFSET))(this, a1);
		}

		::System::Void DBOGNAIDCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_DBOGNAIDCEJ_OFFSET))(this);
		}

		::System::Void DBFGKFHGPAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_DBFGKFHGPAL_OFFSET))(this);
		}

	};
}

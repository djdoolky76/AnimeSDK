#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOMAPPOSESWITCHER_CTOR_OFFSET UNITYSDK_OFFSET(0xE29DE50)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_FILLENTITYINFO_1_OFFSET UNITYSDK_OFFSET(0xE29DD00)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_FILLENTITYINFO_OFFSET UNITYSDK_OFFSET(0xE29DC30)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xE29DE30)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xE29DE10)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE29DDB0)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_GET_ISDYNAMICCREATED_OFFSET UNITYSDK_OFFSET(0xE29DDF0)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xE29DDD0)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xE29DE40)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xE29DE20)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE29DDC0)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_SET_ISDYNAMICCREATED_OFFSET UNITYSDK_OFFSET(0xE29DE00)
#define RPG_CLIENT_MONOMAPPOSESWITCHER_SET_PROPID_OFFSET UNITYSDK_OFFSET(0xE29DDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMapPoseSwitcher_TypeDefinitionIndex = 70822;

	class MonoMapPoseSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x18
		::System::UInt32 _PropID_k__BackingField; // 0x1C
		::System::Boolean _IsDynamicCreated_k__BackingField; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x28
		::UnityEngine::Collider* _Collider_k__BackingField; // 0x30
		::System::Single Radius; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* Center; // 0x40
		::RPG::Client::PoseSwitcherType Type; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_CTOR_OFFSET))(this);
		}

		::System::Void FillEntityInfo(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_FILLENTITYINFO_OFFSET))(this, a1, a2);
		}

		::System::Void FillEntityInfo_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_FILLENTITYINFO_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_GET_PROPID_OFFSET))(this);
		}

		::System::Void set_PropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_SET_PROPID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDynamicCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_GET_ISDYNAMICCREATED_OFFSET))(this);
		}

		::System::Void set_IsDynamicCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_SET_ISDYNAMICCREATED_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_SET_ENTITY_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_GET_COLLIDER_OFFSET))(this);
		}

		::System::Void set_Collider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPPOSESWITCHER_SET_COLLIDER_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KJJMGKAEOED;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_AFTERPROPMOVED_OFFSET UNITYSDK_OFFSET(0xD844370)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_BEFOREPROPMOVE_OFFSET UNITYSDK_OFFSET(0xD8442A0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD844560)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xD844120)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xD844140)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD844100)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_INITPROPMOVEMENT_OFFSET UNITYSDK_OFFSET(0xD8441C0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD844160)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xD844130)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xD844150)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD844110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMovementPropHandle_TypeDefinitionIndex = 68611;

	class MonoMovementPropHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Warning; // 0x18
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x20
		::KJJMGKAEOED* _MovedDelegate_k__BackingField; // 0x28
		::System::Boolean _NeedRefreshRaycast_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x34
		::UnityEngine::Quaternion PACGNNNBPEI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::KJJMGKAEOED* get_MovedDelegate()
		{
			return ((::KJJMGKAEOED*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_MOVEDDELEGATE_OFFSET))(this);
		}

		::System::Void set_MovedDelegate(::KJJMGKAEOED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJMGKAEOED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_MOVEDDELEGATE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedRefreshRaycast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_NEEDREFRESHRAYCAST_OFFSET))(this);
		}

		::System::Void set_NeedRefreshRaycast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_NEEDREFRESHRAYCAST_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_ONENABLE_OFFSET))(this);
		}

		::System::Void InitPropMovement(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_INITPROPMOVEMENT_OFFSET))(this, a1);
		}

		::System::Void BeforePropMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_BEFOREPROPMOVE_OFFSET))(this);
		}

		::System::Void AfterPropMoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_AFTERPROPMOVED_OFFSET))(this);
		}

	};
}

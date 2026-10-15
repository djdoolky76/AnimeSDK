#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/SpeedEffectPartOffset.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_ACJAIGBLMIJ_OFFSET UNITYSDK_OFFSET(0xDEE5FE0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xDEE5C10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE62A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_GET_CURRENTPARTID_OFFSET UNITYSDK_OFFSET(0xDEE5BF0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_KICLKPBDGOJ_OFFSET UNITYSDK_OFFSET(0xDEE60C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_MOABFOBEODB_OFFSET UNITYSDK_OFFSET(0xDEE5CA0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_NIAEFEOCEAB_OFFSET UNITYSDK_OFFSET(0xDEE5F10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SETPARTID_OFFSET UNITYSDK_OFFSET(0xDEE5D10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SET_CURRENTPARTID_OFFSET UNITYSDK_OFFSET(0xDEE5C00)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashSpeedEffect_TypeDefinitionIndex = 75883;

	class MonoRoadRashSpeedEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* LeftChildTransformArray; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* RightChildTransformArray; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RoadRash::SpeedEffectPartOffset>* PartOffsetConfigs; // 0x28
		::System::UInt32 _CurrentPartID_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* IGJGCGKLIAM; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* HFJICPICEBD; // 0x40
		::System::Boolean PFABONEPECF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPartID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_GET_CURRENTPARTID_OFFSET))(this);
		}

		::System::Void set_CurrentPartID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SET_CURRENTPARTID_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void SetPartID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SETPARTID_OFFSET))(this, a1);
		}

		::System::Void MOABFOBEODB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_MOABFOBEODB_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* KICLKPBDGOJ(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_KICLKPBDGOJ_OFFSET))(a1);
		}

		static ::System::Void NIAEFEOCEAB(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_NIAEFEOCEAB_OFFSET))(a1, a2);
		}

		static ::System::Void ACJAIGBLMIJ(::Il2CppArray<::UnityEngine::Transform*>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_ACJAIGBLMIJ_OFFSET))(a1, a2);
		}

	};
}

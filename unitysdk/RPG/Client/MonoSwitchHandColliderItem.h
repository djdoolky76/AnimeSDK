#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xD85DB80)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_BHHEINOJOHE_OFFSET UNITYSDK_OFFSET(0xD85DD80)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD85E400)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_DGBGOIHKJOL_OFFSET UNITYSDK_OFFSET(0xD85E080)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD85DF30)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD85DC20)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_POGIMJPKOGJ_OFFSET UNITYSDK_OFFSET(0xD85E240)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwitchHandColliderItem_TypeDefinitionIndex = 68780;

	class MonoSwitchHandColliderItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Collider*>* Colliders; // 0x18
		::System::String* ControlGroupName; // 0x20
		::System::String* GLNKCKPLBEN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void BHHEINOJOHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_BHHEINOJOHE_OFFSET))(this, a1);
		}

		::System::Void DGBGOIHKJOL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_DGBGOIHKJOL_OFFSET))(this, a1);
		}

		::System::Void POGIMJPKOGJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_POGIMJPKOGJ_OFFSET))(this, a1);
		}

	};
}

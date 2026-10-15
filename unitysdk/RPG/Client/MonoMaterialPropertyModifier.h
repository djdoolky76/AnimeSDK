#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMaterialPropertyModifier_MBProperty.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_AANJOJOELKE_OFFSET UNITYSDK_OFFSET(0xD84D220)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD84CE80)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xD84D390)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD84D000)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD84CF80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaterialPropertyModifier_TypeDefinitionIndex = 68506;

	class MonoMaterialPropertyModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x18
		::System::Int32 MaterialIndex; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty1; // 0x28
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty2; // 0x60
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty3; // 0x98
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty4; // 0xD0
		::System::Boolean KValueIsOn; // 0x108
		::System::Byte _padding1[0x7];
		::UnityEngine::MaterialPropertyBlock* AMOGIBBMIEJ; // 0x110
		::System::Boolean JGPHLKJJCPO; // 0x118
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::Object*>* CEJFMIKGHPP; // 0x120
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AANJOJOELKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_AANJOJOELKE_OFFSET))(this);
		}

	};
}

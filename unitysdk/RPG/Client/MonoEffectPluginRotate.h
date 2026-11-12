#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FHPIJAAIBPH;
namespace System { class Object; }

#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE25A700)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE25A920)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE25A8C0)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE25A810)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginRotate_TypeDefinitionIndex = 72070;

	class MonoEffectPluginRotate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* RotateNodes; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Byte _padding0[0x4];
		::FHPIJAAIBPH* KADDKEGNCHE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_LATEUPDATE_OFFSET))(this);
		}

	};
}

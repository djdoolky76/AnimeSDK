#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FHPIJAAIBPH;
namespace System { class Object; }

#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8086A0)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD8088C0)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD808860)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8087B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginRotate_TypeDefinitionIndex = 70105;

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

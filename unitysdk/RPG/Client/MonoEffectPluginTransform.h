#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0xD804D60)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_JAMNHDBMOPC_OFFSET UNITYSDK_OFFSET(0xD8046D0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD8043E0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD804380)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD804CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTransform_TypeDefinitionIndex = 70127;

	class MonoEffectPluginTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean HDJOGGDMCIO; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* KBFFMAPGMOA; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* CJCBDMPLDIE; // 0x28
		::System::Int32 GMBHEONGNFC; // 0x30
		::System::Int32 EDANMGLAIBN; // 0x34
		::System::Int32 ELACKDGPNBA; // 0x38
		::System::Int32 NKNHKBMHHKO; // 0x3C
		::System::Int32 NELMGHMDNNN; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JAMNHDBMOPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_JAMNHDBMOPC_OFFSET))(this);
		}

	};
}

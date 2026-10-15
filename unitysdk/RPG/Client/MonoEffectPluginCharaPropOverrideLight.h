#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightModule.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Space.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E6A20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_INIT_OFFSET UNITYSDK_OFFSET(0xD7E6870)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7E68D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E6920)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropOverrideLight_TypeDefinitionIndex = 69973;

	class MonoEffectPluginCharaPropOverrideLight : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::UnityEngine::Space OverrideLightSpace; // 0x40
		::System::Boolean OverrideLightFollowRotation; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::Client::TAUtils::OverrideLightModule OverrideLightModule; // 0x48
		::UnityEngine::Material* CJMPDEJJAJL; // 0x198
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D11A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_INIT_OFFSET UNITYSDK_OFFSET(0xD7D0E70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7D1150)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7D0F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropCustomLightDir_TypeDefinitionIndex = 69952;

	class MonoEffectPluginCharaPropCustomLightDir : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Single UseCustomDir; // 0x40
		::UnityEngine::Vector3 CustomLightDir; // 0x44
		::UnityEngine::Transform* LightTrans; // 0x50
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0x58
		::UnityEngine::Vector4 BCNIKNBMNPM; // 0x60
		::UnityEngine::Vector3 PNAEENNKGLD; // 0x70
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* CJMPDEJJAJL; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UNINIT_OFFSET))(this);
		}

	};
}

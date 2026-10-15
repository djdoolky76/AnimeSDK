#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E07E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_INIT_OFFSET UNITYSDK_OFFSET(0xD7E0480)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7E0790)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E0520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropEmission_TypeDefinitionIndex = 69956;

	class MonoEffectPluginCharaPropEmission : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_EmissionThreshold; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single _EmissionThreshold; // 0x44
		::System::Boolean Toggle_EmissionIntensity; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single _EmissionIntensity; // 0x4C
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UNINIT_OFFSET))(this);
		}

	};
}

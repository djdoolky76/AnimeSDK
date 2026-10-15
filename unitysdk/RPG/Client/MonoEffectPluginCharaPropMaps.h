#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_CTOR_OFFSET UNITYSDK_OFFSET(0xD7DBBA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_INIT_OFFSET UNITYSDK_OFFSET(0xD7DB6E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7DB780)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7DB7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropMaps_TypeDefinitionIndex = 69970;

	class MonoEffectPluginCharaPropMaps : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_MainTex; // 0x40
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture2D* _MainTex; // 0x48
		::System::Boolean Toggle_Color; // 0x50
		::System::Byte _padding1[0x3];
		::UnityEngine::Color _Color; // 0x54
		::System::Boolean Toggle_BackColor; // 0x64
		::System::Byte _padding2[0x3];
		::UnityEngine::Color _BackColor; // 0x68
		::System::Boolean Toggle_LightMap; // 0x78
		::System::Byte _padding3[0x7];
		::UnityEngine::Texture2D* _LightMap; // 0x80
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

	};
}

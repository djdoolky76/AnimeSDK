#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D9230)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_INIT_OFFSET UNITYSDK_OFFSET(0xD7D89D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7D91E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7D8A70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceExpression_TypeDefinitionIndex = 69959;

	class MonoEffectPluginCharaPropFaceExpression : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_ExCheekColor; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _ExCheekColor; // 0x44
		::System::Boolean Toggle_ExMapThreshold; // 0x54
		::System::Byte _padding1[0x3];
		::System::Single _ExMapThreshold; // 0x58
		::System::Boolean Toggle_ExSpecularIntensity; // 0x5C
		::System::Byte _padding2[0x3];
		::System::Single _ExSpecularIntensity; // 0x60
		::System::Boolean Toggle_ExCheekIntensity; // 0x64
		::System::Byte _padding3[0x3];
		::System::Single _ExCheekIntensity; // 0x68
		::System::Boolean Toggle_ExShyColor; // 0x6C
		::System::Byte _padding4[0x3];
		::UnityEngine::Color _ExShyColor; // 0x70
		::System::Boolean Toggle_ExShyIntensity; // 0x80
		::System::Byte _padding5[0x3];
		::System::Single _ExShyIntensity; // 0x84
		::System::Boolean Toggle_ExShadowColor; // 0x88
		::System::Byte _padding6[0x3];
		::UnityEngine::Color _ExShadowColor; // 0x8C
		::System::Boolean Toggle_ExEyeColor; // 0x9C
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _ExEyeColor; // 0xA0
		::System::Boolean Toggle_ExShadowIntensity; // 0xB0
		::System::Byte _padding8[0x3];
		::System::Single _ExShadowIntensity; // 0xB4
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UNINIT_OFFSET))(this);
		}

	};
}

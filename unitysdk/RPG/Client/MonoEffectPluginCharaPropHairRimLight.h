#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E4560)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_INIT_OFFSET UNITYSDK_OFFSET(0xD7E3C70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7E4510)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E3D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropHairRimLight_TypeDefinitionIndex = 69963;

	class MonoEffectPluginCharaPropHairRimLight : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_RimLightMode; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single _RimLightMode; // 0x44
		::System::Boolean Toggle_RColor0; // 0x48
		::System::Byte _padding1[0x3];
		::UnityEngine::Color _RimColor0; // 0x4C
		::System::Boolean Toggle_RimWidth; // 0x5C
		::System::Byte _padding2[0x3];
		::System::Single _RimWidth; // 0x60
		::System::Boolean Toggle_RimBlendMode; // 0x64
		::System::Byte _padding3[0x3];
		::System::Single _RimBlendMode; // 0x68
		::System::Boolean Toggle_RimSoftness0; // 0x6C
		::System::Byte _padding4[0x3];
		::System::Single _RimSoftness0; // 0x70
		::System::Boolean Toggle_RimDarkenValue; // 0x74
		::System::Byte _padding5[0x3];
		::System::Single _RimDarkenValue; // 0x78
		::System::Boolean Toggle_RimOffset; // 0x7C
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector4 _RimOffset; // 0x80
		::System::Boolean Toggle_FresnelColor; // 0x90
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _FresnelColor; // 0x94
		::System::Boolean Toggle_FresnelBSI; // 0xA4
		::System::Byte _padding8[0x3];
		::UnityEngine::Vector4 _FresnelBSI; // 0xA8
		::System::Boolean Toggle_FresnelColorStrength; // 0xB8
		::System::Byte _padding9[0x3];
		::System::Single _FresnelColorStrength; // 0xBC
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UNINIT_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropRimLight_FilterType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E93A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_INIT_OFFSET UNITYSDK_OFFSET(0xD7E7B90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E7B50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7E7EB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E7F00)

namespace RPG::Client
{
	class MonoEffectPluginCharaPropRimLight : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_Filter; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::Client::MonoEffectPluginCharaPropRimLight_FilterType _Filter; // 0x44
		::System::Boolean Toggle_RimBasicBias; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single _RimBasicBias; // 0x4C
		::System::Boolean Toggle_RimWidth; // 0x50
		::System::Byte _padding2[0x3];
		::System::Single _RimWidth; // 0x54
		::System::Boolean Toggle_RimOffset; // 0x58
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector4 _RimOffset; // 0x5C
		::System::Boolean Toggle_FresnelColor; // 0x6C
		::System::Byte _padding4[0x3];
		::UnityEngine::Color _FresnelColor; // 0x70
		::System::Boolean Toggle_FresnelBSI; // 0x80
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector4 _FresnelBSI; // 0x84
		::System::Boolean Toggle_FresnelColorStrength; // 0x94
		::System::Byte _padding6[0x3];
		::System::Single _FresnelColorStrength; // 0x98
		::System::Boolean Toggle_RColor0; // 0x9C
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _RimColor0; // 0xA0
		::System::Boolean Toggle_RColor1; // 0xB0
		::System::Byte _padding8[0x3];
		::UnityEngine::Color _RimColor1; // 0xB4
		::System::Boolean Toggle_RColor2; // 0xC4
		::System::Byte _padding9[0x3];
		::UnityEngine::Color _RimColor2; // 0xC8
		::System::Boolean Toggle_RColor3; // 0xD8
		::System::Byte _padding10[0x3];
		::UnityEngine::Color _RimColor3; // 0xDC
		::System::Boolean Toggle_RColor4; // 0xEC
		::System::Byte _padding11[0x3];
		::UnityEngine::Color _RimColor4; // 0xF0
		::System::Boolean Toggle_RColor5; // 0x100
		::System::Byte _padding12[0x3];
		::UnityEngine::Color _RimColor5; // 0x104
		::System::Boolean Toggle_RColor6; // 0x114
		::System::Byte _padding13[0x3];
		::UnityEngine::Color _RimColor6; // 0x118
		::System::Boolean Toggle_RColor7; // 0x128
		::System::Byte _padding14[0x3];
		::UnityEngine::Color _RimColor7; // 0x12C
		::System::Boolean Toggle_RColorIntensity; // 0x13C
		::System::Byte _padding15[0x3];
		::System::Single _RimColorIntensity; // 0x140
		::System::Byte _padding16[0x4];
		::Il2CppArray<::UnityEngine::Color>* HHEICKBOKIC; // 0x148
		::Il2CppArray<::System::Boolean>* JAAFPHPEJOJ; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

	};
}

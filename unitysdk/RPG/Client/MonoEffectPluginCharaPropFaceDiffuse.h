#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D8940)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_INIT_OFFSET UNITYSDK_OFFSET(0xD7D7290)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7D88F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7D7640)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceDiffuse_TypeDefinitionIndex = 69958;

	class MonoEffectPluginCharaPropFaceDiffuse : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_ShadowColor; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _ShadowColor; // 0x44
		::System::Boolean EnableShadowRampSeparated; // 0x54
		::System::Boolean Toggle_DarkColor; // 0x55
		::System::Byte _padding1[0x2];
		::UnityEngine::Color _DarkColor; // 0x58
		::System::Boolean Toggle_EyeShadowColor; // 0x68
		::System::Byte _padding2[0x3];
		::UnityEngine::Color _EyeShadowColor; // 0x6C
		::System::Boolean Toggle_EyeBaseShadowColor; // 0x7C
		::System::Byte _padding3[0x3];
		::UnityEngine::Color _EyeBaseShadowColor; // 0x80
		::System::Boolean Toggle_ShadowThreshold; // 0x90
		::System::Byte _padding4[0x3];
		::System::Single _ShadowThreshold; // 0x94
		::System::Boolean Toggle_ShadowFeather; // 0x98
		::System::Byte _padding5[0x3];
		::System::Single _ShadowFeather; // 0x9C
		::System::Boolean Toggle_BackShadowRange; // 0xA0
		::System::Byte _padding6[0x3];
		::System::Single _BackShadowRange; // 0xA4
		::System::Boolean Toggle_NoseLineColor; // 0xA8
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _NoseLineColor; // 0xAC
		::System::Boolean Toggle_NoseLinePower; // 0xBC
		::System::Byte _padding8[0x3];
		::System::Single _NoseLinePower; // 0xC0
		::System::Boolean Toggle_LipLinefixColor; // 0xC4
		::System::Byte _padding9[0x3];
		::UnityEngine::Color _LipLinefixColor; // 0xC8
		::System::Boolean Toggle_LipLineFixThrd; // 0xD8
		::System::Byte _padding10[0x3];
		::System::Single _LipLineFixThrd; // 0xDC
		::System::Boolean Toggle_LipLineFixStart; // 0xE0
		::System::Byte _padding11[0x3];
		::System::Single _LipLineFixStart; // 0xE4
		::System::Boolean Toggle_LipLineFixMax; // 0xE8
		::System::Byte _padding12[0x3];
		::System::Single _LipLineFixMax; // 0xEC
		::System::Boolean Toggle_EyeEffectProcs; // 0xF0
		::System::Byte _padding13[0x3];
		::System::Single _EyeEffectProcs; // 0xF4
		::System::Boolean Toggle_EyeEffectColor; // 0xF8
		::System::Byte _padding14[0x3];
		::UnityEngine::Color _EyeEffectColor; // 0xFC
		::System::Boolean Toggle_faceBloom; // 0x10C
		::System::Byte _padding15[0x3];
		::System::Single faceBloom; // 0x110
		::System::Boolean Toggle_eyeBloom; // 0x114
		::System::Byte _padding16[0x3];
		::System::Single eyeBloom; // 0x118
		::System::Boolean DisabledEyeBlend; // 0x11C
		::System::Boolean Toggle_StencilEye; // 0x11D
		::System::Byte _padding17[0x2];
		::System::Int32 _StencilEye; // 0x120
		::System::Boolean AKJKFPAOJDA; // 0x124
		::System::Byte _padding18[0x3];
		::System::Int32 PHDMNBNALNA; // 0x128
		::System::Boolean ADBOBPPOELB; // 0x12C
		::System::Boolean IMJFHEDKJEB; // 0x12D
		::System::Byte _padding19[0x2];
		::Il2CppArray<::System::Boolean>* LELIECLCFCB; // 0x130
		::Il2CppArray<::System::Boolean>* JBDMINJIDJB; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UNINIT_OFFSET))(this);
		}

	};
}

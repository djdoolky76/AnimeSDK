#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_CTOR_OFFSET UNITYSDK_OFFSET(0xD7EDF30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_INIT_OFFSET UNITYSDK_OFFSET(0xD7ECD30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7EDE40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7ECDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropStarrySky_TypeDefinitionIndex = 69980;

	class MonoEffectPluginCharaPropStarrySky : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _EnableStarrySky; // 0x40
		::System::Boolean Toggle_SkyTex; // 0x41
		::System::Byte _padding0[0x6];
		::UnityEngine::Texture2D* _SkyTex; // 0x48
		::System::Boolean Toggle_SkyTexTiling; // 0x50
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 _SkyTexTiling; // 0x54
		::System::Boolean Toggle_SkyTexOffset; // 0x5C
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 _SkyTexOffset; // 0x60
		::System::Boolean Toggle_SkyMask; // 0x68
		::System::Byte _padding3[0x7];
		::UnityEngine::Texture2D* _SkyMask; // 0x70
		::System::Boolean Toggle_SkyMaskTiling; // 0x78
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector2 _SkyMaskTiling; // 0x7C
		::System::Boolean Toggle_SkyMaskOffset; // 0x84
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector2 _SkyMaskOffset; // 0x88
		::System::Boolean Toggle_SkyRange; // 0x90
		::System::Byte _padding6[0x3];
		::System::Single _SkyRange; // 0x94
		::System::Boolean Toggle_SkyStarColor; // 0x98
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _SkyStarColor; // 0x9C
		::System::Boolean Toggle_SkyStarTex; // 0xAC
		::System::Byte _padding8[0x3];
		::UnityEngine::Texture2D* _SkyStarTex; // 0xB0
		::System::Boolean Toggle_SkyStarTexTiling; // 0xB8
		::System::Byte _padding9[0x3];
		::UnityEngine::Vector2 _SkyStarTexTiling; // 0xBC
		::System::Boolean Toggle_SkyStarTexOffset; // 0xC4
		::System::Byte _padding10[0x3];
		::UnityEngine::Vector2 _SkyStarTexOffset; // 0xC8
		::System::Boolean Toggle_SkyStarTexScale; // 0xD0
		::System::Byte _padding11[0x3];
		::System::Single _SkyStarTexScale; // 0xD4
		::System::Boolean Toggle_SkyStarSpeed; // 0xD8
		::System::Byte _padding12[0x3];
		::UnityEngine::Vector4 _SkyStarSpeed; // 0xDC
		::System::Boolean Toggle_SkyStarDepthScale; // 0xEC
		::System::Byte _padding13[0x3];
		::System::Single _SkyStarDepthScale; // 0xF0
		::System::Boolean Toggle_SkyStarMaskTex; // 0xF4
		::System::Byte _padding14[0x3];
		::UnityEngine::Texture2D* _SkyStarMaskTex; // 0xF8
		::System::Boolean Toggle_SkyStarMaskTexTiling; // 0x100
		::System::Byte _padding15[0x3];
		::UnityEngine::Vector2 _SkyStarMaskTexTiling; // 0x104
		::System::Boolean Toggle_SkyStarMaskTexOffset; // 0x10C
		::System::Byte _padding16[0x3];
		::UnityEngine::Vector2 _SkyStarMaskTexOffset; // 0x110
		::System::Boolean Toggle_SkyStarMaskTexScale; // 0x118
		::System::Byte _padding17[0x3];
		::System::Single _SkyStarMaskTexScale; // 0x11C
		::System::Boolean Toggle_SkyStarMaskTexSpeed; // 0x120
		::System::Byte _padding18[0x3];
		::System::Single _SkyStarMaskTexSpeed; // 0x124
		::System::Boolean Toggle_SkyFresnelColor; // 0x128
		::System::Byte _padding19[0x3];
		::UnityEngine::Color _SkyFresnelColor; // 0x12C
		::System::Boolean Toggle_SkyFresnelBaise; // 0x13C
		::System::Byte _padding20[0x3];
		::System::Single _SkyFresnelBaise; // 0x140
		::System::Boolean Toggle_SkyFresnelScale; // 0x144
		::System::Byte _padding21[0x3];
		::System::Single _SkyFresnelScale; // 0x148
		::System::Boolean Toggle_SkyFresnelSmooth; // 0x14C
		::System::Byte _padding22[0x3];
		::System::Single _SkyFresnelSmooth; // 0x150
		::System::Byte _padding23[0x4];
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UNINIT_OFFSET))(this, a1);
		}

	};
}

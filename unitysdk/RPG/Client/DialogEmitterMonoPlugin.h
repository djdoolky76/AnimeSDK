#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOKHPCKLAN_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_AlignmentMode.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_ContentType.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_EmitType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PNJJDIDBMNM.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBFC4A0)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBFC370)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xCBF4590)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xCBFBC80)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFONLYRENDERER_OFFSET UNITYSDK_OFFSET(0xCBFBB30)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFSHOWTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xCBFBBF0)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFUSESTATICEMOJI_OFFSET UNITYSDK_OFFSET(0xCBFBB90)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFUSETEXT_OFFSET UNITYSDK_OFFSET(0xCBFBB40)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xCBFBD30)
#define RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xCBFC360)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterMonoPlugin_TypeDefinitionIndex = 70893;

	class DialogEmitterMonoPlugin
	{
	public:
		::UnityEngine::Mesh* BackMesh; // 0x30
		::UnityEngine::Material* BackMaterial; // 0x38
		::UnityEngine::Mesh* PatternMesh; // 0x40
		::UnityEngine::Material* EmojiMaterial; // 0x48
		::UnityEngine::Material* TextMaterial; // 0x50
		::System::String* FontAssetPath; // 0x58
		::System::Boolean IfOverrideAlignment; // 0x60
		::System::Boolean IfOverrideType; // 0x61
		::System::Boolean IfOverrideTextColor; // 0x62
		::System::Boolean DrawHandle; // 0x63
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* DialogDatas; // 0x68
		::System::Boolean IfUseBackboard; // 0x70
		::System::Byte _padding1[0x3];
		::RPG::Client::DialogEmitterBehavior_ContentType ContentType; // 0x74
		::System::Single HorizontalPadding; // 0x78
		::System::Single VerticalPadding; // 0x7C
		::System::Single BaseBoardAspect; // 0x80
		::RPG::Client::DialogEmitterBehavior_AlignmentMode Alignment; // 0x84
		::System::Single PatternSize; // 0x88
		::System::Single NormalTextSize; // 0x8C
		::UnityEngine::Color TextColor; // 0x90
		::System::Single PatternPadding; // 0xA0
		::System::Boolean IfUniformFontSize; // 0xA4
		::System::Byte _padding2[0x3];
		::RPG::Client::DialogEmitterBehavior_EmitType EmitType; // 0xA8
		::System::Boolean IfApplyRootTransform; // 0xAC
		::System::Boolean IfCacheLocalMatrix; // 0xAD
		::System::Byte _padding3[0x2];
		::UnityEngine::Vector3 VolumeSize; // 0xB0
		::System::Int32 MaxCount; // 0xBC
		::System::Single RefreshInterval; // 0xC0
		::System::Single RefreshIntervalJitter; // 0xC4
		::System::Single Speed; // 0xC8
		::System::Single SpeedJitter; // 0xCC
		::UnityEngine::Vector3 Direction; // 0xD0
		::System::Single LifeTime; // 0xDC
		::System::Boolean IfUseFrustumCulling; // 0xE0
		::System::Boolean IfUseSizeOverLifeTime; // 0xE1
		::System::Byte _padding4[0x6];
		::UnityEngine::AnimationCurve* SizeCurve; // 0xE8
		::System::Boolean IfUseOpacityOverLifeTime; // 0xF0
		::System::Byte _padding5[0x7];
		::UnityEngine::AnimationCurve* OpacityCurve; // 0xF8
		::System::Boolean IfUseOverlapDetection; // 0x100
		::System::Byte _padding6[0x3];
		::System::Int32 VerticalSliceCount; // 0x104
		::System::Single HorizontalDetectDist; // 0x108
		::System::Single VerticalAlignRatio; // 0x10C
		static ::System::String** StaticGet_FADILKPGCEM()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "DialogEmitterMonoPlugin")->GetStaticField(0x21430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_CCTOR_OFFSET))();
		}

		::System::Boolean get_IfOnlyRenderer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFONLYRENDERER_OFFSET))(this);
		}

		::System::Boolean get_IfUseText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFUSETEXT_OFFSET))(this);
		}

		::System::Boolean get_IfUseStaticEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFUSESTATICEMOJI_OFFSET))(this);
		}

		::System::Boolean get_IfShowTextColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_IFSHOWTEXTCOLOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::PNJJDIDBMNM get_RenderBudgetData()
		{
			return ((::PNJJDIDBMNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::IKOKHPCKLAN_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::IKOKHPCKLAN_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

	};
}

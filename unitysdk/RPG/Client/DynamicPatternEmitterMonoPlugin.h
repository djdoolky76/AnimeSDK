#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOKHPCKLAN_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/DynamicPatternEmitterBehavior_SimulationSpaceType.h"
#include "unitysdk/RPG/Client/DynamicPatternEmitterMonoPlugin_LayoutTypes.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PNJJDIDBMNM.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCF99E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCCF98F0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xCCF5660)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xCCF9660)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xCCF94F0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0xCCF9510)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xCCF9710)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xCCF98E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xCCF5260)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_MBNMJFHKIIE_OFFSET UNITYSDK_OFFSET(0xCCF94E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_MOFMBHNLCNB_OFFSET UNITYSDK_OFFSET(0xCCF94D0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xCCF9500)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0xCCF9520)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xCCF9530)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STOPPLAY_OFFSET UNITYSDK_OFFSET(0xCCF95E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPatternEmitterMonoPlugin_TypeDefinitionIndex = 70897;

	class DynamicPatternEmitterMonoPlugin
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x30
		::UnityEngine::Material* Mat; // 0x38
		::System::Int32 SelectedIndex; // 0x40
		::System::UInt32 PatternCount; // 0x44
		::UnityEngine::Vector3 PatternSize; // 0x48
		::System::Boolean IfOverrideInterval; // 0x54
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 IntervalRange; // 0x58
		::System::Boolean IfOverridePhase; // 0x60
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 PhaseRange; // 0x64
		::System::Boolean IfOverrideAudioEvent; // 0x6C
		::System::Byte _padding2[0x3];
		::Il2CppArray<::System::Object*>* PatternDatas; // 0x70
		::System::Single Period; // 0x78
		::System::Single Phase; // 0x7C
		::System::Single Interval; // 0x80
		::RPG::Client::DynamicPatternEmitterBehavior_SimulationSpaceType SimulationSpace; // 0x84
		::System::Boolean IfUseBillboard; // 0x88
		::System::Boolean IfAutoPlay; // 0x89
		::System::Boolean IfLoop; // 0x8A
		::System::Boolean IfEmitByDist; // 0x8B
		::System::Single EmitDist; // 0x8C
		::System::Boolean IfUseFrustumCulling; // 0x90
		::System::Byte _padding3[0x3];
		::RPG::Client::DynamicPatternEmitterMonoPlugin_LayoutTypes LayoutType; // 0x94
		::UnityEngine::Quaternion LayoutRotate; // 0x98
		::System::Single PatternDist; // 0xA8
		::System::Int32 SeedRandom; // 0xAC
		::UnityEngine::Vector3 BoxSize; // 0xB0
		::System::Boolean IfUsePosAnim; // 0xBC
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector3 PosAmplitude; // 0xC0
		::System::Byte _padding5[0x4];
		::UnityEngine::AnimationCurve* PosCurve0; // 0xD0
		::System::Boolean IfUseScaleAnim; // 0xD8
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector3 ScaleAmplitude; // 0xDC
		::UnityEngine::AnimationCurve* ScaleCurve0; // 0xE8
		::System::Boolean IfUseWobblyAnim; // 0xF0
		::System::Byte _padding7[0x3];
		::System::Single WobblyAmplitude; // 0xF4
		::System::Single WobblyFrequency; // 0xF8
		::System::Boolean IfUseOpacityAnim; // 0xFC
		::System::Byte _padding8[0x3];
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x100
		::System::Boolean IfReceiveSignal; // 0x108
		::System::Byte _padding9[0x7];
		::System::String* Channel; // 0x110
		::System::Single Signal; // 0x118
		::System::Boolean IfUseAudio; // 0x11C
		::System::Byte _padding10[0x3];
		::System::String* AudioEventName; // 0x120
		::System::Single AudioDelay; // 0x128
		::System::Boolean IfPlayAudioPerPattern; // 0x12C
		::System::Byte _padding11[0x3];
		::UnityEngine::GameObject* _AudioPlayerGO_k__BackingField; // 0x130
		::UnityEngine::Transform* DLFBEADOODM; // 0x138
		::System::Boolean _IfShowAllDialog_k__BackingField; // 0x140
		static ::System::String** StaticGet_FADILKPGCEM()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "DynamicPatternEmitterMonoPlugin")->GetStaticField(0x2E7C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_CCTOR_OFFSET))();
		}

		::System::Boolean MOFMBHNLCNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_MOFMBHNLCNB_OFFSET))(this);
		}

		::System::Boolean MBNMJFHKIIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_MBNMJFHKIIE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AudioPlayerGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET))(this);
		}

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_IfShowAllDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET))(this);
		}

		::System::Void set_IfShowAllDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET))(this, a1);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STARTPLAY_OFFSET))(this);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STOPPLAY_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::PNJJDIDBMNM get_RenderBudgetData()
		{
			return ((::PNJJDIDBMNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::IKOKHPCKLAN_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::IKOKHPCKLAN_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

	};
}

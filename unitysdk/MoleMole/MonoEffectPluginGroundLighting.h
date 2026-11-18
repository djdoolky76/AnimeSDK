#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginGroundLighting_LineFloatRange.h"
#include "unitysdk/LineLightingV2_LineLightingV2Param.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_DOGBODCIKGG_OFFSET UNITYSDK_OFFSET(0x119397D0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETCURVEWIDTH_OFFSET UNITYSDK_OFFSET(0x1193A330)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETDURATION_OFFSET UNITYSDK_OFFSET(0x1193A0C0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETENDPOINT_OFFSET UNITYSDK_OFFSET(0x119395B0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETLINELIGHTINGV2PARAM_OFFSET UNITYSDK_OFFSET(0x11939AC0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x11939850)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDELAYDURATION_OFFSET UNITYSDK_OFFSET(0x1193A260)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDURATION_OFFSET UNITYSDK_OFFSET(0x1193A190)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1193A410)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginGroundLighting_TypeDefinitionIndex = 42515;

	class MonoEffectPluginGroundLighting : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Template; // 0x18
		::System::Int32 Count; // 0x20
		::System::Single RepickLength; // 0x24
		::System::String* EndPointEffect; // 0x28
		::System::Single EndPointEffectDuration; // 0x30
		::System::Single duration; // 0x34
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange durationRange; // 0x38
		::System::Single updateEndDuration; // 0x44
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange updateEndDurationRange; // 0x48
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange updateEndDelayRange; // 0x54
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange curveWidthRange; // 0x60
		::System::Single EndPointEffectOffsetY; // 0x6C
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange StartPointOffsetX; // 0x70
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange StartPointOffsetY; // 0x7C
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange StartPointOffsetZ; // 0x88
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange EndGroundPointOffsetX; // 0x94
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange EndGroundPointOffsetZ; // 0xA0
		::System::Boolean UseBonePoint; // 0xAC
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* BoneListConfigs; // 0xB0
		::System::Boolean UseEntityEndPoint; // 0xB8
		::System::Byte _padding1[0x7];
		::System::String* EntityEndPointAttachPointName; // 0xC0
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange altRotationRange; // 0xC8
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampXRange; // 0xD4
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampYRange; // 0xE0
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampZRange; // 0xEC
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange displacementRange; // 0xF8
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange detailRange; // 0x104
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange curveAmpRange; // 0x110
		::System::Byte _padding2[0x4];
		::System::String* layerMask; // 0x120
		::System::String* tag; // 0x128
		::System::Single rayDiatance; // 0x130
		::System::Single raySphereRadius; // 0x134

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEndPoint(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETENDPOINT_OFFSET))(this, CKPGOKHECCH);
		}

		::UnityEngine::Vector3 GetStartPoint(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETSTARTPOINT_OFFSET))(this, CKPGOKHECCH);
		}

		::LineLightingV2_LineLightingV2Param GetLineLightingV2Param(::LineLightingV2_LineLightingV2Param DEKJDEPKKLH)
		{
			return ((::LineLightingV2_LineLightingV2Param(*)(::PVOID, ::LineLightingV2_LineLightingV2Param))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETLINELIGHTINGV2PARAM_OFFSET))(this, DEKJDEPKKLH);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETDURATION_OFFSET))(this);
		}

		::System::Single GetUpdateEndDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDURATION_OFFSET))(this);
		}

		::System::Single GetUpdateEndDelayDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDELAYDURATION_OFFSET))(this);
		}

		::System::Single GetCurveWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETCURVEWIDTH_OFFSET))(this);
		}

		::System::Single DOGBODCIKGG(::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange LNJFKBBFABK)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_DOGBODCIKGG_OFFSET))(this, LNJFKBBFABK);
		}
	};
}

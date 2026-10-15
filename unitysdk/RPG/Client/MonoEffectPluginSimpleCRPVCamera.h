#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class IEBPDNHIJOC;
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class CustomCRPSampleSetings; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B140)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0xD80B4B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B230)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B340)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B080)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B2D0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD80B420)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD80B4A0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_ENABLETRUECAMERATRANSITION_OFFSET UNITYSDK_OFFSET(0xD80B490)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD80AF60)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80AFA0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0xD80B3B0)

namespace RPG::Client
{
	class MonoEffectPluginSimpleCRPVCamera : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::CustomRP::CRPVirtualCameraVolumn* VCameraVolumn; // 0x28
		::System::Boolean UseVirtualCameraFollowMonoPlugin; // 0x30
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Int32>* OverrideOrderIndex; // 0x38
		::System::Int32 TrueCameraTransitionCRPCameraIndex; // 0x40
		::System::Single TrueCameraTransitionStartTime; // 0x44
		::System::Single ViewPortTransitionDuration; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* ViewPortTransitionCurve; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::CustomCRPSampleSetings*>* CustomCRPSampleSetings; // 0x58
		::System::Boolean DebugAlwaysRefresh; // 0x60
		::System::Byte _padding2[0x7];
		::RPG::Client::CameraNormalConfigData* DebugCurrentCRPCameraData; // 0x68
		::IEBPDNHIJOC* KADDKEGNCHE; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableTrueCameraTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_ENABLETRUECAMERATRANSITION_OFFSET))(this);
		}

		::IEBPDNHIJOC* get_Behavior()
		{
			return ((::IEBPDNHIJOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}

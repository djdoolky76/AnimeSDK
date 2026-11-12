#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginFrameCapture_CaptureCameraType.h"
class NGEHPDOIDNI;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE251510)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_CTOR_OFFSET UNITYSDK_OFFSET(0xE251710)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xE2515C0)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE251400)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE251700)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xE251330)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_RECAPTURE_OFFSET UNITYSDK_OFFSET(0xE251680)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xE251370)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_TICK_OFFSET UNITYSDK_OFFSET(0xE251490)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFrameCapture_TypeDefinitionIndex = 72034;

	class MonoEffectPluginFrameCapture : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::MonoEffectPluginFrameCapture_CaptureCameraType CameraType; // 0x28
		::System::Boolean Immediately; // 0x2C
		::System::Boolean NoPP; // 0x2D
		::System::Byte _padding0[0x2];
		::UnityEngine::Renderer* CaptureRenderer; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* HideNodesOnCapture; // 0x38
		::System::Int32 MaterialIndex; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* TexName; // 0x48
		::NGEHPDOIDNI* KADDKEGNCHE; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_TICK_OFFSET))(this, a1);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void Recapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_RECAPTURE_OFFSET))(this);
		}

		::NGEHPDOIDNI* get_Behavior()
		{
			return ((::NGEHPDOIDNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}

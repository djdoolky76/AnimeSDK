#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class MANCCEALJCK;
namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_APPLYFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0xE1F9820)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1F9870)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE1F9A90)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1F99F0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1F99A0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1F9950)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectFrameCaptureTexPlugin_TypeDefinitionIndex = 71994;

	class MonoEffectFrameCaptureTexPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::System::Object*>* MatTexMapping; // 0x28
		::System::Boolean CaptureUI; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Camera* TargetCamera; // 0x38
		::System::Boolean DontApplyOnActive; // 0x40
		::System::Byte _padding1[0x7];
		::MANCCEALJCK* KADDKEGNCHE; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void ApplyFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_APPLYFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DESTROYPLUGIN_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SignalTransformProcessor_SignalDrivenMode.h"
#include "unitysdk/IDOHKCEJPJP.h"
class StageHarmonyBaseLinkSlot;
namespace RPG::Client { class SignalCurvePool; }
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurveController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC4C60)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xEBC4600)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xEBC4C10)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_ACTIVECURVEPOOL_OFFSET UNITYSDK_OFFSET(0xEBC4C00)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_SIGNALCURVE_OFFSET UNITYSDK_OFFSET(0xEBC2850)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_HGDPEPHHMMH_OFFSET UNITYSDK_OFFSET(0xEBC4BA0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_HMENKDNKCJE_OFFSET UNITYSDK_OFFSET(0xEBC4BF0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xEBC4300)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0xEBC45B0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorMonoPlugin_TypeDefinitionIndex = 72973;

	class StageHarmonySignalDemodulatorMonoPlugin
	{
	public:
		::System::String* Channle; // 0x30
		::System::Int32 SerialID; // 0x38
		::RPG::Client::SignalTransformProcessor_SignalDrivenMode signalDrivenMode; // 0x3C
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* StateCurveControll; // 0x40
		::System::Int32 phaseID; // 0x48
		::System::Single threshold; // 0x4C
		::System::Single speed; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::SignalCurvePool* linkedCurvePool; // 0x58
		::System::Single Signal; // 0x60
		::System::Int32 curveId; // 0x64
		::System::Collections::Generic::List_1<::StageHarmonyBaseLinkSlot*>* OutputSlots; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Load(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::Boolean HGDPEPHHMMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_HGDPEPHHMMH_OFFSET))(this);
		}

		::System::Boolean HMENKDNKCJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_HMENKDNKCJE_OFFSET))(this);
		}

		::RPG::Client::SignalCurvePool* get_ActiveCurvePool()
		{
			return ((::RPG::Client::SignalCurvePool*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_ACTIVECURVEPOOL_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_SignalCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_SIGNALCURVE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}

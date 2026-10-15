#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC9BC160)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_CTOR_OFFSET UNITYSDK_OFFSET(0xC9BC250)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC9BC120)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_OLHINJGDHIP_OFFSET UNITYSDK_OFFSET(0xC9BC0D0)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_TICK_OFFSET UNITYSDK_OFFSET(0xC9BC1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateVoiceLoudness_TypeDefinitionIndex = 68377;

	class CharaEyeBlinkStateVoiceLoudness : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* LoudnessToEyeIntensity; // 0x10
		::System::Single _EyeIntensity; // 0x18
		// static const ::System::String* RTPC_LOUDNESS_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_CTOR_OFFSET))(this);
		}

		::System::Single OLHINJGDHIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_OLHINJGDHIP_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_TICK_OFFSET))(this, a1);
		}

	};
}

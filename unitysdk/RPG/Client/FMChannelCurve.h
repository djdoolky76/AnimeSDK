#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_FMCHANNELCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xCE55F30)
#define RPG_CLIENT_FMCHANNELCURVE_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xCE55E80)

namespace RPG::Client
{
	inline static constexpr unsigned int FMChannelCurve_TypeDefinitionIndex = 70289;

	class FMChannelCurve : public ::System::Object
	{
	public:
		::System::Single Weight; // 0x10
		::System::Single Duration; // 0x14
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMCHANNELCURVE_CTOR_OFFSET))(this);
		}

		::System::Single JAILHGGFLDH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMCHANNELCURVE_JAILHGGFLDH_OFFSET))(this, a1);
		}

	};
}

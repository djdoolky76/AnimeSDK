#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TalkEmotionPoseData; }
namespace System { class String; }

#define RPG_CLIENT_TALKEMOTIONPOSEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE190920)
#define RPG_CLIENT_TALKEMOTIONPOSEDATA_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0xE1908B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkEmotionPoseData_TypeDefinitionIndex = 71126;

	class TalkEmotionPoseData : public ::System::Object
	{
	public:
		::System::String* Clip; // 0x10
		::System::Single LeftWeight; // 0x18
		::System::Single RightWeight; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKEMOTIONPOSEDATA_CTOR_OFFSET))(this);
		}

		::System::Void EOCEFJFIJLK(::RPG::Client::TalkEmotionPoseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkEmotionPoseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKEMOTIONPOSEDATA_EOCEFJFIJLK_OFFSET))(this, a1);
		}

	};
}

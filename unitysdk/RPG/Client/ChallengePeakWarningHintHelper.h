#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeakGroup; }
namespace System { class Object; }

#define RPG_CLIENT_CHALLENGEPEAKWARNINGHINTHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9B3BA0)
#define RPG_CLIENT_CHALLENGEPEAKWARNINGHINTHELPER_TRYGETWARNINGHINT_OFFSET UNITYSDK_OFFSET(0xC9B3850)
#define RPG_CLIENT_CHALLENGEPEAKWARNINGHINTHELPER__TRYGET5WEEKDURATION_OFFSET UNITYSDK_OFFSET(0xC9B3920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakWarningHintHelper_TypeDefinitionIndex = 63200;

	class ChallengePeakWarningHintHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__Warning5WeekTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "ChallengePeakWarningHintHelper")->GetStaticField(0x153E0);
		}

		static ::RPG::Client::TextID* StaticGet__PeakNameTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "ChallengePeakWarningHintHelper")->GetStaticField(0x153F0);
		}

		// static const ::System::String* _Special5WeekConstKey; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKWARNINGHINTHELPER_CCTOR_OFFSET))();
		}

		static ::System::Boolean TryGetWarningHint(::RPG::Client::ChallengePeakGroup* a1, ::RPG::Client::TextID a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChallengePeakGroup*, ::RPG::Client::TextID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKWARNINGHINTHELPER_TRYGETWARNINGHINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _TryGet5WeekDuration(::RPG::Client::ChallengePeakGroup* a1, ::RPG::Client::TextID a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChallengePeakGroup*, ::RPG::Client::TextID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKWARNINGHINTHELPER__TRYGET5WEEKDURATION_OFFSET))(a1, a2, a3);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIHFMECAJBH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B21D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2210)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C___SYNCLINEUP_B__49_0_OFFSET UNITYSDK_OFFSET(0x1E2B2220)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex = 65714;

	class PlayerChallengePeakRecordBossData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::OIHFMECAJBH*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::OIHFMECAJBH*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4A110);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4A118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__49_0(::OIHFMECAJBH* a1, ::OIHFMECAJBH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OIHFMECAJBH*, ::OIHFMECAJBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C___SYNCLINEUP_B__49_0_OFFSET))(this, a1, a2);
		}

	};
}

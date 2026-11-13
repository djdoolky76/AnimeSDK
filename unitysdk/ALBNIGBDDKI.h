#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
class ILDNJGBJGPF;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceBattlePauseViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALBNIGBDDKI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x197B7210)
#define ALBNIGBDDKI_DJNKECFKIJC_OFFSET UNITYSDK_OFFSET(0x197B7340)
#define ALBNIGBDDKI_MOOECCLBNJM_OFFSET UNITYSDK_OFFSET(0x197B79D0)
#define ALBNIGBDDKI_PBMLOCMBHPI_OFFSET UNITYSDK_OFFSET(0x197B7610)
#define ALBNIGBDDKI___CREATEFORMEMORY_G__CREATESTAGERESULTS_2_0_OFFSET UNITYSDK_OFFSET(0x197B7E00)
#define ALBNIGBDDKI___CREATEFORSTORY_G__CHECKISPASSED_3_2_OFFSET UNITYSDK_OFFSET(0x197B8690)
#define ALBNIGBDDKI___CREATEFORSTORY_G__CREATESTAGERESULTS_3_3_OFFSET UNITYSDK_OFFSET(0x197B8730)
#define ALBNIGBDDKI___CREATEFORSTORY_G__CREATETARGETS_3_4_OFFSET UNITYSDK_OFFSET(0x197B8A80)
#define ALBNIGBDDKI___CREATEFORSTORY_G__DETERMINESTATE_3_8_OFFSET UNITYSDK_OFFSET(0x197B9040)
#define ALBNIGBDDKI___CREATEFORSTORY_G__GETREALTIMECURRENTSTAGESCORE_3_1_OFFSET UNITYSDK_OFFSET(0x197B8440)
#define ALBNIGBDDKI___CREATEFORSTORY_G__GETREALTIMETOTALSCORE_3_0_OFFSET UNITYSDK_OFFSET(0x197B8200)

inline static constexpr unsigned int ALBNIGBDDKI_TypeDefinitionIndex = 84345;

	class ALBNIGBDDKI : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* BPLPBPMEODA(::RPG::Client::ChallengeGroupData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* MOOECCLBNJM(::RPG::Client::ChallengeGroupData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI_MOOECCLBNJM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* DJNKECFKIJC(::RPG::Client::ChallengeGroupData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI_DJNKECFKIJC_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* PBMLOCMBHPI(::RPG::Client::ChallengeGroupData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI_PBMLOCMBHPI_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>* __CreateForMemory_g__CreateStageResults_2_0(::ILDNJGBJGPF* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>*(*)(::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORMEMORY_G__CREATESTAGERESULTS_2_0_OFFSET))(a1);
		}

		static ::System::Int32 __CreateForStory_g__GetRealTimeTotalScore_3_0()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORSTORY_G__GETREALTIMETOTALSCORE_3_0_OFFSET))();
		}

		static ::System::Int32 __CreateForStory_g__GetRealTimeCurrentStageScore_3_1(::ILDNJGBJGPF* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::ILDNJGBJGPF*, ::System::Int32))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORSTORY_G__GETREALTIMECURRENTSTAGESCORE_3_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean __CreateForStory_g__CheckIsPassed_3_2(::CKCJOCJGHKC* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::CKCJOCJGHKC*, ::System::Int32))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORSTORY_G__CHECKISPASSED_3_2_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>* __CreateForStory_g__CreateStageResults_3_3(::ILDNJGBJGPF* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>*(*)(::ILDNJGBJGPF*, ::System::Int32))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORSTORY_G__CREATESTAGERESULTS_3_3_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* __CreateForStory_g__CreateTargets_3_4(::CKCJOCJGHKC* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::CKCJOCJGHKC*, ::System::Int32))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORSTORY_G__CREATETARGETS_3_4_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState __CreateForStory_g__DetermineState_3_8(::RPG::Client::BaseChallengeTargetData* a1, ::System::Object* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::RPG::Client::BaseChallengeTargetData*, ::System::Object*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___CREATEFORSTORY_G__DETERMINESTATE_3_8_OFFSET))(a1, a2);
		}

	};

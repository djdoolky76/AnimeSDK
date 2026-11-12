#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJOFODHIMD;
namespace RPG::GameCore::Booklet { class FadeInStepConfig; }
namespace RPG::GameCore::Booklet { class MarkSectionHasReadStepConfig; }
namespace RPG::GameCore::Booklet { class MarkSpreadHasReadStepConfig; }
namespace RPG::GameCore::Booklet { class ParallelStepConfig; }
namespace RPG::GameCore::Booklet { class PlayVoiceStepConfig; }
namespace RPG::GameCore::Booklet { class SequenceStepConfig; }
namespace RPG::GameCore::Booklet { class SkipTimerStepConfig; }
namespace RPG::GameCore::Booklet { class SpreadStepConfig; }
namespace RPG::GameCore::Booklet { class StepConfig; }
namespace RPG::GameCore::Booklet { class WaitAutoPlayStepConfig; }
namespace RPG::GameCore::Booklet { class WaitSecondsStepConfig; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPACFBLJMKF_AGELJHBDAOM_OFFSET UNITYSDK_OFFSET(0xB851600)
#define IPACFBLJMKF_BHCPKNCJOEK_OFFSET UNITYSDK_OFFSET(0xB8514D0)
#define IPACFBLJMKF_BLCCDNIGBOK_OFFSET UNITYSDK_OFFSET(0xB851680)
#define IPACFBLJMKF_BLHILAAPONH_OFFSET UNITYSDK_OFFSET(0xB850E80)
#define IPACFBLJMKF_CFEBHOOLKCD_OFFSET UNITYSDK_OFFSET(0xB851310)
#define IPACFBLJMKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB850B80)
#define IPACFBLJMKF_DGJHKKBBLKK_OFFSET UNITYSDK_OFFSET(0xB851570)
#define IPACFBLJMKF_DJFDPLJGENK_OFFSET UNITYSDK_OFFSET(0xB851010)
#define IPACFBLJMKF_IKAGGMJKHGM_OFFSET UNITYSDK_OFFSET(0xB851830)
#define IPACFBLJMKF_JLMBIBLGNHN_OFFSET UNITYSDK_OFFSET(0xB851700)
#define IPACFBLJMKF_LMKJPELJMKE_OFFSET UNITYSDK_OFFSET(0xB851150)
#define IPACFBLJMKF_OEFKOGIPPAE_OFFSET UNITYSDK_OFFSET(0xB851780)

inline static constexpr unsigned int IPACFBLJMKF_TypeDefinitionIndex = 74509;

	class IPACFBLJMKF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::RPG::GameCore::Booklet::StepConfig*, ::MDJOFODHIMD*>*>* BAJIAHLIGNI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPACFBLJMKF_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MDJOFODHIMD*>* BLHILAAPONH(::RPG::GameCore::Booklet::SpreadStepConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::MDJOFODHIMD*>*(*)(::PVOID, ::RPG::GameCore::Booklet::SpreadStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_BLHILAAPONH_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* DJFDPLJGENK(::RPG::GameCore::Booklet::StepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::StepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_DJFDPLJGENK_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* LMKJPELJMKE(::RPG::GameCore::Booklet::SequenceStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_LMKJPELJMKE_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* CFEBHOOLKCD(::RPG::GameCore::Booklet::ParallelStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::ParallelStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_CFEBHOOLKCD_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* BHCPKNCJOEK(::RPG::GameCore::Booklet::WaitSecondsStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_BHCPKNCJOEK_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* DGJHKKBBLKK(::RPG::GameCore::Booklet::FadeInStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::FadeInStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_DGJHKKBBLKK_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* AGELJHBDAOM(::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_AGELJHBDAOM_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* BLCCDNIGBOK(::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_BLCCDNIGBOK_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* JLMBIBLGNHN(::RPG::GameCore::Booklet::WaitAutoPlayStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_JLMBIBLGNHN_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* OEFKOGIPPAE(::RPG::GameCore::Booklet::SkipTimerStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::SkipTimerStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_OEFKOGIPPAE_OFFSET))(this, a1);
		}

		::MDJOFODHIMD* IKAGGMJKHGM(::RPG::GameCore::Booklet::PlayVoiceStepConfig* a1)
		{
			return ((::MDJOFODHIMD*(*)(::PVOID, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*))((::PBYTE)hIl2Cpp + IPACFBLJMKF_IKAGGMJKHGM_OFFSET))(this, a1);
		}

	};

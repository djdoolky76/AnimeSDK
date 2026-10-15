#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBFCHPINDD_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingConsequenceClass.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingDistanceTier.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingImmediateFinishReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingInvalidReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingLowRejectedReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriority.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriorityModifierFlags.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSchedulerState.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSizeTier.h"
#include "unitysdk/System/Object.h"
class GDMONJOAKHD;
class HPKACEPPPCA;
class KLEFGGIHGMI;

#define BHHGMJKJIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB486E10)

inline static constexpr unsigned int BHHGMJKJIBJ_TypeDefinitionIndex = 73955;

	class BHHGMJKJIBJ : public ::System::Object
	{
	public:
		::GDMONJOAKHD* NCLPEILJFFI; // 0x10
		::HPKACEPPPCA* FMJPMFEDIJL; // 0x18
		::KLEFGGIHGMI* NCEAKEDDIIF; // 0x20
		::RPG::Client::OpenWorld::FadingPriority BPDODDJDKNH; // 0x28
		::System::Int32 DOIMEMBHNNN; // 0x2C
		::System::Int32 KDDMELCIBLO; // 0x30
		::System::Int32 ENCPJHKFJKD; // 0x34
		::System::Boolean GFBKLLGMMDE; // 0x38
		::System::Boolean DAHMPGKNCLK; // 0x39
		::System::Boolean JELEGMOHHEO; // 0x3A
		::System::Boolean AJDFJNFCBIM; // 0x3B
		::System::Int32 IIEFPHKBIKG; // 0x3C
		::RPG::Client::OpenWorld::FadingImmediateFinishReason GOLFPGJLOHL; // 0x40
		::System::Int32 GAKECIACFKK; // 0x44
		::System::Int32 CEMDPJKGBAD; // 0x48
		::RPG::Client::OpenWorld::FadingLowRejectedReason NJJDIJEIGCB; // 0x4C
		::System::Int32 FJCBNFPMOPA; // 0x50
		::BPBFCHPINDD_FadingDoneActionType EOFPHIPDLHB; // 0x54
		::System::Int32 NKDBELKNKCO; // 0x58
		::RPG::Client::OpenWorld::FadingPriorityModifierFlags HHBJGCDFLFE; // 0x5C
		::System::Boolean JNBKCDIFFEL; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 MHGFANNEHEB; // 0x64
		::RPG::Client::OpenWorld::FadingDistanceTier MIOHPNJMCIP; // 0x68
		::RPG::Client::OpenWorld::FadingConsequenceClass AMKLGALIBND; // 0x6C
		::RPG::Client::OpenWorld::FadingPriority EJNKLIKAAPL; // 0x70
		::System::Int32 CDKOLPAGLLG; // 0x74
		::RPG::Client::OpenWorld::FadingSizeTier GJKEMDINKGO; // 0x78
		::System::Boolean BOFJDPOFPJA; // 0x7C
		::System::Boolean JJKJIHMPPNJ; // 0x7D
		::System::Boolean IHDIIMDIAHO; // 0x7E
		::System::Boolean GINJJPMLFNB; // 0x7F
		::System::Int32 KGPNOCPEFGL; // 0x80
		::RPG::Client::OpenWorld::FadingInvalidReason OLHFMIAMPJF; // 0x84
		::System::Boolean LELEHMDCLGE; // 0x88
		::System::Boolean CPGHDHNPIMA; // 0x89
		::System::Boolean PBGKBNNNBFL; // 0x8A
		::System::Boolean GLPBCPPDFLG; // 0x8B
		::System::Int32 DOABBHMMAGM; // 0x8C
		::RPG::Client::OpenWorld::FadingSchedulerState JBABEPNEAME; // 0x90
		::RPG::Client::OpenWorld::FadingPriority NALMBOOCCIN; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHGMJKJIBJ_CTOR_OFFSET))(this);
		}

	};

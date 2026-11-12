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

#define BHHGMJKJIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB43D40)

inline static constexpr unsigned int BHHGMJKJIBJ_TypeDefinitionIndex = 76092;

	class BHHGMJKJIBJ : public ::System::Object
	{
	public:
		::GDMONJOAKHD* NCLPEILJFFI; // 0x10
		::KLEFGGIHGMI* NCEAKEDDIIF; // 0x18
		::HPKACEPPPCA* FMJPMFEDIJL; // 0x20
		::System::Int32 MHGFANNEHEB; // 0x28
		::RPG::Client::OpenWorld::FadingImmediateFinishReason GOLFPGJLOHL; // 0x2C
		::System::Boolean GINJJPMLFNB; // 0x30
		::System::Boolean BOFJDPOFPJA; // 0x31
		::System::Boolean GLPBCPPDFLG; // 0x32
		::System::Boolean CPGHDHNPIMA; // 0x33
		::RPG::Client::OpenWorld::FadingSizeTier GJKEMDINKGO; // 0x34
		::System::Int32 CDKOLPAGLLG; // 0x38
		::BPBFCHPINDD_FadingDoneActionType EOFPHIPDLHB; // 0x3C
		::RPG::Client::OpenWorld::FadingSchedulerState JBABEPNEAME; // 0x40
		::System::Boolean JJKJIHMPPNJ; // 0x44
		::System::Boolean IHDIIMDIAHO; // 0x45
		::System::Byte _padding0[0x2];
		::RPG::Client::OpenWorld::FadingPriorityModifierFlags HHBJGCDFLFE; // 0x48
		::System::Int32 GAKECIACFKK; // 0x4C
		::System::Int32 NKDBELKNKCO; // 0x50
		::System::Boolean GFBKLLGMMDE; // 0x54
		::System::Boolean JELEGMOHHEO; // 0x55
		::System::Boolean JNBKCDIFFEL; // 0x56
		::System::Byte _padding1[0x1];
		::System::Int32 DOIMEMBHNNN; // 0x58
		::RPG::Client::OpenWorld::FadingPriority EJNKLIKAAPL; // 0x5C
		::System::Int32 IIEFPHKBIKG; // 0x60
		::System::Int32 KDDMELCIBLO; // 0x64
		::System::Int32 FJCBNFPMOPA; // 0x68
		::RPG::Client::OpenWorld::FadingPriority NALMBOOCCIN; // 0x6C
		::System::Int32 DOABBHMMAGM; // 0x70
		::System::Boolean AJDFJNFCBIM; // 0x74
		::System::Boolean PBGKBNNNBFL; // 0x75
		::System::Boolean LELEHMDCLGE; // 0x76
		::System::Boolean DAHMPGKNCLK; // 0x77
		::RPG::Client::OpenWorld::FadingDistanceTier MIOHPNJMCIP; // 0x78
		::System::Int32 CEMDPJKGBAD; // 0x7C
		::RPG::Client::OpenWorld::FadingPriority BPDODDJDKNH; // 0x80
		::System::Int32 KGPNOCPEFGL; // 0x84
		::RPG::Client::OpenWorld::FadingConsequenceClass AMKLGALIBND; // 0x88
		::RPG::Client::OpenWorld::FadingLowRejectedReason NJJDIJEIGCB; // 0x8C
		::RPG::Client::OpenWorld::FadingInvalidReason OLHFMIAMPJF; // 0x90
		::System::Int32 ENCPJHKFJKD; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHGMJKJIBJ_CTOR_OFFSET))(this);
		}

	};

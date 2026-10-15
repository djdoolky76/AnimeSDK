#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBIOBFKEKCF.h"
#include "unitysdk/EOCABHPJJJP.h"
#include "unitysdk/GBONKNNPFLF.h"
#include "unitysdk/GNHDAPGOBAE.h"
#include "unitysdk/KFPPDLJEJJA.h"
#include "unitysdk/PFDHDMPMEGE.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PKIIEFHDOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B7F80)
#define PKIIEFHDOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2B7F90)

inline static constexpr unsigned int PKIIEFHDOKD_TypeDefinitionIndex = 68463;

	class PKIIEFHDOKD : public ::System::Object
	{
	public:
		::GNHDAPGOBAE FDBILNKGHHE; // 0x10
		::PFDHDMPMEGE NFJFMDNNBIG; // 0x250
		::RootMotion::FinalIK::GrounderIKThreadSolver HBHLPDHLAMN; // 0x300
		::KFPPDLJEJJA LKACFMGFOAC; // 0x338
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x360
		::GBONKNNPFLF LHFALBCKKLB; // 0x368
		::BBIOBFKEKCF IOCCJDPHPMO; // 0x570
		::EOCABHPJJJP MNOINHJJNEA; // 0x5A8
		::System::Boolean HDMBBDFNNNH; // 0x5E0
		::System::Boolean KFPFKBDANBH; // 0x5E1
		::System::Boolean CHGIKGMLPMI; // 0x5E2
		::System::Boolean GJLGMCCCDCJ; // 0x5E3
		::System::Boolean OJHMAKLGPAJ; // 0x5E4
		::System::Boolean ICBBMHAMLML; // 0x5E5
		::System::Boolean NPALIKFPBAK; // 0x5E6
		::System::Boolean NAHPIFIEDHL; // 0x5E7
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIIEFHDOKD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIIEFHDOKD_DISPOSE_OFFSET))(this);
		}

	};

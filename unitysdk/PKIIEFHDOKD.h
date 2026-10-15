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

#define PKIIEFHDOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BF940)
#define PKIIEFHDOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2BF950)

	class PKIIEFHDOKD : public ::System::Object
	{
	public:
		::PFDHDMPMEGE NFJFMDNNBIG; // 0x10
		::GNHDAPGOBAE FDBILNKGHHE; // 0xC0
		::EOCABHPJJJP MNOINHJJNEA; // 0x300
		::KFPPDLJEJJA LKACFMGFOAC; // 0x338
		::GBONKNNPFLF LHFALBCKKLB; // 0x360
		::BBIOBFKEKCF IOCCJDPHPMO; // 0x568
		::RootMotion::FinalIK::GrounderIKThreadSolver HBHLPDHLAMN; // 0x5A0
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x5D8
		::System::Boolean NAHPIFIEDHL; // 0x5E0
		::System::Boolean KFPFKBDANBH; // 0x5E1
		::System::Boolean HDMBBDFNNNH; // 0x5E2
		::System::Boolean NPALIKFPBAK; // 0x5E3
		::System::Boolean OJHMAKLGPAJ; // 0x5E4
		::System::Boolean GJLGMCCCDCJ; // 0x5E5
		::System::Boolean ICBBMHAMLML; // 0x5E6
		::System::Boolean CHGIKGMLPMI; // 0x5E7
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIIEFHDOKD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIIEFHDOKD_DISPOSE_OFFSET))(this);
		}

	};

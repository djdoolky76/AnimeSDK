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

#define PKIIEFHDOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x147C3840)
#define PKIIEFHDOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147C3850)

inline static constexpr unsigned int PKIIEFHDOKD_TypeDefinitionIndex = 70410;

	class PKIIEFHDOKD : public ::System::Object
	{
	public:
		::PFDHDMPMEGE NFJFMDNNBIG; // 0x10
		::BBIOBFKEKCF IOCCJDPHPMO; // 0xC0
		::EOCABHPJJJP MNOINHJJNEA; // 0xF8
		::KFPPDLJEJJA LKACFMGFOAC; // 0x130
		::GBONKNNPFLF LHFALBCKKLB; // 0x158
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x360
		::RootMotion::FinalIK::GrounderIKThreadSolver HBHLPDHLAMN; // 0x368
		::GNHDAPGOBAE FDBILNKGHHE; // 0x3A0
		::System::Boolean CHGIKGMLPMI; // 0x5E0
		::System::Boolean ICBBMHAMLML; // 0x5E1
		::System::Boolean OJHMAKLGPAJ; // 0x5E2
		::System::Boolean NPALIKFPBAK; // 0x5E3
		::System::Boolean HDMBBDFNNNH; // 0x5E4
		::System::Boolean NAHPIFIEDHL; // 0x5E5
		::System::Boolean GJLGMCCCDCJ; // 0x5E6
		::System::Boolean KFPFKBDANBH; // 0x5E7
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIIEFHDOKD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIIEFHDOKD_DISPOSE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionChangeWaitTimeByVote; }

#define KLGPFABICJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C715B00)
#define KLGPFABICJE_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C715B10)

	class KLGPFABICJE : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* AKGCACBCIOP; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*))((::PBYTE)hIl2Cpp + KLGPFABICJE_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KLGPFABICJE_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
class PKLPHCIDDBP;
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class TeamData; }

#define LIMADKGLHKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D31F0)
#define LIMADKGLHKJ_DKPDNMIEOAC_OFFSET UNITYSDK_OFFSET(0xB6D40A0)
#define LIMADKGLHKJ_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0xB6D38C0)
#define LIMADKGLHKJ_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xB6D3240)
#define LIMADKGLHKJ_HFELDHEGNIN_OFFSET UNITYSDK_OFFSET(0xB6D3A30)
#define LIMADKGLHKJ_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0xB6D39D0)
#define LIMADKGLHKJ_JBFDMIMGCNE_OFFSET UNITYSDK_OFFSET(0xB6D3660)
#define LIMADKGLHKJ_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0xB6D3980)
#define LIMADKGLHKJ_LFPJFEJFGGI_OFFSET UNITYSDK_OFFSET(0xB6D3C80)
#define LIMADKGLHKJ_OHLCMOFCLBP_OFFSET UNITYSDK_OFFSET(0xB6D3E80)
#define LIMADKGLHKJ_OPEBGKHJGGL_OFFSET UNITYSDK_OFFSET(0xB6D34B0)

inline static constexpr unsigned int LIMADKGLHKJ_TypeDefinitionIndex = 61189;

	class LIMADKGLHKJ : public ::HDJIGMBHENE
	{
	public:
		::PKLPHCIDDBP* OFHOHLFOIDB; // 0x20
		::RPG::Client::TeamData* NMKKPEHBKBL; // 0x28
		::RPG::Client::ScheduleTask* PDNIAGKBIFF; // 0x30
		::System::Int32 GBNGJEDMOBJ; // 0x38
		::System::Int32 EJPJOIGJLIA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_IDLEKLJHINH_OFFSET))(this);
		}

		::System::Boolean OPEBGKHJGGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_OPEBGKHJGGL_OFFSET))(this);
		}

		::RPG::Client::TeamData* HFELDHEGNIN()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_HFELDHEGNIN_OFFSET))(this);
		}

		::System::Void JBFDMIMGCNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_JBFDMIMGCNE_OFFSET))(this);
		}

		::System::Void DKPDNMIEOAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_DKPDNMIEOAC_OFFSET))(this);
		}

		::System::Void OHLCMOFCLBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_OHLCMOFCLBP_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* LFPJFEJFGGI()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMADKGLHKJ_LFPJFEJFGGI_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
class PKLPHCIDDBP;
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class TeamData; }

#define LIMADKGLHKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x172F01C0)
#define LIMADKGLHKJ_DKPDNMIEOAC_OFFSET UNITYSDK_OFFSET(0x172F1070)
#define LIMADKGLHKJ_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0x172F0890)
#define LIMADKGLHKJ_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x172F0210)
#define LIMADKGLHKJ_HFELDHEGNIN_OFFSET UNITYSDK_OFFSET(0x172F0A00)
#define LIMADKGLHKJ_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0x172F09A0)
#define LIMADKGLHKJ_JBFDMIMGCNE_OFFSET UNITYSDK_OFFSET(0x172F0630)
#define LIMADKGLHKJ_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0x172F0950)
#define LIMADKGLHKJ_LFPJFEJFGGI_OFFSET UNITYSDK_OFFSET(0x172F0C50)
#define LIMADKGLHKJ_OHLCMOFCLBP_OFFSET UNITYSDK_OFFSET(0x172F0E50)
#define LIMADKGLHKJ_OPEBGKHJGGL_OFFSET UNITYSDK_OFFSET(0x172F0480)

inline static constexpr unsigned int LIMADKGLHKJ_TypeDefinitionIndex = 62574;

	class LIMADKGLHKJ : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* NMKKPEHBKBL; // 0x20
		::RPG::Client::ScheduleTask* PDNIAGKBIFF; // 0x28
		::PKLPHCIDDBP* OFHOHLFOIDB; // 0x30
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

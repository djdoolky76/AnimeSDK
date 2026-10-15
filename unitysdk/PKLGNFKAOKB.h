#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace System { class String; }

#define PKLGNFKAOKB_HDDCMIAALFC_OFFSET UNITYSDK_OFFSET(0xC2D0090)
#define PKLGNFKAOKB_IJIOACLNELM_OFFSET UNITYSDK_OFFSET(0xC2CB370)
#define PKLGNFKAOKB_KOMAOMGJLCC_OFFSET UNITYSDK_OFFSET(0xC2D01A0)
#define PKLGNFKAOKB_MBNHPMFIABH_OFFSET UNITYSDK_OFFSET(0xC2CB4A0)
#define PKLGNFKAOKB_NCOALEFDIIM_OFFSET UNITYSDK_OFFSET(0xC2C9530)
#define PKLGNFKAOKB_OOCAEGPBMBO_OFFSET UNITYSDK_OFFSET(0xC2D4D40)

inline static constexpr unsigned int PKLGNFKAOKB_TypeDefinitionIndex = 75124;

	class PKLGNFKAOKB : public ::System::Object
	{
	public:
		static ::System::Void NCOALEFDIIM(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + PKLGNFKAOKB_NCOALEFDIIM_OFFSET))(a1, a2);
		}

		static ::System::Void IJIOACLNELM(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + PKLGNFKAOKB_IJIOACLNELM_OFFSET))(a1);
		}

		static ::System::Void MBNHPMFIABH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKLGNFKAOKB_MBNHPMFIABH_OFFSET))();
		}

		static ::System::Void HDDCMIAALFC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PKLGNFKAOKB_HDDCMIAALFC_OFFSET))(a1);
		}

		static ::System::String* KOMAOMGJLCC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PKLGNFKAOKB_KOMAOMGJLCC_OFFSET))();
		}

		static ::System::String* OOCAEGPBMBO(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
		{
			return ((::System::String*(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + PKLGNFKAOKB_OOCAEGPBMBO_OFFSET))(a1, a2);
		}

	};

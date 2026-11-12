#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }

#define IGHJBLHCOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x173BDFB0)
#define IGHJBLHCOOI_HCPBEPBKKGF_OFFSET UNITYSDK_OFFSET(0x173BE820)
#define IGHJBLHCOOI__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x173BE870)
#define IGHJBLHCOOI__REBUILD_OFFSET UNITYSDK_OFFSET(0x173BE050)

inline static constexpr unsigned int IGHJBLHCOOI_TypeDefinitionIndex = 77457;

	class IGHJBLHCOOI
	{
	public:
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* FDKGCIDEKKA; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x28
		::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* INONCCKFAEH; // 0x30
		::System::UInt32 FFFFJCOACPK; // 0x38
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a2, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + IGHJBLHCOOI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHJBLHCOOI__REBUILD_OFFSET))(this);
		}

		::System::Void HCPBEPBKKGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHJBLHCOOI_HCPBEPBKKGF_OFFSET))(this);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHJBLHCOOI__CHECKNEEDREBUILD_OFFSET))(this);
		}

	};

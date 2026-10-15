#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }

#define AEOMMHDHPGO_BUILD_OFFSET UNITYSDK_OFFSET(0xCEFCEA0)
#define AEOMMHDHPGO_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFCE80)

inline static constexpr unsigned int AEOMMHDHPGO_TypeDefinitionIndex = 75133;

	class AEOMMHDHPGO
	{
	public:
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x18
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + AEOMMHDHPGO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + AEOMMHDHPGO_BUILD_OFFSET))(this, a1);
		}

	};

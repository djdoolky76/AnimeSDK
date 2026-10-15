#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeInfo; }

#define BHNENBICMKM_BUILD_OFFSET UNITYSDK_OFFSET(0xB48F1C0)
#define BHNENBICMKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB48F1A0)

inline static constexpr unsigned int BHNENBICMKM_TypeDefinitionIndex = 75132;

	class BHNENBICMKM
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* NAGJINCOLPD; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo*))((::PBYTE)hIl2Cpp + BHNENBICMKM_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + BHNENBICMKM_BUILD_OFFSET))(this, a1);
		}

	};

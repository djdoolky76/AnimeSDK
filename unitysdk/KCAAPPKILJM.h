#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLBAIJKEIBM.h"
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define KCAAPPKILJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB32E810)
#define KCAAPPKILJM_EDGLFNBMGPD_OFFSET UNITYSDK_OFFSET(0xB32E820)

inline static constexpr unsigned int KCAAPPKILJM_TypeDefinitionIndex = 75115;

	class KCAAPPKILJM : public ::OLBAIJKEIBM
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + KCAAPPKILJM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EDGLFNBMGPD(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + KCAAPPKILJM_EDGLFNBMGPD_OFFSET))(this, a1);
		}

	};

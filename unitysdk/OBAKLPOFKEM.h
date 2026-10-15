#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLBAIJKEIBM.h"
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define OBAKLPOFKEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD2B260)
#define OBAKLPOFKEM_EDGLFNBMGPD_OFFSET UNITYSDK_OFFSET(0xBD2B270)

inline static constexpr unsigned int OBAKLPOFKEM_TypeDefinitionIndex = 75115;

	class OBAKLPOFKEM : public ::OLBAIJKEIBM
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + OBAKLPOFKEM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EDGLFNBMGPD(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + OBAKLPOFKEM_EDGLFNBMGPD_OFFSET))(this, a1);
		}

	};

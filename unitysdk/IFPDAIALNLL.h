#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLBAIJKEIBM.h"
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define IFPDAIALNLL_CTOR_OFFSET UNITYSDK_OFFSET(0x15F30B00)
#define IFPDAIALNLL_EDGLFNBMGPD_OFFSET UNITYSDK_OFFSET(0x15F30B10)

inline static constexpr unsigned int IFPDAIALNLL_TypeDefinitionIndex = 75114;

	class IFPDAIALNLL : public ::OLBAIJKEIBM
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + IFPDAIALNLL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EDGLFNBMGPD(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + IFPDAIALNLL_EDGLFNBMGPD_OFFSET))(this, a1);
		}

	};

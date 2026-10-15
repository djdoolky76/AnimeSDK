#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLBAIJKEIBM;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define OLBAIJKEIBM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBEFFC00)
#define OLBAIJKEIBM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFFCA0)

inline static constexpr unsigned int OLBAIJKEIBM_TypeDefinitionIndex = 75113;

	class OLBAIJKEIBM : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* HAPGIAOEMEC; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + OLBAIJKEIBM_CTOR_OFFSET))(this, a1);
		}

		static ::OLBAIJKEIBM* BPLPBPMEODA(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
		{
			return ((::OLBAIJKEIBM*(*)(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + OLBAIJKEIBM_BPLPBPMEODA_OFFSET))(a1);
		}

	};

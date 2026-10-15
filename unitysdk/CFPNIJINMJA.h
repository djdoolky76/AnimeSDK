#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
class CFPNIJINMJA_PEFBMMJJAMI;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }

#define CFPNIJINMJA_CTOR_OFFSET UNITYSDK_OFFSET(0xCC5B0A0)
#define CFPNIJINMJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC5B0B0)
#define CFPNIJINMJA_FDICOGMAKED_OFFSET UNITYSDK_OFFSET(0xCC5AD60)
#define CFPNIJINMJA_GET_ISSESSIONFAILED_OFFSET UNITYSDK_OFFSET(0xCC5B090)
#define CFPNIJINMJA_GET_OBTAINEDSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0xCC5B070)
#define CFPNIJINMJA_HOGBNAHHPHL_OFFSET UNITYSDK_OFFSET(0xCC5ADB0)
#define CFPNIJINMJA_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xCC5ACB0)
#define CFPNIJINMJA_NANJEPLECBE_OFFSET UNITYSDK_OFFSET(0xCC5AEA0)
#define CFPNIJINMJA_SET_OBTAINEDSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0xCC5B080)

inline static constexpr unsigned int CFPNIJINMJA_TypeDefinitionIndex = 81606;

	class CFPNIJINMJA : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* PMCOAFPCDFM; // 0x10
		::CFPNIJINMJA_PEFBMMJJAMI* _ObtainedScoreDetail_k__BackingField; // 0x18
		::System::Boolean _IsSessionFailed_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1, ::CFPNIJINMJA_PEFBMMJJAMI* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::CFPNIJINMJA_PEFBMMJJAMI*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_MLMGEFIOION_OFFSET))(this);
		}

		::System::Boolean FDICOGMAKED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_FDICOGMAKED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> HOGBNAHHPHL()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_HOGBNAHHPHL_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> NANJEPLECBE()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_NANJEPLECBE_OFFSET))(this);
		}

		::CFPNIJINMJA_PEFBMMJJAMI* get_ObtainedScoreDetail()
		{
			return ((::CFPNIJINMJA_PEFBMMJJAMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_GET_OBTAINEDSCOREDETAIL_OFFSET))(this);
		}

		::System::Void set_ObtainedScoreDetail(::CFPNIJINMJA_PEFBMMJJAMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA_PEFBMMJJAMI*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_SET_OBTAINEDSCOREDETAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSessionFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_GET_ISSESSIONFAILED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_DISPOSE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRecommendAvatarState.h"
#include "unitysdk/System/Object.h"
class DJFEFCNBJNO;
class ONKDAPOKGAC;
namespace RPG::Client { class ExpeditionBattleDisplayAvatar; }

#define GBNJAFIOLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15954210)
#define GBNJAFIOLIP_HAFNCNLJMGN_OFFSET UNITYSDK_OFFSET(0x15954220)
#define GBNJAFIOLIP_NKIJLGEJIFH_OFFSET UNITYSDK_OFFSET(0x159543F0)
#define GBNJAFIOLIP_OIAHPHFBFGA_OFFSET UNITYSDK_OFFSET(0x15954500)

inline static constexpr unsigned int GBNJAFIOLIP_TypeDefinitionIndex = 63941;

	class GBNJAFIOLIP : public ::System::Object
	{
	public:
		::DJFEFCNBJNO* BOMFMBPNFJI; // 0x10
		::System::Void _ctor(::DJFEFCNBJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJFEFCNBJNO*))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleDisplayAvatar* HAFNCNLJMGN(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_HAFNCNLJMGN_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ExpeditionBattleRecommendAvatarState NKIJLGEJIFH(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ExpeditionBattleRecommendAvatarState(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_NKIJLGEJIFH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ExpeditionBattleDisplayAvatar* OIAHPHFBFGA(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_OIAHPHFBFGA_OFFSET))(this, a1, a2, a3);
		}

	};

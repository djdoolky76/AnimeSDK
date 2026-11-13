#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRecommendAvatarState.h"
#include "unitysdk/System/Object.h"
class DJFEFCNBJNO;
class ICONDBACCHJ;
class ONKDAPOKGAC;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleDisplayAvatar; }
namespace System { class String; }

#define GBNJAFIOLIP_ALIDPHJMDNL_OFFSET UNITYSDK_OFFSET(0x1B886620)
#define GBNJAFIOLIP_AMJGMAPHOPP_OFFSET UNITYSDK_OFFSET(0x1B886740)
#define GBNJAFIOLIP_BKKDHJOHICK_OFFSET UNITYSDK_OFFSET(0x1B8868B0)
#define GBNJAFIOLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B886220)
#define GBNJAFIOLIP_HAFNCNLJMGN_OFFSET UNITYSDK_OFFSET(0x1B886230)
#define GBNJAFIOLIP_KFJEGIEJPBM_OFFSET UNITYSDK_OFFSET(0x1B886400)
#define GBNJAFIOLIP_NKIJLGEJIFH_OFFSET UNITYSDK_OFFSET(0x1B886470)
#define GBNJAFIOLIP_OIAHPHFBFGA_OFFSET UNITYSDK_OFFSET(0x1B8869F0)

inline static constexpr unsigned int GBNJAFIOLIP_TypeDefinitionIndex = 65383;

	class GBNJAFIOLIP : public ::System::Object
	{
	public:
		::ICONDBACCHJ* LIIFJAEMFDP; // 0x10
		::DJFEFCNBJNO* BOMFMBPNFJI; // 0x18
		::System::Void _ctor(::DJFEFCNBJNO* a1, ::ICONDBACCHJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DJFEFCNBJNO*, ::ICONDBACCHJ*))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ExpeditionBattleDisplayAvatar* HAFNCNLJMGN(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_HAFNCNLJMGN_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::IAvatar* AMJGMAPHOPP(::Proto::DisplayAvatarDetailInfo* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_AMJGMAPHOPP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ExpeditionBattleRecommendAvatarState NKIJLGEJIFH(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ExpeditionBattleRecommendAvatarState(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_NKIJLGEJIFH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ExpeditionBattleDisplayAvatar* OIAHPHFBFGA(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_OIAHPHFBFGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BKKDHJOHICK(::ONKDAPOKGAC* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONKDAPOKGAC*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_BKKDHJOHICK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* KFJEGIEJPBM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_KFJEGIEJPBM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ExpeditionBattleDisplayAvatar* ALIDPHJMDNL(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::ExpeditionBattleRecommendAvatarState a5)
		{
			return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::ExpeditionBattleRecommendAvatarState))((::PBYTE)hIl2Cpp + GBNJAFIOLIP_ALIDPHJMDNL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};

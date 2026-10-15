#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/NAKLLNKNLLD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BGMKDGACBNI;
class CBPHAOJJAMH;
class FGMHNMKDFMA;
class MNBNFBAMKKI;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAFLPBLGADN_AMDNNEPJFBK_OFFSET UNITYSDK_OFFSET(0x12677890)
#define EAFLPBLGADN_BKGKNCNHPNK_OFFSET UNITYSDK_OFFSET(0x126774F0)
#define EAFLPBLGADN_CCTOR_OFFSET UNITYSDK_OFFSET(0x12677E10)
#define EAFLPBLGADN_DLLADOODLNP_OFFSET UNITYSDK_OFFSET(0x126766D0)
#define EAFLPBLGADN_HPLFBELPGBG_OFFSET UNITYSDK_OFFSET(0x12676880)
#define EAFLPBLGADN_KDCNDIDBOPB_OFFSET UNITYSDK_OFFSET(0x12676A10)
#define EAFLPBLGADN_LJNLOIIBPLN_OFFSET UNITYSDK_OFFSET(0x12677BF0)
#define EAFLPBLGADN_NIIMKKBBCNE_OFFSET UNITYSDK_OFFSET(0x126779D0)
#define EAFLPBLGADN_PACOAACHPGM_OFFSET UNITYSDK_OFFSET(0x12676B60)

	class EAFLPBLGADN : public ::System::Object
	{
	public:
		static ::RPG::GameCore::RtAbilityConfig** StaticGet_BOMOHKGJCHP()
		{
			return (::RPG::GameCore::RtAbilityConfig**)UnitySDK::FromName("", "EAFLPBLGADN")->GetStaticField(0x53F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFLPBLGADN_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::RtModifierConfig* DLLADOODLNP(::System::String* a1, ::FGMHNMKDFMA* a2)
		{
			return ((::RPG::GameCore::RtModifierConfig*(*)(::System::String*, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + EAFLPBLGADN_DLLADOODLNP_OFFSET))(a1, a2);
		}

		static ::System::Void HPLFBELPGBG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + EAFLPBLGADN_HPLFBELPGBG_OFFSET))(a1, a2, a3);
		}

		static ::FGMHNMKDFMA* KDCNDIDBOPB(::BGMKDGACBNI* a1)
		{
			return ((::FGMHNMKDFMA*(*)(::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + EAFLPBLGADN_KDCNDIDBOPB_OFFSET))(a1);
		}

		static ::NAKLLNKNLLD PACOAACHPGM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::RtModifierConfig* a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::NAKLLNKNLLD(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EAFLPBLGADN_PACOAACHPGM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::PoolList_1<::RPG::GameCore::RtBehaviorFlag>* NIIMKKBBCNE(::BGMKDGACBNI* a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::RtBehaviorFlag>*(*)(::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + EAFLPBLGADN_NIIMKKBBCNE_OFFSET))(a1);
		}

		static ::System::Boolean AMDNNEPJFBK(::CBPHAOJJAMH* a1, ::RPG::GameCore::EnumStatusType a2)
		{
			return ((::System::Boolean(*)(::CBPHAOJJAMH*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + EAFLPBLGADN_AMDNNEPJFBK_OFFSET))(a1, a2);
		}

		static ::System::Boolean BKGKNCNHPNK(::CBPHAOJJAMH* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a3)
		{
			return ((::System::Boolean(*)(::CBPHAOJJAMH*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + EAFLPBLGADN_BKGKNCNHPNK_OFFSET))(a1, a2, a3);
		}

		static ::MNBNFBAMKKI* LJNLOIIBPLN(::BGMKDGACBNI* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>* a3)
		{
			return ((::MNBNFBAMKKI*(*)(::BGMKDGACBNI*, ::System::String*, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>*))((::PBYTE)hIl2Cpp + EAFLPBLGADN_LJNLOIIBPLN_OFFSET))(a1, a2, a3);
		}

	};

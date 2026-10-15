#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddBuff; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCJJKCNDHKC_BNEBCLLCCDF_OFFSET UNITYSDK_OFFSET(0xB616480)
#define LCJJKCNDHKC_CILJBFLFMMG_OFFSET UNITYSDK_OFFSET(0xB6166A0)
#define LCJJKCNDHKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB616D50)
#define LCJJKCNDHKC_FLNKMCJAGFK_OFFSET UNITYSDK_OFFSET(0xB616C00)
#define LCJJKCNDHKC_JDAPPGMGHAP_OFFSET UNITYSDK_OFFSET(0xB616AD0)
#define LCJJKCNDHKC_JNIDCEGAIKH_OFFSET UNITYSDK_OFFSET(0xB616880)
#define LCJJKCNDHKC_KKNHHKDAAEF_OFFSET UNITYSDK_OFFSET(0xB616790)
#define LCJJKCNDHKC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB616020)

	class LCJJKCNDHKC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BNEBCLLCCDF(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_BNEBCLLCCDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CILJBFLFMMG(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_CILJBFLFMMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KKNHHKDAAEF(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_KKNHHKDAAEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNIDCEGAIKH(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_JNIDCEGAIKH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JDAPPGMGHAP(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::CIIKBJFOKHL* a3, ::RPG::GameCore::ChenLingBattleBuffType a4)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::CIIKBJFOKHL*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_JDAPPGMGHAP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint FLNKMCJAGFK(::RPG::GameCore::ChenLingBattleEffect_AddBuff* a1, ::CIIKBJFOKHL* a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::CIIKBJFOKHL*, ::System::Int32))((::PBYTE)hIl2Cpp + LCJJKCNDHKC_FLNKMCJAGFK_OFFSET))(this, a1, a2, a3);
		}

	};

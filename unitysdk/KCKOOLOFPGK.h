#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
class DJEDIOOMGCE;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define KCKOOLOFPGK_BHODBHGCDAM_OFFSET UNITYSDK_OFFSET(0xB33AEE0)
#define KCKOOLOFPGK_CPDLGBDNDPB_OFFSET UNITYSDK_OFFSET(0xB33B030)
#define KCKOOLOFPGK_DCDLKOIBNNN_OFFSET UNITYSDK_OFFSET(0xB33B8E0)
#define KCKOOLOFPGK_EHCDAHIMCLE_OFFSET UNITYSDK_OFFSET(0xB33B380)
#define KCKOOLOFPGK_EPCMAGGKKLL_OFFSET UNITYSDK_OFFSET(0xB33BBB0)
#define KCKOOLOFPGK_FBCIBDFJMKE_OFFSET UNITYSDK_OFFSET(0xB33B970)
#define KCKOOLOFPGK_FHHBGANDFPI_OFFSET UNITYSDK_OFFSET(0xB33BC40)
#define KCKOOLOFPGK_IEEFFMEOOPA_1_OFFSET UNITYSDK_OFFSET(0xB33B130)
#define KCKOOLOFPGK_IEEFFMEOOPA_OFFSET UNITYSDK_OFFSET(0xB33B0D0)
#define KCKOOLOFPGK_IIIFPLPDKPA_OFFSET UNITYSDK_OFFSET(0xB33B210)
#define KCKOOLOFPGK_KDPNAGHCGFM_OFFSET UNITYSDK_OFFSET(0xB33BB20)
#define KCKOOLOFPGK_KLDCIOGIKNA_OFFSET UNITYSDK_OFFSET(0xB33BA90)
#define KCKOOLOFPGK_LBMKLKCEFJD_OFFSET UNITYSDK_OFFSET(0xB33BA00)
#define KCKOOLOFPGK_LDAKELHCLJG_OFFSET UNITYSDK_OFFSET(0xB33B850)
#define KCKOOLOFPGK_LIDKGFDCKGO_OFFSET UNITYSDK_OFFSET(0xB33AF80)

	class KCKOOLOFPGK : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AttackDamageType BHODBHGCDAM(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_BHODBHGCDAM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType CPDLGBDNDPB(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_CPDLGBDNDPB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::DamageBehaviorTemplate* IEEFFMEOOPA(::RPG::GameCore::AttackData* a1)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_IEEFFMEOOPA_OFFSET))(a1);
		}

		static ::RPG::GameCore::DamageBehaviorTemplate* IEEFFMEOOPA_1(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_IEEFFMEOOPA_1_OFFSET))(a1, a2);
		}

		static ::System::String* IIIFPLPDKPA(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_IIIFPLPDKPA_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LDAKELHCLJG(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_LDAKELHCLJG_OFFSET))(a1, a2);
		}

		static ::System::Boolean DCDLKOIBNNN(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_DCDLKOIBNNN_OFFSET))(a1, a2);
		}

		static ::System::Single FBCIBDFJMKE(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_FBCIBDFJMKE_OFFSET))(a1, a2);
		}

		static ::System::Single LBMKLKCEFJD(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_LBMKLKCEFJD_OFFSET))(a1, a2);
		}

		static ::System::Single KLDCIOGIKNA(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_KLDCIOGIKNA_OFFSET))(a1, a2);
		}

		static ::System::Single KDPNAGHCGFM(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_KDPNAGHCGFM_OFFSET))(a1, a2);
		}

		static ::System::Single EPCMAGGKKLL(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_EPCMAGGKKLL_OFFSET))(a1, a2);
		}

		static ::System::String* FHHBGANDFPI(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_FHHBGANDFPI_OFFSET))(a1, a2);
		}

		static ::DJEDIOOMGCE* LIDKGFDCKGO(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::DJEDIOOMGCE*(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_LIDKGFDCKGO_OFFSET))(a1, a2);
		}

		static ::System::String* EHCDAHIMCLE(::RPG::GameCore::AttackData* a1, ::Il2CppArray<::System::String*>* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::AttackData*, ::Il2CppArray<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KCKOOLOFPGK_EHCDAHIMCLE_OFFSET))(a1, a2, a3);
		}

	};

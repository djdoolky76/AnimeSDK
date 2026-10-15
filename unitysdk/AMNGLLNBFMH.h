#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
class EKFMIDBJDIA;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class Object; }

#define AMNGLLNBFMH_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x15587210)
#define AMNGLLNBFMH_BOOIIBEBBFC_OFFSET UNITYSDK_OFFSET(0x15588A10)
#define AMNGLLNBFMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15588B00)
#define AMNGLLNBFMH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x155871C0)
#define AMNGLLNBFMH_DLCMFFMNAOB_OFFSET UNITYSDK_OFFSET(0x15588800)
#define AMNGLLNBFMH_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x155880D0)
#define AMNGLLNBFMH_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x15587450)
#define AMNGLLNBFMH_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x15588370)
#define AMNGLLNBFMH_KFADIFMHFKO_OFFSET UNITYSDK_OFFSET(0x155888A0)
#define AMNGLLNBFMH_NFBJDKFNLMP_OFFSET UNITYSDK_OFFSET(0x155877E0)
#define AMNGLLNBFMH_NMBINJBMFCA_OFFSET UNITYSDK_OFFSET(0x15588970)
#define AMNGLLNBFMH_OOJLBPNNLGP_OFFSET UNITYSDK_OFFSET(0x155883E0)

	class AMNGLLNBFMH : public ::LJKHPOHKIIF
	{
	public:
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x20
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void OOJLBPNNLGP(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_OOJLBPNNLGP_OFFSET))(this, a1);
		}

		::System::Void NFBJDKFNLMP(::System::Int32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_NFBJDKFNLMP_OFFSET))(this, a1, a2);
		}

		::System::Void DLCMFFMNAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_DLCMFFMNAOB_OFFSET))(this, a1);
		}

		::System::Void KFADIFMHFKO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_KFADIFMHFKO_OFFSET))(this, a1);
		}

		::System::Void NMBINJBMFCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_NMBINJBMFCA_OFFSET))(this, a1);
		}

		::System::Void BOOIIBEBBFC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMNGLLNBFMH_BOOIIBEBBFC_OFFSET))(this, a1);
		}

	};

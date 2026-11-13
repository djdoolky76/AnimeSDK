#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/RPG/GameCore/ActivityBeModelChargeHint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class AKBLDMICKEL;
class EKFMIDBJDIA;
class HAJPGJKPLFP;
namespace RPG::Client { class BattleAssetPreload_BattleEventAssetPreloadGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INELAAGLMHD_ACPPOPBHAMC_OFFSET UNITYSDK_OFFSET(0x1A5E8E00)
#define INELAAGLMHD_AEJNMMILMBL_OFFSET UNITYSDK_OFFSET(0x1A5E9200)
#define INELAAGLMHD_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x1A5E7DF0)
#define INELAAGLMHD_BLJDOJHIOPM_OFFSET UNITYSDK_OFFSET(0x1A5E8EA0)
#define INELAAGLMHD_CBGBILNKICB_OFFSET UNITYSDK_OFFSET(0x1A5E8FD0)
#define INELAAGLMHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E9290)
#define INELAAGLMHD_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1A5E7DA0)
#define INELAAGLMHD_DHCMHDICJNE_OFFSET UNITYSDK_OFFSET(0x1A5E8B00)
#define INELAAGLMHD_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x1A5E8300)
#define INELAAGLMHD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x1A5E8060)
#define INELAAGLMHD_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x1A5E8430)
#define INELAAGLMHD_IOKFOJOBFMB_OFFSET UNITYSDK_OFFSET(0x1A5E8600)
#define INELAAGLMHD_KFCHMIFANOP_OFFSET UNITYSDK_OFFSET(0x1A5E8A70)
#define INELAAGLMHD_LBKENOONPFF_OFFSET UNITYSDK_OFFSET(0x1A5E8F30)
#define INELAAGLMHD_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x1A5E9160)
#define INELAAGLMHD_LNMHFONEFEL_OFFSET UNITYSDK_OFFSET(0x1A5E90B0)
#define INELAAGLMHD_ONOHJGANCDG_OFFSET UNITYSDK_OFFSET(0x1A5E8480)

inline static constexpr unsigned int INELAAGLMHD_TypeDefinitionIndex = 60979;

	class INELAAGLMHD : public ::LJKHPOHKIIF
	{
	public:
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Object*>>* CFDLDPJIGBJ; // 0x20
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x28
		::HAJPGJKPLFP* ANNALDMFGPL; // 0x30
		::System::Int32 IEELKHJLLCA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Boolean ONOHJGANCDG(::AKBLDMICKEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKBLDMICKEL*))((::PBYTE)hIl2Cpp + INELAAGLMHD_ONOHJGANCDG_OFFSET))(this, a1);
		}

		::System::Void IOKFOJOBFMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INELAAGLMHD_IOKFOJOBFMB_OFFSET))(this);
		}

		::System::Single DHCMHDICJNE(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::ActivityBeModelChargeHint>* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::System::Int32 a5)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::ActivityBeModelChargeHint>*, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + INELAAGLMHD_DHCMHDICJNE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single LBKENOONPFF(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + INELAAGLMHD_LBKENOONPFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single CBGBILNKICB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + INELAAGLMHD_CBGBILNKICB_OFFSET))(this, a1);
		}

		::System::Single LNMHFONEFEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + INELAAGLMHD_LNMHFONEFEL_OFFSET))(this, a1);
		}

		::System::Void KFCHMIFANOP(::RPG::Client::BattleAssetPreload_BattleEventAssetPreloadGroup* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_BattleEventAssetPreloadGroup*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + INELAAGLMHD_KFCHMIFANOP_OFFSET))(this, a1, a2);
		}

		::System::Boolean BLJDOJHIOPM(::Il2CppArray<::RPG::GameCore::ActivityBeModelChargeHint>* a1, ::RPG::GameCore::ActivityBeModelChargeHint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ActivityBeModelChargeHint>*, ::RPG::GameCore::ActivityBeModelChargeHint))((::PBYTE)hIl2Cpp + INELAAGLMHD_BLJDOJHIOPM_OFFSET))(this, a1, a2);
		}

		::System::Void LEHJAPMONNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INELAAGLMHD_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void AEJNMMILMBL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + INELAAGLMHD_AEJNMMILMBL_OFFSET))(this, a1);
		}

		::PFACHJFCILN_PreloadType ACPPOPBHAMC(::System::Single a1)
		{
			return ((::PFACHJFCILN_PreloadType(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INELAAGLMHD_ACPPOPBHAMC_OFFSET))(this, a1);
		}

	};

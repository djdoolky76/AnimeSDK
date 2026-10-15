#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMBCAILHNBB_CIPPJHMMKKD_OFFSET UNITYSDK_OFFSET(0xBA88DA0)
#define BMBCAILHNBB_CPEPJOMNIPB_OFFSET UNITYSDK_OFFSET(0xBA89A50)
#define BMBCAILHNBB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA89AD0)
#define BMBCAILHNBB_EAJDPOKKHDB_OFFSET UNITYSDK_OFFSET(0xBA887A0)
#define BMBCAILHNBB_EHDHIKFBIHD_OFFSET UNITYSDK_OFFSET(0xBA898F0)
#define BMBCAILHNBB_EOGMGKCJGLO_OFFSET UNITYSDK_OFFSET(0xBA88500)
#define BMBCAILHNBB_FMFCPOPKKJA_OFFSET UNITYSDK_OFFSET(0xBA895E0)
#define BMBCAILHNBB_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0xBA89AB0)
#define BMBCAILHNBB_HJLEHLIANGE_OFFSET UNITYSDK_OFFSET(0xBA87230)
#define BMBCAILHNBB_KDDPNHJOLCO_OFFSET UNITYSDK_OFFSET(0xBA88CC0)
#define BMBCAILHNBB_LLMEHOOJPMO_OFFSET UNITYSDK_OFFSET(0xBA892A0)
#define BMBCAILHNBB_LOANDFCJGHA_OFFSET UNITYSDK_OFFSET(0xBA87B30)
#define BMBCAILHNBB_MDGLJDHDOIK_OFFSET UNITYSDK_OFFSET(0xBA89490)
#define BMBCAILHNBB_MFJOOHKFKFD_OFFSET UNITYSDK_OFFSET(0xBA89660)
#define BMBCAILHNBB_MIBGPKMLPJE_OFFSET UNITYSDK_OFFSET(0xBA88B50)
#define BMBCAILHNBB_NFJCGBIKHFN_OFFSET UNITYSDK_OFFSET(0xBA884B0)
#define BMBCAILHNBB_OFCGCKEGDAP_OFFSET UNITYSDK_OFFSET(0xBA87080)
#define BMBCAILHNBB_OKAIBPOPMBM_OFFSET UNITYSDK_OFFSET(0xBA872F0)
#define BMBCAILHNBB_OOEDPBLDHME_OFFSET UNITYSDK_OFFSET(0xBA874E0)
#define BMBCAILHNBB_PMMJPCOHPNM_OFFSET UNITYSDK_OFFSET(0xBA87290)
#define BMBCAILHNBB_SET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0xBA89AC0)
#define BMBCAILHNBB__SORTWEAPONLIST_B__1_2_OFFSET UNITYSDK_OFFSET(0xBA89AF0)

	class BMBCAILHNBB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LLJNCILHILH; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NAFNMAAFMPE; // 0x18
		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _SortLists_k__BackingField; // 0x20
		::System::Int32 PMLEJJCOCOE; // 0x28
		::System::Int32 IEFIPOKEJHI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_CTOR_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* OFCGCKEGDAP(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BMBCAILHNBB_OFCGCKEGDAP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OOEDPBLDHME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_OOEDPBLDHME_OFFSET))(this);
		}

		::System::Void EAJDPOKKHDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_EAJDPOKKHDB_OFFSET))(this);
		}

		::System::Boolean CIPPJHMMKKD(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32))((::PBYTE)hIl2Cpp + BMBCAILHNBB_CIPPJHMMKKD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KDDPNHJOLCO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMBCAILHNBB_KDDPNHJOLCO_OFFSET))(this, a1);
		}

		::System::Boolean MIBGPKMLPJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_MIBGPKMLPJE_OFFSET))(this);
		}

		::System::Boolean MDGLJDHDOIK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMBCAILHNBB_MDGLJDHDOIK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* OKAIBPOPMBM(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + BMBCAILHNBB_OKAIBPOPMBM_OFFSET))(this, a1);
		}

		static ::System::Boolean FMFCPOPKKJA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMBCAILHNBB_FMFCPOPKKJA_OFFSET))(a1);
		}

		::System::Void EOGMGKCJGLO(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + BMBCAILHNBB_EOGMGKCJGLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LLMEHOOJPMO(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BMBCAILHNBB_LLMEHOOJPMO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 MFJOOHKFKFD(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::RPG::GameCore::EvolveGearType a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + BMBCAILHNBB_MFJOOHKFKFD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EHDHIKFBIHD(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + BMBCAILHNBB_EHDHIKFBIHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOANDFCJGHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_LOANDFCJGHA_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_GET_SORTLISTS_OFFSET))(this);
		}

		::System::Void set_SortLists(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + BMBCAILHNBB_SET_SORTLISTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* NFJCGBIKHFN()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_NFJCGBIKHFN_OFFSET))(this);
		}

		::System::Void HJLEHLIANGE(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + BMBCAILHNBB_HJLEHLIANGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* CPEPJOMNIPB()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB_CPEPJOMNIPB_OFFSET))(this);
		}

		::System::Void PMMJPCOHPNM(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + BMBCAILHNBB_PMMJPCOHPNM_OFFSET))(this, a1);
		}

		::System::Boolean _SortWeaponList_b__1_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBCAILHNBB__SORTWEAPONLIST_B__1_2_OFFSET))(this, a1);
		}

	};

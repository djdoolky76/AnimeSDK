#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
class BELNFINMEDJ;
class EOPFDKJOBIO;
class HCAJLDIJJOH;
class HKAJMEMCBLC;
class HPOCHBIJIHH;
class KKHBPFEMLKM;
class MAMLJFHHHBN;
class PFLDDDHEAJO;
class PPJFJOGLHGL;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMDCIPPOELB_ALOMLNJGCDM_OFFSET UNITYSDK_OFFSET(0xB2615F0)
#define JMDCIPPOELB_CTOR_OFFSET UNITYSDK_OFFSET(0xB25E970)
#define JMDCIPPOELB_DBIOALCKHLG_OFFSET UNITYSDK_OFFSET(0xB260710)
#define JMDCIPPOELB_EIOFCNCBAOG_OFFSET UNITYSDK_OFFSET(0xB261B00)
#define JMDCIPPOELB_ELBNJNCNEMF_OFFSET UNITYSDK_OFFSET(0xB262710)
#define JMDCIPPOELB_EOMPDEHKHBK_OFFSET UNITYSDK_OFFSET(0xB2612B0)
#define JMDCIPPOELB_FHKADPBMHIE_OFFSET UNITYSDK_OFFSET(0xB260F30)
#define JMDCIPPOELB_FIHNLOAJJGM_OFFSET UNITYSDK_OFFSET(0xB260630)
#define JMDCIPPOELB_FIOJLJGFMPD_OFFSET UNITYSDK_OFFSET(0xB25EC10)
#define JMDCIPPOELB_FLFHOMBOCGG_OFFSET UNITYSDK_OFFSET(0xB25EFA0)
#define JMDCIPPOELB_FMJFHLDGNPA_OFFSET UNITYSDK_OFFSET(0xB25ECC0)
#define JMDCIPPOELB_GHPBMBBIPPD_OFFSET UNITYSDK_OFFSET(0xB260990)
#define JMDCIPPOELB_HPCOBOKAICH_OFFSET UNITYSDK_OFFSET(0xB261BD0)
#define JMDCIPPOELB_IHILHFFMJPI_OFFSET UNITYSDK_OFFSET(0xB262590)
#define JMDCIPPOELB_IJFMDBAMPHD_OFFSET UNITYSDK_OFFSET(0xB25F690)
#define JMDCIPPOELB_IMCLPEFPELL_OFFSET UNITYSDK_OFFSET(0xB262490)
#define JMDCIPPOELB_JEMMFNOBGEC_OFFSET UNITYSDK_OFFSET(0xB260840)
#define JMDCIPPOELB_JFMGMGFBNNK_OFFSET UNITYSDK_OFFSET(0xB260D00)
#define JMDCIPPOELB_LDJCKPGHGCA_OFFSET UNITYSDK_OFFSET(0xB2609F0)
#define JMDCIPPOELB_LLGIKNKOLBG_OFFSET UNITYSDK_OFFSET(0xB261C60)
#define JMDCIPPOELB_MCEPNCPODBB_OFFSET UNITYSDK_OFFSET(0xB261080)
#define JMDCIPPOELB_MEMPDCKCOAD_OFFSET UNITYSDK_OFFSET(0xB260400)
#define JMDCIPPOELB_MJCABHJGIIP_OFFSET UNITYSDK_OFFSET(0xB25EBB0)
#define JMDCIPPOELB_MJGIHDIKCDA_OFFSET UNITYSDK_OFFSET(0xB260FA0)
#define JMDCIPPOELB_OGKLEIGEHFD_OFFSET UNITYSDK_OFFSET(0xB25EEA0)
#define JMDCIPPOELB_PEKAAJDNGLH_OFFSET UNITYSDK_OFFSET(0xB2615A0)
#define JMDCIPPOELB_PFHKLMNKIIA_OFFSET UNITYSDK_OFFSET(0xB261CB0)
#define JMDCIPPOELB_PNICDNHEPCL_1_OFFSET UNITYSDK_OFFSET(0xB2618A0)
#define JMDCIPPOELB_PNICDNHEPCL_2_OFFSET UNITYSDK_OFFSET(0xB261960)
#define JMDCIPPOELB_PNICDNHEPCL_OFFSET UNITYSDK_OFFSET(0xB261480)

inline static constexpr unsigned int JMDCIPPOELB_TypeDefinitionIndex = 80735;

	class JMDCIPPOELB : public ::System::Object
	{
	public:
		::KKHBPFEMLKM* HNLOJEIEFKC; // 0x10
		::PPJFJOGLHGL* CFJDEEEHHPJ; // 0x18
		::PFLDDDHEAJO* CBMBBIGFPOG; // 0x20
		::HPOCHBIJIHH* PODJBLOPDAK; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FLCPLKJPFDI; // 0x30
		::MAMLJFHHHBN* GCNNDHCLBPI; // 0x38
		::BELNFINMEDJ* OHGKKINKOPH; // 0x40
		::System::Void _ctor(::PFLDDDHEAJO* a1, ::KKHBPFEMLKM* a2, ::MAMLJFHHHBN* a3, ::HPOCHBIJIHH* a4, ::BELNFINMEDJ* a5, ::PPJFJOGLHGL* a6)
		{
			return ((::System::Void(*)(::PVOID, ::PFLDDDHEAJO*, ::KKHBPFEMLKM*, ::MAMLJFHHHBN*, ::HPOCHBIJIHH*, ::BELNFINMEDJ*, ::PPJFJOGLHGL*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MJCABHJGIIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_MJCABHJGIIP_OFFSET))(this);
		}

		::System::Boolean FIOJLJGFMPD(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMDCIPPOELB_FIOJLJGFMPD_OFFSET))(this, a1);
		}

		::System::Boolean FMJFHLDGNPA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMDCIPPOELB_FMJFHLDGNPA_OFFSET))(this, a1);
		}

		::System::Boolean OGKLEIGEHFD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMDCIPPOELB_OGKLEIGEHFD_OFFSET))(this, a1);
		}

		::System::Void FLFHOMBOCGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_FLFHOMBOCGG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EOPFDKJOBIO*>* MEMPDCKCOAD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EOPFDKJOBIO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_MEMPDCKCOAD_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HKAJMEMCBLC*>* IJFMDBAMPHD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HKAJMEMCBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_IJFMDBAMPHD_OFFSET))(this);
		}

		::System::Void FIHNLOAJJGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_FIHNLOAJJGM_OFFSET))(this);
		}

		::System::Boolean DBIOALCKHLG(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_DBIOALCKHLG_OFFSET))(this, a1);
		}

		::System::Void JEMMFNOBGEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMDCIPPOELB_JEMMFNOBGEC_OFFSET))(this, a1);
		}

		::System::Boolean GHPBMBBIPPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_GHPBMBBIPPD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* JFMGMGFBNNK()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_JFMGMGFBNNK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* LDJCKPGHGCA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_LDJCKPGHGCA_OFFSET))(this);
		}

		::System::Boolean FHKADPBMHIE(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_FHKADPBMHIE_OFFSET))(this, a1);
		}

		::System::Boolean EOMPDEHKHBK(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_EOMPDEHKHBK_OFFSET))(this, a1);
		}

		static ::System::Void PEKAAJDNGLH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDCIPPOELB_PEKAAJDNGLH_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ALOMLNJGCDM()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_ALOMLNJGCDM_OFFSET))(this);
		}

		::System::Boolean MCEPNCPODBB(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + JMDCIPPOELB_MCEPNCPODBB_OFFSET))(this, a1);
		}

		::System::Boolean PNICDNHEPCL(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_PNICDNHEPCL_OFFSET))(this, a1);
		}

		::System::Boolean PNICDNHEPCL_1(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + JMDCIPPOELB_PNICDNHEPCL_1_OFFSET))(this, a1);
		}

		static ::System::Boolean PNICDNHEPCL_2(::HCAJLDIJJOH* a1)
		{
			return ((::System::Boolean(*)(::HCAJLDIJJOH*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_PNICDNHEPCL_2_OFFSET))(a1);
		}

		static ::System::Boolean EIOFCNCBAOG(::HCAJLDIJJOH* a1)
		{
			return ((::System::Boolean(*)(::HCAJLDIJJOH*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_EIOFCNCBAOG_OFFSET))(a1);
		}

		static ::System::Boolean MJGIHDIKCDA(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_MJGIHDIKCDA_OFFSET))(a1);
		}

		::System::String* HPCOBOKAICH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_HPCOBOKAICH_OFFSET))(this);
		}

		::System::String* PFHKLMNKIIA(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_PFHKLMNKIIA_OFFSET))(this, a1);
		}

		::System::Boolean IMCLPEFPELL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_IMCLPEFPELL_OFFSET))(this);
		}

		::System::Boolean ELBNJNCNEMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_ELBNJNCNEMF_OFFSET))(this);
		}

		::System::Boolean IHILHFFMJPI(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*))((::PBYTE)hIl2Cpp + JMDCIPPOELB_IHILHFFMJPI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* LLGIKNKOLBG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB_LLGIKNKOLBG_OFFSET))(this);
		}

	};

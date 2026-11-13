#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKMDNONDDEL.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/PamState.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/RPG/GameCore/PamMoodType.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Nullable_1.h"
class KDFAEPFCFHN;
class OJFPIAPCFPF_MILAFFFBCKD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PamActionRow; }
namespace RPG::GameCore { class PamAnchorRow; }
namespace RPG::GameCore { class PamLevelInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define OJFPIAPCFPF_AAGJHGNIAFJ_OFFSET UNITYSDK_OFFSET(0x194AF8C0)
#define OJFPIAPCFPF_ABGEDCLBHNA_OFFSET UNITYSDK_OFFSET(0x194B0230)
#define OJFPIAPCFPF_AKNBFNJHEAF_OFFSET UNITYSDK_OFFSET(0x194AD9F0)
#define OJFPIAPCFPF_AOMEJMMOHAB_OFFSET UNITYSDK_OFFSET(0x194B0710)
#define OJFPIAPCFPF_BDNLAIEPPPN_OFFSET UNITYSDK_OFFSET(0x194ACF80)
#define OJFPIAPCFPF_CABMKNGNOAK_OFFSET UNITYSDK_OFFSET(0x194AE130)
#define OJFPIAPCFPF_CEILCPBCBBH_OFFSET UNITYSDK_OFFSET(0x194ADC00)
#define OJFPIAPCFPF_CJFDAPMBPMJ_OFFSET UNITYSDK_OFFSET(0x194AF390)
#define OJFPIAPCFPF_CTOR_OFFSET UNITYSDK_OFFSET(0x194B0F40)
#define OJFPIAPCFPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194AD410)
#define OJFPIAPCFPF_DNMBMPCGGPB_OFFSET UNITYSDK_OFFSET(0x194ADCD0)
#define OJFPIAPCFPF_DOAFDEJOPDE_OFFSET UNITYSDK_OFFSET(0x194ADA60)
#define OJFPIAPCFPF_EIOJLFFHECF_OFFSET UNITYSDK_OFFSET(0x194AD8E0)
#define OJFPIAPCFPF_FEHEBIGKCGK_OFFSET UNITYSDK_OFFSET(0x194B0140)
#define OJFPIAPCFPF_FFGLFJNBGLP_OFFSET UNITYSDK_OFFSET(0x194ADD20)
#define OJFPIAPCFPF_GDKNDNIHKEP_OFFSET UNITYSDK_OFFSET(0x194AC060)
#define OJFPIAPCFPF_GECLCCJEKLI_OFFSET UNITYSDK_OFFSET(0x194AD930)
#define OJFPIAPCFPF_GET_MOOD_OFFSET UNITYSDK_OFFSET(0x194B0EA0)
#define OJFPIAPCFPF_GET_ONLINEFIRST_OFFSET UNITYSDK_OFFSET(0x194B0F20)
#define OJFPIAPCFPF_GET_PAMMOODTYPE_OFFSET UNITYSDK_OFFSET(0x194B0F00)
#define OJFPIAPCFPF_GET_PAMSTATE_OFFSET UNITYSDK_OFFSET(0x194B0EE0)
#define OJFPIAPCFPF_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x194B0EC0)
#define OJFPIAPCFPF_GMDEPMKINOH_OFFSET UNITYSDK_OFFSET(0x194ADE60)
#define OJFPIAPCFPF_GOMKJPJOLPG_OFFSET UNITYSDK_OFFSET(0x194ACC90)
#define OJFPIAPCFPF_HCNHIGHEPKI_OFFSET UNITYSDK_OFFSET(0x194B01B0)
#define OJFPIAPCFPF_HGPBLBBHBKC_OFFSET UNITYSDK_OFFSET(0x194B07A0)
#define OJFPIAPCFPF_HJJMLEBJOPJ_OFFSET UNITYSDK_OFFSET(0x194AC1E0)
#define OJFPIAPCFPF_HKFHKBJBHHN_OFFSET UNITYSDK_OFFSET(0x194AE0B0)
#define OJFPIAPCFPF_IBDPJJPMFON_OFFSET UNITYSDK_OFFSET(0x194ACD50)
#define OJFPIAPCFPF_ICIOGNCCFHM_OFFSET UNITYSDK_OFFSET(0x194ACB30)
#define OJFPIAPCFPF_IDKJJKKFCAM_OFFSET UNITYSDK_OFFSET(0x194ADF80)
#define OJFPIAPCFPF_IHNCFPMFBJD_OFFSET UNITYSDK_OFFSET(0x194ADAB0)
#define OJFPIAPCFPF_INIT_OFFSET UNITYSDK_OFFSET(0x194AD0A0)
#define OJFPIAPCFPF_JEDNGMAKNJL_OFFSET UNITYSDK_OFFSET(0x194AC4C0)
#define OJFPIAPCFPF_JIJOKKJDGEB_OFFSET UNITYSDK_OFFSET(0x194ABE30)
#define OJFPIAPCFPF_JKOOFEFOFPB_OFFSET UNITYSDK_OFFSET(0x194AFF80)
#define OJFPIAPCFPF_KCDADGHAJBB_OFFSET UNITYSDK_OFFSET(0x194AC460)
#define OJFPIAPCFPF_KHHELBMNIPL_1_OFFSET UNITYSDK_OFFSET(0x194ACA70)
#define OJFPIAPCFPF_KHHELBMNIPL_OFFSET UNITYSDK_OFFSET(0x194AC9C0)
#define OJFPIAPCFPF_KIILEGMOBEM_OFFSET UNITYSDK_OFFSET(0x194ADF20)
#define OJFPIAPCFPF_KJOOFENMJLF_OFFSET UNITYSDK_OFFSET(0x194B0570)
#define OJFPIAPCFPF_KKEOEJHIOBI_OFFSET UNITYSDK_OFFSET(0x194AE050)
#define OJFPIAPCFPF_KMALEJDKBMO_OFFSET UNITYSDK_OFFSET(0x194B0A30)
#define OJFPIAPCFPF_KMALFIFCBJA_OFFSET UNITYSDK_OFFSET(0x194ACFD0)
#define OJFPIAPCFPF_KMDOFNIILLJ_OFFSET UNITYSDK_OFFSET(0x194AD880)
#define OJFPIAPCFPF_KPNOKOLAALC_OFFSET UNITYSDK_OFFSET(0x194AD350)
#define OJFPIAPCFPF_LDCBOAHLAHD_OFFSET UNITYSDK_OFFSET(0x194AC0C0)
#define OJFPIAPCFPF_LKFBHLBHPDI_OFFSET UNITYSDK_OFFSET(0x194B0E00)
#define OJFPIAPCFPF_LOPNMGAFMLN_OFFSET UNITYSDK_OFFSET(0x194AE170)
#define OJFPIAPCFPF_MBAOJOCCDMN_OFFSET UNITYSDK_OFFSET(0x194ABFC0)
#define OJFPIAPCFPF_MBMAGBNAAGD_OFFSET UNITYSDK_OFFSET(0x194B03D0)
#define OJFPIAPCFPF_MBPPDGBGNDH_OFFSET UNITYSDK_OFFSET(0x194ACBE0)
#define OJFPIAPCFPF_MDLJEPAOIJD_OFFSET UNITYSDK_OFFSET(0x194AD230)
#define OJFPIAPCFPF_MEKPGOGNOBB_OFFSET UNITYSDK_OFFSET(0x194ADD70)
#define OJFPIAPCFPF_MHHGLBEALEA_OFFSET UNITYSDK_OFFSET(0x194ABEB0)
#define OJFPIAPCFPF_MJOMFILAFAP_OFFSET UNITYSDK_OFFSET(0x194B0840)
#define OJFPIAPCFPF_MMNPKKDEEJA_OFFSET UNITYSDK_OFFSET(0x194ADDC0)
#define OJFPIAPCFPF_MNFOBNAABFA_OFFSET UNITYSDK_OFFSET(0x194AD780)
#define OJFPIAPCFPF_NAEGHGMGNAG_OFFSET UNITYSDK_OFFSET(0x194ACE40)
#define OJFPIAPCFPF_NGIHOHPDDOI_OFFSET UNITYSDK_OFFSET(0x194AD9A0)
#define OJFPIAPCFPF_NKJCHDFKHNO_OFFSET UNITYSDK_OFFSET(0x194B0900)
#define OJFPIAPCFPF_OGLNLKPNDBJ_OFFSET UNITYSDK_OFFSET(0x194B09C0)
#define OJFPIAPCFPF_OLFANNFHFFA_OFFSET UNITYSDK_OFFSET(0x194ABDA0)
#define OJFPIAPCFPF_ONEAJIIPHAF_OFFSET UNITYSDK_OFFSET(0x194AC530)
#define OJFPIAPCFPF_OOMIGMHIFAK_OFFSET UNITYSDK_OFFSET(0x194ADED0)
#define OJFPIAPCFPF_PHAIHGKABMK_OFFSET UNITYSDK_OFFSET(0x194B0D90)
#define OJFPIAPCFPF_PIMACPFAHFA_OFFSET UNITYSDK_OFFSET(0x194AC690)
#define OJFPIAPCFPF_PJGHLJBBPOJ_OFFSET UNITYSDK_OFFSET(0x194ADE10)
#define OJFPIAPCFPF_SET_MOOD_OFFSET UNITYSDK_OFFSET(0x194B0EB0)
#define OJFPIAPCFPF_SET_ONLINEFIRST_OFFSET UNITYSDK_OFFSET(0x194B0F30)
#define OJFPIAPCFPF_SET_PAMMOODTYPE_OFFSET UNITYSDK_OFFSET(0x194B0F10)
#define OJFPIAPCFPF_SET_PAMSTATE_OFFSET UNITYSDK_OFFSET(0x194B0EF0)
#define OJFPIAPCFPF_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x194B0ED0)
#define OJFPIAPCFPF__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x194AD490)
#define OJFPIAPCFPF__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x194AD5F0)
#define OJFPIAPCFPF___SELECTACTION_1ACTION_B__51_0_OFFSET UNITYSDK_OFFSET(0x194B10C0)
#define OJFPIAPCFPF___SELECTACTION_1ACTION_B__51_1_OFFSET UNITYSDK_OFFSET(0x194B10E0)

inline static constexpr unsigned int OJFPIAPCFPF_TypeDefinitionIndex = 68359;

	class OJFPIAPCFPF : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PamActionType, ::System::Collections::Generic::List_1<::RPG::GameCore::PamPlaceType>*>* HAPKKKPKFBM; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CLPFLFCKHID; // 0x18
		::RPG::GameCore::GameEntity* JEMLHHOKADM; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* HHPPIABOAPD; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::PamActionRow*>* BFKDADHMIDJ; // 0x30
		::UnityEngine::Coroutine* LHLPDACFECH; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PamPlaceType, ::System::Collections::Generic::List_1<::System::UInt32>*>* CLLFMOHJLGK; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::PamMoodType>* DPKNJKOLGDJ; // 0x48
		::UnityEngine::Coroutine* JGPCIFMFOJP; // 0x50
		::System::Collections::Generic::List_1<::System::Single>* EMMACLEMAML; // 0x58
		::KDFAEPFCFHN* BGFDACCIPJI; // 0x60
		::System::UInt32 JBDPOIJGJFA; // 0x68
		::System::Int32 FCCBADNBOMJ; // 0x6C
		::System::Nullable_1<::System::Object*> MDINGMAINEI; // 0x70
		::System::Byte _padding0[0x8];
		::AKMDNONDDEL EJBLHBJNGOI; // 0x80
		::System::Single OGEGALHHPFD; // 0x90
		::RPG::GameCore::PamMoodType _PamMoodType_k__BackingField; // 0x94
		::System::UInt32 BCDJMJJJFDE; // 0x98
		::System::Single DGOPOOGAECI; // 0x9C
		::System::Int32 BBEEJMCOEHG; // 0xA0
		::System::Single _Strength_k__BackingField; // 0xA4
		::System::Single HHENKEOGGMG; // 0xA8
		::System::Boolean ONPKGPEGDLF; // 0xAC
		::System::Boolean PGNMJCPJCNH; // 0xAD
		::System::Byte _padding1[0x2];
		::System::UInt32 GEADILKNDAE; // 0xB0
		::RPG::GameCore::PamActionType JHGLHCEONMP; // 0xB4
		::System::Single CLCGBIMIJIN; // 0xB8
		::System::Single BCDABJAOBCO; // 0xBC
		::System::Single ALDECJJKOBE; // 0xC0
		::System::Single NDBDOGOECBN; // 0xC4
		::System::Boolean IGFHGFKEDOO; // 0xC8
		::System::Boolean _OnlineFirst_k__BackingField; // 0xC9
		::System::Boolean CLBBHJFNFLO; // 0xCA
		::System::Byte _padding2[0x1];
		::System::Single _Mood_k__BackingField; // 0xCC
		::RPG::Client::PamState _PamState_k__BackingField; // 0xD0
		::System::UInt32 INPLGOEFFKH; // 0xD4
		::System::Single JKCCCJCONNP; // 0xD8
		::RPG::GameCore::PamMoodType NFLGOFGOBPI; // 0xDC
		// static const ::System::Object DPHBPILKHJI; // 0x0
		// static const ::System::Object DGENOJOHOCO; // 0x0
		// static const ::System::Object EGJGMDLAKGE; // 0x0
		// static const ::System::Object FKMKMNBKICF; // 0x0
		// static const ::System::Object PLGNAPAEAOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_CTOR_OFFSET))(this);
		}

		::System::Void OLFANNFHFFA(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_OLFANNFHFFA_OFFSET))(this, a1, a2);
		}

		::System::Void JIJOKKJDGEB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_JIJOKKJDGEB_OFFSET))(this, a1, a2);
		}

		::System::Void MHHGLBEALEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MHHGLBEALEA_OFFSET))(this);
		}

		::System::Void GDKNDNIHKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GDKNDNIHKEP_OFFSET))(this);
		}

		::System::Boolean LDCBOAHLAHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_LDCBOAHLAHD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* HJJMLEBJOPJ()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_HJJMLEBJOPJ_OFFSET))(this);
		}

		::System::Void JEDNGMAKNJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_JEDNGMAKNJL_OFFSET))(this, a1);
		}

		::System::UInt32 KHHELBMNIPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KHHELBMNIPL_OFFSET))(this);
		}

		::System::UInt32 KHHELBMNIPL_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KHHELBMNIPL_1_OFFSET))(this, a1);
		}

		::System::UInt32 ICIOGNCCFHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_ICIOGNCCFHM_OFFSET))(this);
		}

		::System::UInt32 MBPPDGBGNDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MBPPDGBGNDH_OFFSET))(this);
		}

		::System::UInt32 GOMKJPJOLPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GOMKJPJOLPG_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NAEGHGMGNAG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_NAEGHGMGNAG_OFFSET))(this);
		}

		::System::Void BDNLAIEPPPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_BDNLAIEPPPN_OFFSET))(this);
		}

		::System::Void MBAOJOCCDMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MBAOJOCCDMN_OFFSET))(this);
		}

		::System::Void KMALFIFCBJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KMALFIFCBJA_OFFSET))(this, a1);
		}

		::System::Void PIMACPFAHFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_PIMACPFAHFA_OFFSET))(this);
		}

		::System::Int32 ONEAJIIPHAF(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_ONEAJIIPHAF_OFFSET))(this, a1);
		}

		::System::UInt32 IBDPJJPMFON(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_IBDPJJPMFON_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::PamLevelInfo*>* KCDADGHAJBB()
		{
			return ((::Il2CppArray<::RPG::GameCore::PamLevelInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KCDADGHAJBB_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void MNFOBNAABFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MNFOBNAABFA_OFFSET))(this);
		}

		::AKMDNONDDEL KMDOFNIILLJ()
		{
			return ((::AKMDNONDDEL(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KMDOFNIILLJ_OFFSET))(this);
		}

		::RPG::GameCore::PamActionType EIOJLFFHECF()
		{
			return ((::RPG::GameCore::PamActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_EIOJLFFHECF_OFFSET))(this);
		}

		::System::Void GECLCCJEKLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GECLCCJEKLI_OFFSET))(this);
		}

		::System::Void AKNBFNJHEAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_AKNBFNJHEAF_OFFSET))(this);
		}

		::System::Void NGIHOHPDDOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_NGIHOHPDDOI_OFFSET))(this);
		}

		::System::Void DOAFDEJOPDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_DOAFDEJOPDE_OFFSET))(this);
		}

		::System::Void DNMBMPCGGPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_DNMBMPCGGPB_OFFSET))(this);
		}

		::System::Void FFGLFJNBGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_FFGLFJNBGLP_OFFSET))(this);
		}

		::System::Void MEKPGOGNOBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MEKPGOGNOBB_OFFSET))(this);
		}

		::System::Void MMNPKKDEEJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MMNPKKDEEJA_OFFSET))(this);
		}

		::System::Void PJGHLJBBPOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_PJGHLJBBPOJ_OFFSET))(this);
		}

		::System::Boolean GMDEPMKINOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GMDEPMKINOH_OFFSET))(this);
		}

		::System::Boolean OOMIGMHIFAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_OOMIGMHIFAK_OFFSET))(this);
		}

		::System::Boolean KIILEGMOBEM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KIILEGMOBEM_OFFSET))(this, a1);
		}

		::System::Boolean KKEOEJHIOBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KKEOEJHIOBI_OFFSET))(this);
		}

		::System::Boolean HKFHKBJBHHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_HKFHKBJBHHN_OFFSET))(this);
		}

		::System::UInt32 CABMKNGNOAK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_CABMKNGNOAK_OFFSET))(this);
		}

		::System::Void IDKJJKKFCAM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_IDKJJKKFCAM_OFFSET))(this, a1);
		}

		::System::Void LOPNMGAFMLN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_LOPNMGAFMLN_OFFSET))(this, a1);
		}

		::System::Void CJFDAPMBPMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_CJFDAPMBPMJ_OFFSET))(this);
		}

		::System::Void AAGJHGNIAFJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_AAGJHGNIAFJ_OFFSET))(this, a1);
		}

		::System::Void JKOOFEFOFPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_JKOOFEFOFPB_OFFSET))(this);
		}

		::System::Void FEHEBIGKCGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_FEHEBIGKCGK_OFFSET))(this);
		}

		::System::Boolean ABGEDCLBHNA(::RPG::GameCore::PamActionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PamActionType))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_ABGEDCLBHNA_OFFSET))(this, a1);
		}

		::System::Void IHNCFPMFBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_IHNCFPMFBJD_OFFSET))(this);
		}

		::System::Void CEILCPBCBBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_CEILCPBCBBH_OFFSET))(this);
		}

		::System::Void KJOOFENMJLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KJOOFENMJLF_OFFSET))(this);
		}

		::System::Void AOMEJMMOHAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_AOMEJMMOHAB_OFFSET))(this);
		}

		::System::Int32 MBMAGBNAAGD(::System::Int32 a1, ::OJFPIAPCFPF_MILAFFFBCKD* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::OJFPIAPCFPF_MILAFFFBCKD*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MBMAGBNAAGD_OFFSET))(this, a1, a2);
		}

		::System::Single HGPBLBBHBKC(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_HGPBLBBHBKC_OFFSET))(this, a1);
		}

		::System::Single MJOMFILAFAP(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MJOMFILAFAP_OFFSET))(this, a1);
		}

		::System::Single NKJCHDFKHNO(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_NKJCHDFKHNO_OFFSET))(this, a1);
		}

		::System::Void MDLJEPAOIJD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MDLJEPAOIJD_OFFSET))(this, a1);
		}

		::System::Void KPNOKOLAALC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KPNOKOLAALC_OFFSET))(this, a1);
		}

		::System::Void OGLNLKPNDBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_OGLNLKPNDBJ_OFFSET))(this);
		}

		::System::Void PHAIHGKABMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_PHAIHGKABMK_OFFSET))(this);
		}

		::System::Void KMALEJDKBMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_KMALEJDKBMO_OFFSET))(this);
		}

		::System::Void LKFBHLBHPDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_LKFBHLBHPDI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::PamAnchorRow*>* HCNHIGHEPKI()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::PamAnchorRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_HCNHIGHEPKI_OFFSET))(this);
		}

		::System::Single get_Mood()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GET_MOOD_OFFSET))(this);
		}

		::System::Void set_Mood(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_SET_MOOD_OFFSET))(this, a1);
		}

		::System::Single get_Strength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GET_STRENGTH_OFFSET))(this);
		}

		::System::Void set_Strength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_SET_STRENGTH_OFFSET))(this, a1);
		}

		::RPG::Client::PamState get_PamState()
		{
			return ((::RPG::Client::PamState(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GET_PAMSTATE_OFFSET))(this);
		}

		::System::Void set_PamState(::RPG::Client::PamState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamState))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_SET_PAMSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PamMoodType get_PamMoodType()
		{
			return ((::RPG::GameCore::PamMoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GET_PAMMOODTYPE_OFFSET))(this);
		}

		::System::Void set_PamMoodType(::RPG::GameCore::PamMoodType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamMoodType))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_SET_PAMMOODTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_OnlineFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_GET_ONLINEFIRST_OFFSET))(this);
		}

		::System::Void set_OnlineFirst(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_SET_ONLINEFIRST_OFFSET))(this, a1);
		}

		::System::Boolean __SelectAction_1Action_b__51_0(::RPG::GameCore::PamActionRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PamActionRow*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF___SELECTACTION_1ACTION_B__51_0_OFFSET))(this, a1);
		}

		::System::Boolean __SelectAction_1Action_b__51_1(::RPG::GameCore::PamActionRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PamActionRow*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF___SELECTACTION_1ACTION_B__51_1_OFFSET))(this, a1);
		}

	};

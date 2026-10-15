#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/RPG/Client/CakeRaceBattleItemUIHandler_MouseCornerPositionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class AJDJIIKGLFD;
class ECPGBDINBAB;
class FDLCNGPGEFP;
class JBACCAGFHON;
class LGHPKEAODPH;
class MIMCAGPCALM;
class NEOCEOCDEAF;
class NJCHGIHCBAC;
class PJPAOLMBKEC;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client::CakeRace { class CakeRaceHUDEventHandler; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceFieldMonoView; }
namespace RPG::CustomRP { class RPGBloom; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define ECPGBDINBAB_BELKPNEBKIK_OFFSET UNITYSDK_OFFSET(0x13305C80)
#define ECPGBDINBAB_BFHBIHEEJJD_OFFSET UNITYSDK_OFFSET(0x133074C0)
#define ECPGBDINBAB_BHDFIPHKBIG_OFFSET UNITYSDK_OFFSET(0x133048D0)
#define ECPGBDINBAB_BHIIJJLJFNM_OFFSET UNITYSDK_OFFSET(0x13303CA0)
#define ECPGBDINBAB_BMMHHGMMKII_OFFSET UNITYSDK_OFFSET(0x13306BB0)
#define ECPGBDINBAB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13301E50)
#define ECPGBDINBAB_CALJOEBCIIF_OFFSET UNITYSDK_OFFSET(0x13301A30)
#define ECPGBDINBAB_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x13305FE0)
#define ECPGBDINBAB_CTOR_OFFSET UNITYSDK_OFFSET(0x13301EE0)
#define ECPGBDINBAB_DGBDIOPMNHD_OFFSET UNITYSDK_OFFSET(0x13305F50)
#define ECPGBDINBAB_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x13301EF0)
#define ECPGBDINBAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13302780)
#define ECPGBDINBAB_DKLFEFDLELM_OFFSET UNITYSDK_OFFSET(0x13306F20)
#define ECPGBDINBAB_DLDKLDFKCAF_OFFSET UNITYSDK_OFFSET(0x13301D30)
#define ECPGBDINBAB_DMMGIFOBCKL_OFFSET UNITYSDK_OFFSET(0x133018A0)
#define ECPGBDINBAB_DPFGPOPIKFD_OFFSET UNITYSDK_OFFSET(0x13304BF0)
#define ECPGBDINBAB_EBOGDAFCHDL_OFFSET UNITYSDK_OFFSET(0x13301CD0)
#define ECPGBDINBAB_ECDGGIOPGDM_OFFSET UNITYSDK_OFFSET(0x13306AB0)
#define ECPGBDINBAB_EDNGPGDIHNL_OFFSET UNITYSDK_OFFSET(0x13305CD0)
#define ECPGBDINBAB_EDPHMABLPJN_OFFSET UNITYSDK_OFFSET(0x13307540)
#define ECPGBDINBAB_EIIHFCLGDFL_OFFSET UNITYSDK_OFFSET(0x13301DF0)
#define ECPGBDINBAB_ELNNOIAABLK_OFFSET UNITYSDK_OFFSET(0x13306740)
#define ECPGBDINBAB_FFHHNGLCMKB_OFFSET UNITYSDK_OFFSET(0x13302300)
#define ECPGBDINBAB_FGCIMFHAIEJ_OFFSET UNITYSDK_OFFSET(0x133067D0)
#define ECPGBDINBAB_FIDFGDIKNJO_OFFSET UNITYSDK_OFFSET(0x13305E30)
#define ECPGBDINBAB_FJAFBAJHOFD_OFFSET UNITYSDK_OFFSET(0x13303710)
#define ECPGBDINBAB_FJPLKDAKLBG_OFFSET UNITYSDK_OFFSET(0x133047F0)
#define ECPGBDINBAB_FNPPDNDJGEK_OFFSET UNITYSDK_OFFSET(0x13305DB0)
#define ECPGBDINBAB_GET_LOOKATCATCONFIGID_OFFSET UNITYSDK_OFFSET(0x13301750)
#define ECPGBDINBAB_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x12D15E20)
#define ECPGBDINBAB_GFPJELDJDLP_OFFSET UNITYSDK_OFFSET(0x13305600)
#define ECPGBDINBAB_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x13301C50)
#define ECPGBDINBAB_GHEAPLGNIBI_OFFSET UNITYSDK_OFFSET(0x13307640)
#define ECPGBDINBAB_GLNOAOMOOKG_OFFSET UNITYSDK_OFFSET(0x13307F90)
#define ECPGBDINBAB_GOFDJGDCANL_OFFSET UNITYSDK_OFFSET(0x13302120)
#define ECPGBDINBAB_HGPMEGDKCAA_OFFSET UNITYSDK_OFFSET(0x133034B0)
#define ECPGBDINBAB_HLBHAGNLBDP_OFFSET UNITYSDK_OFFSET(0x13304540)
#define ECPGBDINBAB_IEGIOKAMOCG_OFFSET UNITYSDK_OFFSET(0x13306480)
#define ECPGBDINBAB_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0x133041C0)
#define ECPGBDINBAB_JANJGPIPENK_OFFSET UNITYSDK_OFFSET(0x133046D0)
#define ECPGBDINBAB_KANILCCHNPL_OFFSET UNITYSDK_OFFSET(0x13305BD0)
#define ECPGBDINBAB_KEEBMMDIMLI_OFFSET UNITYSDK_OFFSET(0x13304270)
#define ECPGBDINBAB_KELPLFPCFIO_OFFSET UNITYSDK_OFFSET(0x133017D0)
#define ECPGBDINBAB_KGLPGGNIBCK_OFFSET UNITYSDK_OFFSET(0x13305280)
#define ECPGBDINBAB_KKAHNDHNLLL_OFFSET UNITYSDK_OFFSET(0x13307910)
#define ECPGBDINBAB_KMNPFNFDJDA_OFFSET UNITYSDK_OFFSET(0x13301770)
#define ECPGBDINBAB_KOCCNJHJNOL_OFFSET UNITYSDK_OFFSET(0x133073E0)
#define ECPGBDINBAB_LBPLEBAOOCK_OFFSET UNITYSDK_OFFSET(0x13306130)
#define ECPGBDINBAB_LEPHDBPFLAK_1_OFFSET UNITYSDK_OFFSET(0x133045F0)
#define ECPGBDINBAB_LEPHDBPFLAK_OFFSET UNITYSDK_OFFSET(0x13304460)
#define ECPGBDINBAB_MGCMIEDLGEH_OFFSET UNITYSDK_OFFSET(0x13303110)
#define ECPGBDINBAB_MIFGAJHHKKP_OFFSET UNITYSDK_OFFSET(0x133047A0)
#define ECPGBDINBAB_MPDGBIIOKNE_OFFSET UNITYSDK_OFFSET(0x13301B60)
#define ECPGBDINBAB_NDLAPNBKJMF_OFFSET UNITYSDK_OFFSET(0x13301D90)
#define ECPGBDINBAB_NJMGIOMLKEO_OFFSET UNITYSDK_OFFSET(0x13306630)
#define ECPGBDINBAB_NOBFEKLAPAA_OFFSET UNITYSDK_OFFSET(0x13307B30)
#define ECPGBDINBAB_OFEDCFCKNHI_OFFSET UNITYSDK_OFFSET(0x13302ED0)
#define ECPGBDINBAB_OIEEIFKOHAH_OFFSET UNITYSDK_OFFSET(0x13304030)
#define ECPGBDINBAB_OJNDJGCIEJJ_OFFSET UNITYSDK_OFFSET(0x13307710)
#define ECPGBDINBAB_OJOGAHAFCPB_OFFSET UNITYSDK_OFFSET(0x13307330)
#define ECPGBDINBAB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x13303330)
#define ECPGBDINBAB_SET_LOOKATCATCONFIGID_OFFSET UNITYSDK_OFFSET(0x13301760)
#define ECPGBDINBAB_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x13301740)

inline static constexpr unsigned int ECPGBDINBAB_TypeDefinitionIndex = 78013;

	class ECPGBDINBAB : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::RPG::CustomRP::RPGDepthOfField* EFKDOHFAOID; // 0x18
		::NEOCEOCDEAF* LJBHMFMNDNB; // 0x20
		::AJDJIIKGLFD* CBIGPGKJAEI; // 0x28
		::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x30
		::RPG::CustomRP::RPGBloom* GFMMIBHLGNA; // 0x38
		::Cinemachine::CinemachineBlendDefinition PCGLKAOLGAJ; // 0x40
		::System::Boolean EAFNEICPEPH; // 0x50
		::System::Boolean AJJGGOEJEKP; // 0x51
		::System::Boolean IDPKKGJOOCL; // 0x52
		::System::Boolean BJNCHCFHDOO; // 0x53
		::System::Boolean BPDFKPIMNOD; // 0x54
		::System::Byte _padding0[0x3];
		::System::UInt32 _LookAtCatConfigID_k__BackingField; // 0x58
		::System::Single BLJLNJIAFIB; // 0x5C
		// static const ::System::Object FAPLCOPPNEH; // 0x0
		// static const ::System::Object EFBONLEPOOA; // 0x0
		// static const ::System::Object KPBLPBFDKHG; // 0x0
		// static const ::System::Object BLBGOCIOPAF; // 0x0
		// static const ::System::Object GNPBCOONJIP; // 0x0
		// static const ::System::Object FANGLKPKFFE; // 0x0
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_SET_LOOKATTARGET_OFFSET))(this, a1);
		}

		::System::UInt32 get_LookAtCatConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GET_LOOKATCATCONFIGID_OFFSET))(this);
		}

		::System::Void set_LookAtCatConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPGBDINBAB_SET_LOOKATCATCONFIGID_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineDollyCart* KMNPFNFDJDA()
		{
			return ((::Cinemachine::CinemachineDollyCart*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KMNPFNFDJDA_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceFieldMonoView* KELPLFPCFIO()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceFieldMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KELPLFPCFIO_OFFSET))(this);
		}

		::RPG::Client::CameraDataAndFlags* CALJOEBCIIF()
		{
			return ((::RPG::Client::CameraDataAndFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_CALJOEBCIIF_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* MPDGBIIOKNE()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_MPDGBIIOKNE_OFFSET))(this);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GHDIJCNKKOM_OFFSET))(this);
		}

		::AGCPAMNLCGN* DMMGIFOBCKL()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DMMGIFOBCKL_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* EBOGDAFCHDL()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_EBOGDAFCHDL_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* DLDKLDFKCAF()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DLDKLDFKCAF_OFFSET))(this);
		}

		::MIMCAGPCALM* NDLAPNBKJMF()
		{
			return ((::MIMCAGPCALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_NDLAPNBKJMF_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceHUDEventHandler* EIIHFCLGDFL()
		{
			return ((::RPG::Client::CakeRace::CakeRaceHUDEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_EIIHFCLGDFL_OFFSET))(this);
		}

		static ::ECPGBDINBAB* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::ECPGBDINBAB*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void GOFDJGDCANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GOFDJGDCANL_OFFSET))(this);
		}

		::System::Void FFHHNGLCMKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_FFHHNGLCMKB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void HGPMEGDKCAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_HGPMEGDKCAA_OFFSET))(this);
		}

		::System::Void OFEDCFCKNHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPGBDINBAB_OFEDCFCKNHI_OFFSET))(this, a1);
		}

		::System::Void IIOIBAAMBHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPGBDINBAB_IIOIBAAMBHL_OFFSET))(this, a1);
		}

		::System::Void HLBHAGNLBDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_HLBHAGNLBDP_OFFSET))(this);
		}

		::System::Void LEPHDBPFLAK(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_LEPHDBPFLAK_OFFSET))(this, a1);
		}

		::System::Void LEPHDBPFLAK_1(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_LEPHDBPFLAK_1_OFFSET))(this, a1);
		}

		::System::Void MIFGAJHHKKP(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + ECPGBDINBAB_MIFGAJHHKKP_OFFSET))(this, a1);
		}

		::System::Void KEEBMMDIMLI(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KEEBMMDIMLI_OFFSET))(this, a1);
		}

		::System::Void FJPLKDAKLBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_FJPLKDAKLBG_OFFSET))(this);
		}

		::System::Void BHIIJJLJFNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_BHIIJJLJFNM_OFFSET))(this);
		}

		::System::Void GFPJELDJDLP(::AGCPAMNLCGN* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::System::Single))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GFPJELDJDLP_OFFSET))(this, a1, a2);
		}

		::System::Void KANILCCHNPL(::AGCPAMNLCGN* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::System::Single))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KANILCCHNPL_OFFSET))(this, a1, a2);
		}

		::System::Void BELKPNEBKIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPGBDINBAB_BELKPNEBKIK_OFFSET))(this, a1);
		}

		::System::Boolean EDNGPGDIHNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_EDNGPGDIHNL_OFFSET))(this);
		}

		::System::Void FNPPDNDJGEK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECPGBDINBAB_FNPPDNDJGEK_OFFSET))(this, a1);
		}

		::System::Void FIDFGDIKNJO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECPGBDINBAB_FIDFGDIKNJO_OFFSET))(this, a1);
		}

		::System::Void DGBDIOPMNHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DGBDIOPMNHD_OFFSET))(this);
		}

		::System::Void COPGACEDIEI(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_COPGACEDIEI_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* LBPLEBAOOCK(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECPGBDINBAB_LBPLEBAOOCK_OFFSET))(this, a1);
		}

		::System::Void JANJGPIPENK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPGBDINBAB_JANJGPIPENK_OFFSET))(this, a1);
		}

		::System::Void KGLPGGNIBCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KGLPGGNIBCK_OFFSET))(this);
		}

		::System::Single IEGIOKAMOCG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_IEGIOKAMOCG_OFFSET))(this);
		}

		::System::Single NJMGIOMLKEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_NJMGIOMLKEO_OFFSET))(this);
		}

		::System::Void FJAFBAJHOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_FJAFBAJHOFD_OFFSET))(this);
		}

		::System::Void ELNNOIAABLK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ECPGBDINBAB_ELNNOIAABLK_OFFSET))(this, a1, a2);
		}

		::System::Void FGCIMFHAIEJ(::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_FGCIMFHAIEJ_OFFSET))(this, a1);
		}

		::System::Void BMMHHGMMKII(::NJCHGIHCBAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJCHGIHCBAC*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_BMMHHGMMKII_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ECDGGIOPGDM(::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_ECDGGIOPGDM_OFFSET))(this, a1);
		}

		::System::Void BHDFIPHKBIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_BHDFIPHKBIG_OFFSET))(this);
		}

		::System::Void DKLFEFDLELM(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DKLFEFDLELM_OFFSET))(this, a1);
		}

		::System::Void OJOGAHAFCPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_OJOGAHAFCPB_OFFSET))(this);
		}

		::System::Void KOCCNJHJNOL(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KOCCNJHJNOL_OFFSET))(this, a1, a2);
		}

		::System::Void BFHBIHEEJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_BFHBIHEEJJD_OFFSET))(this);
		}

		::System::Void EDPHMABLPJN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPGBDINBAB_EDPHMABLPJN_OFFSET))(this, a1);
		}

		::System::Void DPFGPOPIKFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_DPFGPOPIKFD_OFFSET))(this);
		}

		::System::Void OIEEIFKOHAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_OIEEIFKOHAH_OFFSET))(this);
		}

		::System::Void KKAHNDHNLLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_KKAHNDHNLLL_OFFSET))(this);
		}

		::System::Void OJNDJGCIEJJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECPGBDINBAB_OJNDJGCIEJJ_OFFSET))(this, a1);
		}

		::System::Void NOBFEKLAPAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_NOBFEKLAPAA_OFFSET))(this);
		}

		::System::Void MGCMIEDLGEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB_MGCMIEDLGEH_OFFSET))(this);
		}

		::System::Void GHEAPLGNIBI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GHEAPLGNIBI_OFFSET))(this, a1);
		}

		::System::Void GLNOAOMOOKG(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*))((::PBYTE)hIl2Cpp + ECPGBDINBAB_GLNOAOMOOKG_OFFSET))(this, a1);
		}

	};

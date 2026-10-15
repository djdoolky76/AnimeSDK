#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKLAILNGPHN_CrowdLoadState.h"
#include "unitysdk/RPG/GameCore/LevelCrowdLoadPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ABAGMFKDCLG.h"
#include "unitysdk/FFHNHAFKEOC.h"
class HDMJAAGBBLH;
class IDOMLBBONDH;
class LLBLFJDDEPN;
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelCrowdMemberInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKLAILNGPHN_APPCBLHJNFK_OFFSET UNITYSDK_OFFSET(0x15808B10)
#define FKLAILNGPHN_BEDGKKOCAEI_OFFSET UNITYSDK_OFFSET(0x15809C30)
#define FKLAILNGPHN_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15809DC0)
#define FKLAILNGPHN_BLJHLJDDCAH_OFFSET UNITYSDK_OFFSET(0x1580A470)
#define FKLAILNGPHN_BODPPOINENP_OFFSET UNITYSDK_OFFSET(0x1580B000)
#define FKLAILNGPHN_BPJENGFLJLP_OFFSET UNITYSDK_OFFSET(0x1580AC70)
#define FKLAILNGPHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1580B5D0)
#define FKLAILNGPHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15808E10)
#define FKLAILNGPHN_DBNJHBMDOCJ_OFFSET UNITYSDK_OFFSET(0x1580B180)
#define FKLAILNGPHN_DDGJFNJHKBL_OFFSET UNITYSDK_OFFSET(0x1580B480)
#define FKLAILNGPHN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15809FA0)
#define FKLAILNGPHN_DFHMNIEOCNA_OFFSET UNITYSDK_OFFSET(0x1580B0F0)
#define FKLAILNGPHN_DKFBHIADJBD_OFFSET UNITYSDK_OFFSET(0x1580AF10)
#define FKLAILNGPHN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1580AAF0)
#define FKLAILNGPHN_EKDINFJGHGA_OFFSET UNITYSDK_OFFSET(0x1580B3C0)
#define FKLAILNGPHN_ELCDAMKOHBO_OFFSET UNITYSDK_OFFSET(0x15808A10)
#define FKLAILNGPHN_ELKEELKJNLN_OFFSET UNITYSDK_OFFSET(0x15809650)
#define FKLAILNGPHN_FLDHJGNMOHD_OFFSET UNITYSDK_OFFSET(0x1580B4F0)
#define FKLAILNGPHN_GBKHLKKKIAB_OFFSET UNITYSDK_OFFSET(0x1580AD40)
#define FKLAILNGPHN_GET_DISTANCESORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x15808A30)
#define FKLAILNGPHN_GET_DISTANCESORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x15808A50)
#define FKLAILNGPHN_GET_DISTANCESQRTOCENTER_OFFSET UNITYSDK_OFFSET(0x15808A70)
#define FKLAILNGPHN_GET_ISINVIEW_OFFSET UNITYSDK_OFFSET(0x15808AF0)
#define FKLAILNGPHN_GET_LOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x15808A20)
#define FKLAILNGPHN_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x15808930)
#define FKLAILNGPHN_HJGKDHKOOAD_OFFSET UNITYSDK_OFFSET(0x1580A240)
#define FKLAILNGPHN_IABHKIMEGDC_OFFSET UNITYSDK_OFFSET(0x1580B240)
#define FKLAILNGPHN_JDBGNMIBNHI_OFFSET UNITYSDK_OFFSET(0x1580A9A0)
#define FKLAILNGPHN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1580ABB0)
#define FKLAILNGPHN_LHJANNOBLGP_OFFSET UNITYSDK_OFFSET(0x1580AAA0)
#define FKLAILNGPHN_MDLBBGNNCOD_OFFSET UNITYSDK_OFFSET(0x1580B300)
#define FKLAILNGPHN_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x1580AE10)
#define FKLAILNGPHN_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x15808A90)
#define FKLAILNGPHN_NKPJKCIFEKC_OFFSET UNITYSDK_OFFSET(0x158089B0)
#define FKLAILNGPHN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15809B70)
#define FKLAILNGPHN_OBFHNAPFEIN_OFFSET UNITYSDK_OFFSET(0x1580AA90)
#define FKLAILNGPHN_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0x15808990)
#define FKLAILNGPHN_OHCNOOFCAJD_OFFSET UNITYSDK_OFFSET(0x1580A090)
#define FKLAILNGPHN_PDKOACMMPFO_OFFSET UNITYSDK_OFFSET(0x1580A1E0)
#define FKLAILNGPHN_SET_DISTANCESORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x15808A40)
#define FKLAILNGPHN_SET_DISTANCESORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x15808A60)
#define FKLAILNGPHN_SET_DISTANCESQRTOCENTER_OFFSET UNITYSDK_OFFSET(0x15808A80)
#define FKLAILNGPHN_SET_ISINVIEW_OFFSET UNITYSDK_OFFSET(0x15808B00)

inline static constexpr unsigned int FKLAILNGPHN_TypeDefinitionIndex = 69216;

	class FKLAILNGPHN : public ::System::Object
	{
	public:
		::IDOMLBBONDH* OHFHBEFEIGF; // 0x10
		::HDMJAAGBBLH* GFAFMLLFPBO; // 0x18
		::System::Collections::Generic::List_1<::LLBLFJDDEPN*>* NOHBAMNOLDH; // 0x20
		::RPG::GameCore::RuntimeGroupInfo* BPCFAMECKKJ; // 0x28
		::RPG::GameCore::LevelCrowdInfo* EJJEEJENLDA; // 0x30
		::System::Int32 _DistanceSortPriority_k__BackingField; // 0x38
		::System::Boolean NLCAOIODPGE; // 0x3C
		::System::Boolean JAGIDLCEAPD; // 0x3D
		::System::Boolean MCNJHGGGADH; // 0x3E
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 IKINMNCCKJI; // 0x40
		::System::Single _DistanceSqrToCenter_k__BackingField; // 0x4C
		::System::Boolean IJFILPKEEJH; // 0x50
		::System::Boolean _IsInView_k__BackingField; // 0x51
		::System::Boolean OCCIFHOEJMI; // 0x52
		::System::Boolean CMJNCKOBBAA; // 0x53
		::System::Single FCCIDODDNGA; // 0x54
		::System::Single JLAEHBPLALF; // 0x58
		::System::Single _DistanceSortWeight_k__BackingField; // 0x5C
		::UnityEngine::Vector3 EGJICAKNNDL; // 0x60
		::RPG::GameCore::LevelCrowdLoadPriority _LoadPriority_k__BackingField; // 0x6C
		::System::Int32 IKKCKMMNMIA; // 0x70
		::FKLAILNGPHN_CrowdLoadState DCNBGEAPDGD; // 0x74
		::System::Int32 IILKDGHJHGE; // 0x78
		static ::System::Single* StaticGet_OHCBGIKCDJH()
		{
			return (::System::Single*)UnitySDK::FromName("", "FKLAILNGPHN")->GetStaticField(0x12370);
		}

		// static const ::System::Object ALBHBAEODKE; // 0x0
		// static const ::System::String* EEKJEFNALOC; // 0x0
		::System::Void _ctor(::RPG::GameCore::LevelCrowdInfo* a1, ::ABAGMFKDCLG a2, ::RPG::GameCore::RuntimeGroupInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCrowdInfo*, ::ABAGMFKDCLG, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + FKLAILNGPHN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLAILNGPHN_CCTOR_OFFSET))();
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::UInt32 OEIIDHFBKHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_OEIIDHFBKHG_OFFSET))(this);
		}

		::System::Boolean NKPJKCIFEKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_NKPJKCIFEKC_OFFSET))(this);
		}

		::System::Boolean ELCDAMKOHBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_ELCDAMKOHBO_OFFSET))(this);
		}

		::RPG::GameCore::LevelCrowdLoadPriority get_LoadPriority()
		{
			return ((::RPG::GameCore::LevelCrowdLoadPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_GET_LOADPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_DistanceSortPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_GET_DISTANCESORTPRIORITY_OFFSET))(this);
		}

		::System::Void set_DistanceSortPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKLAILNGPHN_SET_DISTANCESORTPRIORITY_OFFSET))(this, a1);
		}

		::System::Single get_DistanceSortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_GET_DISTANCESORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_DistanceSortWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLAILNGPHN_SET_DISTANCESORTWEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_DistanceSqrToCenter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_GET_DISTANCESQRTOCENTER_OFFSET))(this);
		}

		::System::Void set_DistanceSqrToCenter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLAILNGPHN_SET_DISTANCESQRTOCENTER_OFFSET))(this, a1);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_NECEALBHFAB_OFFSET))(this);
		}

		::System::Boolean get_IsInView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_GET_ISINVIEW_OFFSET))(this);
		}

		::System::Void set_IsInView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKLAILNGPHN_SET_ISINVIEW_OFFSET))(this, a1);
		}

		static ::FFHNHAFKEOC APPCBLHJNFK(::RPG::GameCore::LevelCrowdMemberInfo* a1, ::ABAGMFKDCLG a2)
		{
			return ((::FFHNHAFKEOC(*)(::RPG::GameCore::LevelCrowdMemberInfo*, ::ABAGMFKDCLG))((::PBYTE)hIl2Cpp + FKLAILNGPHN_APPCBLHJNFK_OFFSET))(a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void BEDGKKOCAEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_BEDGKKOCAEI_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLAILNGPHN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::FKLAILNGPHN_CrowdLoadState OBFHNAPFEIN()
		{
			return ((::FKLAILNGPHN_CrowdLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_OBFHNAPFEIN_OFFSET))(this);
		}

		::System::Void LHJANNOBLGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKLAILNGPHN_LHJANNOBLGP_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void BPJENGFLJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_BPJENGFLJLP_OFFSET))(this);
		}

		::System::Void GBKHLKKKIAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_GBKHLKKKIAB_OFFSET))(this);
		}

		::System::Void NBJFLGNEBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_NBJFLGNEBED_OFFSET))(this);
		}

		::System::Void DKFBHIADJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_DKFBHIADJBD_OFFSET))(this);
		}

		::System::Void BODPPOINENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_BODPPOINENP_OFFSET))(this);
		}

		::LLBLFJDDEPN* DFHMNIEOCNA(::System::UInt32 a1)
		{
			return ((::LLBLFJDDEPN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKLAILNGPHN_DFHMNIEOCNA_OFFSET))(this, a1);
		}

		::System::Void DBNJHBMDOCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_DBNJHBMDOCJ_OFFSET))(this);
		}

		::System::Void HJGKDHKOOAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLAILNGPHN_HJGKDHKOOAD_OFFSET))(this, a1);
		}

		::System::Boolean MDLBBGNNCOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_MDLBBGNNCOD_OFFSET))(this);
		}

		::System::Void PDKOACMMPFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_PDKOACMMPFO_OFFSET))(this);
		}

		::System::Void OHCNOOFCAJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_OHCNOOFCAJD_OFFSET))(this);
		}

		::System::Void IABHKIMEGDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_IABHKIMEGDC_OFFSET))(this);
		}

		::System::Void EKDINFJGHGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_EKDINFJGHGA_OFFSET))(this);
		}

		::System::Void BLJHLJDDCAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLAILNGPHN_BLJHLJDDCAH_OFFSET))(this, a1);
		}

		::System::Void JDBGNMIBNHI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLAILNGPHN_JDBGNMIBNHI_OFFSET))(this, a1);
		}

		::System::Void DDGJFNJHKBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKLAILNGPHN_DDGJFNJHKBL_OFFSET))(this, a1);
		}

		::System::Void FLDHJGNMOHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKLAILNGPHN_FLDHJGNMOHD_OFFSET))(this, a1);
		}

		::System::Void ELKEELKJNLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAILNGPHN_ELKEELKJNLN_OFFSET))(this);
		}

	};

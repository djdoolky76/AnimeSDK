#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGameShare/AuthorityType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationDormancy.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationNetMode.h"
#include "unitysdk/RPG/MVector3.h"
class CNEBPCHAGNN;
class EPLACBCPLGK;
class GBJHOMFKNDE;
class GELNHFKCMFN;
class IHGOKJPBAIC;
class LHHKOJNJODO;
class MANCPDFHDHO;
class OFKKOGBKOFI;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ICDNEPOKHJL_ABMDBKPJHAN_OFFSET UNITYSDK_OFFSET(0x1C661050)
#define ICDNEPOKHJL_AJHACPFDODK_OFFSET UNITYSDK_OFFSET(0x1C6605F0)
#define ICDNEPOKHJL_AKDIGKJHFKJ_OFFSET UNITYSDK_OFFSET(0x1C6617A0)
#define ICDNEPOKHJL_ALIIIDMDGON_OFFSET UNITYSDK_OFFSET(0x1C662B30)
#define ICDNEPOKHJL_CAJFMBPLMPB_OFFSET UNITYSDK_OFFSET(0x1C660400)
#define ICDNEPOKHJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C662D20)
#define ICDNEPOKHJL_CPKBMOKOEKN_OFFSET UNITYSDK_OFFSET(0x1C661C20)
#define ICDNEPOKHJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C662CA0)
#define ICDNEPOKHJL_DCNJOPAAJMB_OFFSET UNITYSDK_OFFSET(0x1C661F00)
#define ICDNEPOKHJL_DDBBEFAKEMD_OFFSET UNITYSDK_OFFSET(0x1C6613D0)
#define ICDNEPOKHJL_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1C660F40)
#define ICDNEPOKHJL_DJFODBELLIP_OFFSET UNITYSDK_OFFSET(0x1C661A40)
#define ICDNEPOKHJL_EHFBBFKACLA_OFFSET UNITYSDK_OFFSET(0x1C6604D0)
#define ICDNEPOKHJL_EIBDCPOCLDA_OFFSET UNITYSDK_OFFSET(0x1C662910)
#define ICDNEPOKHJL_EJCFAFNDJNL_OFFSET UNITYSDK_OFFSET(0x1C662460)
#define ICDNEPOKHJL_EPILPFHHAJJ_OFFSET UNITYSDK_OFFSET(0x1C662C40)
#define ICDNEPOKHJL_FANCEOPOBDD_OFFSET UNITYSDK_OFFSET(0x1C662690)
#define ICDNEPOKHJL_FEALGBBMNIJ_OFFSET UNITYSDK_OFFSET(0x1C661BD0)
#define ICDNEPOKHJL_FFMLNNEKFCN_OFFSET UNITYSDK_OFFSET(0x1C662850)
#define ICDNEPOKHJL_FLJAEPBBPLJ_OFFSET UNITYSDK_OFFSET(0x1C661EA0)
#define ICDNEPOKHJL_GCAOOMIAFGD_OFFSET UNITYSDK_OFFSET(0x1C6608D0)
#define ICDNEPOKHJL_GCNPEDHNFJK_OFFSET UNITYSDK_OFFSET(0x1C6607C0)
#define ICDNEPOKHJL_GHALHHFLKCF_OFFSET UNITYSDK_OFFSET(0x1C6628B0)
#define ICDNEPOKHJL_HFJPLBGCADK_OFFSET UNITYSDK_OFFSET(0x1C6627A0)
#define ICDNEPOKHJL_HFPGOIJDJCJ_OFFSET UNITYSDK_OFFSET(0x1C661750)
#define ICDNEPOKHJL_IALBODPMOOB_OFFSET UNITYSDK_OFFSET(0x1C6603A0)
#define ICDNEPOKHJL_IGHHHFOPEOM_OFFSET UNITYSDK_OFFSET(0x1C662130)
#define ICDNEPOKHJL_IGKBNKMIANK_OFFSET UNITYSDK_OFFSET(0x1C6605A0)
#define ICDNEPOKHJL_JCKPDKKLLCB_OFFSET UNITYSDK_OFFSET(0x1C662740)
#define ICDNEPOKHJL_KFAJCPCHJBF_OFFSET UNITYSDK_OFFSET(0x1C6602F0)
#define ICDNEPOKHJL_KFKBPJDGJDK_OFFSET UNITYSDK_OFFSET(0x1C660FF0)
#define ICDNEPOKHJL_KJMMIJGPBDI_OFFSET UNITYSDK_OFFSET(0x1C662A80)
#define ICDNEPOKHJL_LDKKPDECFKE_OFFSET UNITYSDK_OFFSET(0x1C660EF0)
#define ICDNEPOKHJL_LEDECHIACLO_OFFSET UNITYSDK_OFFSET(0x1C660650)
#define ICDNEPOKHJL_LMJECBNJPOE_OFFSET UNITYSDK_OFFSET(0x1C662520)
#define ICDNEPOKHJL_MFCLPHIHLPC_OFFSET UNITYSDK_OFFSET(0x1C6623B0)
#define ICDNEPOKHJL_MIMDGLDHCAI_OFFSET UNITYSDK_OFFSET(0x1C661C80)
#define ICDNEPOKHJL_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x1C662B90)
#define ICDNEPOKHJL_NBLBIADENEL_OFFSET UNITYSDK_OFFSET(0x1C661DF0)
#define ICDNEPOKHJL_NPGCCCMFNNC_OFFSET UNITYSDK_OFFSET(0x1C661850)
#define ICDNEPOKHJL_OEBDAKFGLPO_OFFSET UNITYSDK_OFFSET(0x1C6618B0)
#define ICDNEPOKHJL_OIEEPEOLLHF_OFFSET UNITYSDK_OFFSET(0x1C6624C0)
#define ICDNEPOKHJL_OKEMFFEHNPE_OFFSET UNITYSDK_OFFSET(0x1C660870)
#define ICDNEPOKHJL_PFPCADAPCFG_OFFSET UNITYSDK_OFFSET(0x1C662360)
#define ICDNEPOKHJL_PMEJOMNJIDE_OFFSET UNITYSDK_OFFSET(0x1C660BE0)

inline static constexpr unsigned int ICDNEPOKHJL_TypeDefinitionIndex = 37019;

	class ICDNEPOKHJL : public ::Entitas::Entity
	{
	public:
		static ::GELNHFKCMFN** StaticGet_MJFHIOLENCC()
		{
			return (::GELNHFKCMFN**)UnitySDK::FromName("", "ICDNEPOKHJL")->GetStaticField(0xAFD0);
		}

		static ::IHGOKJPBAIC** StaticGet_GJBDHDKDPPO()
		{
			return (::IHGOKJPBAIC**)UnitySDK::FromName("", "ICDNEPOKHJL")->GetStaticField(0xAFD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICDNEPOKHJL_CCTOR_OFFSET))();
		}

		::EPLACBCPLGK* KFAJCPCHJBF()
		{
			return ((::EPLACBCPLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_KFAJCPCHJBF_OFFSET))(this);
		}

		::System::Boolean IALBODPMOOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_IALBODPMOOB_OFFSET))(this);
		}

		::System::Void CAJFMBPLMPB(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_CAJFMBPLMPB_OFFSET))(this, a1);
		}

		::System::Void EHFBBFKACLA(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_EHFBBFKACLA_OFFSET))(this, a1);
		}

		::System::Void IGKBNKMIANK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_IGKBNKMIANK_OFFSET))(this);
		}

		::System::Boolean AJHACPFDODK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_AJHACPFDODK_OFFSET))(this);
		}

		::System::Void LEDECHIACLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_LEDECHIACLO_OFFSET))(this, a1);
		}

		::LHHKOJNJODO* GCNPEDHNFJK()
		{
			return ((::LHHKOJNJODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_GCNPEDHNFJK_OFFSET))(this);
		}

		::System::Boolean OKEMFFEHNPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_OKEMFFEHNPE_OFFSET))(this);
		}

		::System::Void GCAOOMIAFGD(::System::Int32 a1, ::RPG::Client::LittleGameShare::AuthorityType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::RPG::Client::LittleGameShare::ReplicationNetMode a6, ::RPG::Client::LittleGameShare::ReplicationDormancy a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::HashSet_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGameShare::AuthorityType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::Client::LittleGameShare::ReplicationNetMode, ::RPG::Client::LittleGameShare::ReplicationDormancy, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_GCAOOMIAFGD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void PMEJOMNJIDE(::System::Int32 a1, ::RPG::Client::LittleGameShare::AuthorityType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::RPG::Client::LittleGameShare::ReplicationNetMode a6, ::RPG::Client::LittleGameShare::ReplicationDormancy a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::HashSet_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGameShare::AuthorityType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::Client::LittleGameShare::ReplicationNetMode, ::RPG::Client::LittleGameShare::ReplicationDormancy, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_PMEJOMNJIDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void LDKKPDECFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_LDKKPDECFKE_OFFSET))(this);
		}

		::GBJHOMFKNDE* DICDJJOJKGF()
		{
			return ((::GBJHOMFKNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_DICDJJOJKGF_OFFSET))(this);
		}

		::System::Boolean KFKBPJDGJDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_KFKBPJDGJDK_OFFSET))(this);
		}

		::System::Void ABMDBKPJHAN(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_ABMDBKPJHAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DDBBEFAKEMD(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_DDBBEFAKEMD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HFPGOIJDJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_HFPGOIJDJCJ_OFFSET))(this);
		}

		::CNEBPCHAGNN* AKDIGKJHFKJ()
		{
			return ((::CNEBPCHAGNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_AKDIGKJHFKJ_OFFSET))(this);
		}

		::System::Boolean NPGCCCMFNNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_NPGCCCMFNNC_OFFSET))(this);
		}

		::System::Void OEBDAKFGLPO(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_OEBDAKFGLPO_OFFSET))(this, a1, a2);
		}

		::System::Void DJFODBELLIP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_DJFODBELLIP_OFFSET))(this, a1, a2);
		}

		::System::Void FEALGBBMNIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_FEALGBBMNIJ_OFFSET))(this);
		}

		::System::Boolean CPKBMOKOEKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_CPKBMOKOEKN_OFFSET))(this);
		}

		::System::Void MIMDGLDHCAI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_MIMDGLDHCAI_OFFSET))(this, a1);
		}

		::MANCPDFHDHO* NBLBIADENEL()
		{
			return ((::MANCPDFHDHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_NBLBIADENEL_OFFSET))(this);
		}

		::System::Boolean FLJAEPBBPLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_FLJAEPBBPLJ_OFFSET))(this);
		}

		::System::Void DCNJOPAAJMB(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_DCNJOPAAJMB_OFFSET))(this, a1, a2);
		}

		::System::Void IGHHHFOPEOM(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_IGHHHFOPEOM_OFFSET))(this, a1, a2);
		}

		::System::Void PFPCADAPCFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_PFPCADAPCFG_OFFSET))(this);
		}

		::EPLACBCPLGK* MFCLPHIHLPC()
		{
			return ((::EPLACBCPLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_MFCLPHIHLPC_OFFSET))(this);
		}

		::System::Boolean EJCFAFNDJNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_EJCFAFNDJNL_OFFSET))(this);
		}

		::System::Boolean OIEEPEOLLHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_OIEEPEOLLHF_OFFSET))(this);
		}

		::System::Void LMJECBNJPOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_LMJECBNJPOE_OFFSET))(this, a1);
		}

		::LHHKOJNJODO* FANCEOPOBDD()
		{
			return ((::LHHKOJNJODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_FANCEOPOBDD_OFFSET))(this);
		}

		::System::Boolean JCKPDKKLLCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_JCKPDKKLLCB_OFFSET))(this);
		}

		::CNEBPCHAGNN* HFJPLBGCADK()
		{
			return ((::CNEBPCHAGNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_HFJPLBGCADK_OFFSET))(this);
		}

		::System::Boolean FFMLNNEKFCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_FFMLNNEKFCN_OFFSET))(this);
		}

		::System::Boolean GHALHHFLKCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_GHALHHFLKCF_OFFSET))(this);
		}

		::System::Void EIBDCPOCLDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_EIBDCPOCLDA_OFFSET))(this, a1);
		}

		::MANCPDFHDHO* KJMMIJGPBDI()
		{
			return ((::MANCPDFHDHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_KJMMIJGPBDI_OFFSET))(this);
		}

		::System::Boolean ALIIIDMDGON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_ALIIIDMDGON_OFFSET))(this);
		}

		::GBJHOMFKNDE* MJHIFABJDHJ()
		{
			return ((::GBJHOMFKNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_MJHIFABJDHJ_OFFSET))(this);
		}

		::System::Boolean EPILPFHHAJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDNEPOKHJL_EPILPFHHAJJ_OFFSET))(this);
		}

	};

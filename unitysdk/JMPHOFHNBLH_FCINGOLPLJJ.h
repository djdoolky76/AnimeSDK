#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/JMPHOFHNBLH_IDCOJBODFGG.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class MHLKHHALPNI;
namespace MoleMole { class LevelSectionGroupData; }
namespace MoleMole { class UIPerformPageController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class IScenePerformConfig; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMPHOFHNBLH_FCINGOLPLJJ_AJJHJHJMJGP_OFFSET UNITYSDK_OFFSET(0x1874C020)
#define JMPHOFHNBLH_FCINGOLPLJJ_BLNEENJKPFA_OFFSET UNITYSDK_OFFSET(0x1874DCD0)
#define JMPHOFHNBLH_FCINGOLPLJJ_CJGNAKPIHLB_OFFSET UNITYSDK_OFFSET(0x1874EBA0)
#define JMPHOFHNBLH_FCINGOLPLJJ_CPEJEBHKEHC_OFFSET UNITYSDK_OFFSET(0x1874EC20)
#define JMPHOFHNBLH_FCINGOLPLJJ_DJKDEOABHCL_OFFSET UNITYSDK_OFFSET(0x1874B880)
#define JMPHOFHNBLH_FCINGOLPLJJ_DLDJBANHKOP_OFFSET UNITYSDK_OFFSET(0x1874E2A0)
#define JMPHOFHNBLH_FCINGOLPLJJ_DNIOIJDAAOA_OFFSET UNITYSDK_OFFSET(0x1874D330)
#define JMPHOFHNBLH_FCINGOLPLJJ_EFFPBGAHLJP_OFFSET UNITYSDK_OFFSET(0x1874E660)
#define JMPHOFHNBLH_FCINGOLPLJJ_ENCPPNDLCHL_OFFSET UNITYSDK_OFFSET(0x1874C090)
#define JMPHOFHNBLH_FCINGOLPLJJ_EPMBJHLLNEN_OFFSET UNITYSDK_OFFSET(0x1874EDE0)
#define JMPHOFHNBLH_FCINGOLPLJJ_FGELJMNJBJB_OFFSET UNITYSDK_OFFSET(0x1874ED80)
#define JMPHOFHNBLH_FCINGOLPLJJ_GABNONNDMHH_OFFSET UNITYSDK_OFFSET(0x1874B8B0)
#define JMPHOFHNBLH_FCINGOLPLJJ_GBPCEJIDIHJ_OFFSET UNITYSDK_OFFSET(0x1874B7E0)
#define JMPHOFHNBLH_FCINGOLPLJJ_GGOHBJNKAAL_OFFSET UNITYSDK_OFFSET(0x1874D3A0)
#define JMPHOFHNBLH_FCINGOLPLJJ_GKOFJJCGCHI_OFFSET UNITYSDK_OFFSET(0x1874B490)
#define JMPHOFHNBLH_FCINGOLPLJJ_GONPGHFCGKC_OFFSET UNITYSDK_OFFSET(0x1874BF10)
#define JMPHOFHNBLH_FCINGOLPLJJ_HBAFMBDBFGF_OFFSET UNITYSDK_OFFSET(0x1874BBE0)
#define JMPHOFHNBLH_FCINGOLPLJJ_HBJFMFNDHDP_OFFSET UNITYSDK_OFFSET(0x1874C3C0)
#define JMPHOFHNBLH_FCINGOLPLJJ_HGKCDGHCGIO_OFFSET UNITYSDK_OFFSET(0x1874BF90)
#define JMPHOFHNBLH_FCINGOLPLJJ_HGOGLOMLDLC_OFFSET UNITYSDK_OFFSET(0x1874B870)
#define JMPHOFHNBLH_FCINGOLPLJJ_HJOAIDEEMBA_OFFSET UNITYSDK_OFFSET(0x1874B930)
#define JMPHOFHNBLH_FCINGOLPLJJ_HJPEKEAGFIF_OFFSET UNITYSDK_OFFSET(0x1874B8A0)
#define JMPHOFHNBLH_FCINGOLPLJJ_HJPKBDKGHEG_OFFSET UNITYSDK_OFFSET(0x1874D2B0)
#define JMPHOFHNBLH_FCINGOLPLJJ_HOEJGOCJEBL_OFFSET UNITYSDK_OFFSET(0x1874E9E0)
#define JMPHOFHNBLH_FCINGOLPLJJ_IDHIBNNDOPD_OFFSET UNITYSDK_OFFSET(0x1874D820)
#define JMPHOFHNBLH_FCINGOLPLJJ_IGKMBGEOIJC_OFFSET UNITYSDK_OFFSET(0x1874DCC0)
#define JMPHOFHNBLH_FCINGOLPLJJ_INIMMDJIBKG_OFFSET UNITYSDK_OFFSET(0x1874DEB0)
#define JMPHOFHNBLH_FCINGOLPLJJ_IPMLMMMNIOJ_OFFSET UNITYSDK_OFFSET(0x1874B510)
#define JMPHOFHNBLH_FCINGOLPLJJ_JDHPBJCKFLA_OFFSET UNITYSDK_OFFSET(0x1874BDF0)
#define JMPHOFHNBLH_FCINGOLPLJJ_JHPOIAEINOC_OFFSET UNITYSDK_OFFSET(0x1874B550)
#define JMPHOFHNBLH_FCINGOLPLJJ_KNLHJIIGHOD_OFFSET UNITYSDK_OFFSET(0x1874D040)
#define JMPHOFHNBLH_FCINGOLPLJJ_LOMAPIJLIHL_OFFSET UNITYSDK_OFFSET(0x1874EEF0)
#define JMPHOFHNBLH_FCINGOLPLJJ_MCBCEJGEOOC_OFFSET UNITYSDK_OFFSET(0x1874BA20)
#define JMPHOFHNBLH_FCINGOLPLJJ_MGHHDLLHGJF_OFFSET UNITYSDK_OFFSET(0x1874CF10)
#define JMPHOFHNBLH_FCINGOLPLJJ_NJNNONFMCLA_OFFSET UNITYSDK_OFFSET(0x1874B620)
#define JMPHOFHNBLH_FCINGOLPLJJ_OICDHMECHKP_OFFSET UNITYSDK_OFFSET(0x1874C330)
#define JMPHOFHNBLH_FCINGOLPLJJ_OKDADBHHOHG_OFFSET UNITYSDK_OFFSET(0x1874D7B0)
#define JMPHOFHNBLH_FCINGOLPLJJ_OLPMKMOHGIO_OFFSET UNITYSDK_OFFSET(0x1874DF40)
#define JMPHOFHNBLH_FCINGOLPLJJ_OMGCGPADPLA_OFFSET UNITYSDK_OFFSET(0x1874CD40)
#define JMPHOFHNBLH_FCINGOLPLJJ_OMJGMINOPHN_OFFSET UNITYSDK_OFFSET(0x1874B890)
#define JMPHOFHNBLH_FCINGOLPLJJ_PBLDKOLAFNF_OFFSET UNITYSDK_OFFSET(0x1874EC10)
#define JMPHOFHNBLH_FCINGOLPLJJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1874B450)
#define JMPHOFHNBLH_FCINGOLPLJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1874B440)

inline static constexpr unsigned int JMPHOFHNBLH_FCINGOLPLJJ_TypeDefinitionIndex = 73722;

class JMPHOFHNBLH_FCINGOLPLJJ : public ::System::Object
{
public:
	// static const ::System::String* PCMPJAEFOCL; // 0x0
	// static const ::System::String* LPCPBJKOFLC; // 0x0
	// static const ::System::String* OHPKGDOMMPA; // 0x0
	::MoleMole::UIPerformPageController* DPGOIFCGKLF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HPMOAJJCKJP; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>* IMPOABAIMDC; // 0x20
	::MHLKHHALPNI* BNDPILDELGB; // 0x28
	::MoleMole::LevelSectionGroupData* JAKLOPKADNM; // 0x30
	::JMPHOFHNBLH_IDCOJBODFGG AKBKOANLPHF; // 0x38
	::Foundation::Coroutine::CoroutineHandle PIJIGCILMCC; // 0x50
	::System::Single CMMHGPBNOBH; // 0x54
	::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType NGOJCKAPALL; // 0x58
	::System::Boolean FCBHMNJOEDE; // 0x5C
	::System::Boolean MMHAOEHPNHH; // 0x5D
	::System::Boolean CADDLHNMHDJ; // 0x5E
	::System::Boolean ONFFGJDIGBC; // 0x5F
	::System::Boolean KBKJHMIANDA; // 0x60
	::System::Boolean MPPINDEALBB; // 0x61
	::System::Boolean ALHGHJACNAK; // 0x62
	::System::Byte _padding0[0x1];
	::System::Int32 NNAEOAHFHJA; // 0x64
	::System::Single GHLOLCPBGII; // 0x68
	::System::Boolean PMFAHBCJOJF; // 0x6C
	::System::Boolean JNMGJBOONBL; // 0x6D
	::System::Boolean NOIMLIDOALH; // 0x6E
	::System::Boolean CDIPBMMDICL; // 0x6F
	::Foundation::Coroutine::CoroutineHandle OFMBAJLBNOK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HPMOAJJCKJP, ::JMPHOFHNBLH_IDCOJBODFGG AKBKOANLPHF, ::System::Boolean BPIDIHCFIPC, ::System::Boolean IOOJHMNCDGK, ::System::Boolean MEBCMLBBKKA, ::MoleMole::LevelSectionGroupData* JAKLOPKADNM, ::MHLKHHALPNI* HINEJHJDICB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::JMPHOFHNBLH_IDCOJBODFGG, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::LevelSectionGroupData*, ::MHLKHHALPNI*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ__CTOR_1_OFFSET))(this, HPMOAJJCKJP, AKBKOANLPHF, BPIDIHCFIPC, IOOJHMNCDGK, MEBCMLBBKKA, JAKLOPKADNM, HINEJHJDICB);
	}

	::System::Void GKOFJJCGCHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_GKOFJJCGCHI_OFFSET))(this);
	}

	::System::Void IPMLMMMNIOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_IPMLMMMNIOJ_OFFSET))(this);
	}

	::System::Action* JHPOIAEINOC(::System::Single LJPDNHGGBBJ)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_JHPOIAEINOC_OFFSET))(this, LJPDNHGGBBJ);
	}

	::System::Void NJNNONFMCLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_NJNNONFMCLA_OFFSET))(this);
	}

	::MoleMole::Config::IScenePerformConfig* GBPCEJIDIHJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::Config::IScenePerformConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_GBPCEJIDIHJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean HGOGLOMLDLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HGOGLOMLDLC_OFFSET))(this);
	}

	::System::Boolean DJKDEOABHCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_DJKDEOABHCL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMJGMINOPHN()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_OMJGMINOPHN_OFFSET))(this);
	}

	::MoleMole::UIPerformPageController* HJPEKEAGFIF()
	{
		return ((::MoleMole::UIPerformPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HJPEKEAGFIF_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* GABNONNDMHH()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_GABNONNDMHH_OFFSET))(this);
	}

	::System::Boolean HJOAIDEEMBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HJOAIDEEMBA_OFFSET))(this);
	}

	::System::Void MCBCEJGEOOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_MCBCEJGEOOC_OFFSET))(this);
	}

	::System::Void HGKCDGHCGIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HGKCDGHCGIO_OFFSET))(this);
	}

	::System::Void ENCPPNDLCHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_ENCPPNDLCHL_OFFSET))(this);
	}

	::System::Void OICDHMECHKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_OICDHMECHKP_OFFSET))(this);
	}

	::System::Void HBJFMFNDHDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HBJFMFNDHDP_OFFSET))(this);
	}

	static ::System::Boolean OMGCGPADPLA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_OMGCGPADPLA_OFFSET))();
	}

	::System::Void MGHHDLLHGJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_MGHHDLLHGJF_OFFSET))(this);
	}

	::System::Collections::IEnumerator* GONPGHFCGKC()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_GONPGHFCGKC_OFFSET))(this);
	}

	::System::Void KNLHJIIGHOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_KNLHJIIGHOD_OFFSET))(this);
	}

	::System::Void IDHIBNNDOPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_IDHIBNNDOPD_OFFSET))(this);
	}

	::System::Void IGKMBGEOIJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_IGKMBGEOIJC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* INIMMDJIBKG(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_INIMMDJIBKG_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void OLPMKMOHGIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_OLPMKMOHGIO_OFFSET))(this);
	}

	::System::Void DLDJBANHKOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_DLDJBANHKOP_OFFSET))(this);
	}

	::System::Void AJJHJHJMJGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_AJJHJHJMJGP_OFFSET))(this);
	}

	static ::System::Boolean HOEJGOCJEBL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HOEJGOCJEBL_OFFSET))();
	}

	::System::Void BLNEENJKPFA(::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_BLNEENJKPFA_OFFSET))(this, DCFANHOIMOB);
	}

	::System::Void CJGNAKPIHLB(::JMPHOFHNBLH_IDCOJBODFGG DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::JMPHOFHNBLH_IDCOJBODFGG))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_CJGNAKPIHLB_OFFSET))(this, DMPEOJCCCLO);
	}

	::System::Void JDHPBJCKFLA(::System::Boolean BAIIOPLFFBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_JDHPBJCKFLA_OFFSET))(this, BAIIOPLFFBH);
	}

	::System::Void EFFPBGAHLJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_EFFPBGAHLJP_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HJPKBDKGHEG()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HJPKBDKGHEG_OFFSET))(this);
	}

	::System::Void PBLDKOLAFNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_PBLDKOLAFNF_OFFSET))(this);
	}

	::System::Void CPEJEBHKEHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_CPEJEBHKEHC_OFFSET))(this);
	}

	::System::Void FGELJMNJBJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_FGELJMNJBJB_OFFSET))(this);
	}

	::System::Boolean HBAFMBDBFGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_HBAFMBDBFGF_OFFSET))(this);
	}

	::System::Void OKDADBHHOHG(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_OKDADBHHOHG_OFFSET))(this, JKBLDFBGBPK);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid DNIOIJDAAOA()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_DNIOIJDAAOA_OFFSET))(this);
	}

	::System::Void GGOHBJNKAAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_GGOHBJNKAAL_OFFSET))(this);
	}

	::System::Void EPMBJHLLNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_EPMBJHLLNEN_OFFSET))(this);
	}

	::System::Void LOMAPIJLIHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_LOMAPIJLIHL_OFFSET))(this);
	}
};

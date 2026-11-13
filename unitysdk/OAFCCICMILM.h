#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIFNELLKBFE.h"
class BGALDAPECKN;
class BINJLCOJPHC;
class FDPALAEIHPB;
class JKICCDFOCDO;
class JMFCIHKNIFH;
class KHPOKIKCOFO;
class LNFLPOLMCIF;
class MMLNKGHJCJK;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define OAFCCICMILM_BEKCKJHGHAM_OFFSET UNITYSDK_OFFSET(0x1E049910)
#define OAFCCICMILM_BKIBGJBJDAM_OFFSET UNITYSDK_OFFSET(0x1E04B020)
#define OAFCCICMILM_BLMGCANFGNP_OFFSET UNITYSDK_OFFSET(0x1E04B160)
#define OAFCCICMILM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E058250)
#define OAFCCICMILM_FPAPLMIGPNI_OFFSET UNITYSDK_OFFSET(0x1E04AF50)
#define OAFCCICMILM_GAPJCBMDLIH_OFFSET UNITYSDK_OFFSET(0x1E058F60)
#define OAFCCICMILM_GLFNDICGPHM_OFFSET UNITYSDK_OFFSET(0x1E04BEC0)
#define OAFCCICMILM_GPNOOOHAIOE_OFFSET UNITYSDK_OFFSET(0x1E058D90)
#define OAFCCICMILM_HJIEKEAHAND_OFFSET UNITYSDK_OFFSET(0x1E049830)
#define OAFCCICMILM_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1E0583B0)
#define OAFCCICMILM_KOJBCOCNEAF_OFFSET UNITYSDK_OFFSET(0x1E059730)
#define OAFCCICMILM_LAPELKCLLPL_OFFSET UNITYSDK_OFFSET(0x1E058C30)
#define OAFCCICMILM_LJAHPPIBDGK_OFFSET UNITYSDK_OFFSET(0x1E059640)
#define OAFCCICMILM_MALFFKJHKII_OFFSET UNITYSDK_OFFSET(0x1E04CB20)
#define OAFCCICMILM_MCODJNHPGPO_OFFSET UNITYSDK_OFFSET(0x1E04A740)
#define OAFCCICMILM_MEOOJJPKDOB_OFFSET UNITYSDK_OFFSET(0x1E0598E0)
#define OAFCCICMILM_NBBAJPNJPDI_OFFSET UNITYSDK_OFFSET(0x1E049FC0)
#define OAFCCICMILM_NEMCDFMPKEF_OFFSET UNITYSDK_OFFSET(0x1E04B840)
#define OAFCCICMILM_NKGJKLMDPKL_OFFSET UNITYSDK_OFFSET(0x1E059810)
#define OAFCCICMILM_NLLMFGNIFGB_OFFSET UNITYSDK_OFFSET(0x1E059350)
#define OAFCCICMILM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1E058330)
#define OAFCCICMILM_OLEMOCLOILG_OFFSET UNITYSDK_OFFSET(0x1E058500)

inline static constexpr unsigned int OAFCCICMILM_TypeDefinitionIndex = 43362;

	class OAFCCICMILM : public ::GIFNELLKBFE
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x30
		::BINJLCOJPHC* DCNCCEHNIMA; // 0x38
		::LNFLPOLMCIF* DHCDLPDEHPJ; // 0x40
		::BGALDAPECKN* FELKOHMMCHK; // 0x48
		::RPG::Client::LittleGame::MovieGameLevelConfig* EABKOHGCHFP; // 0x50
		::JKICCDFOCDO* AFLEFOJCING; // 0x58
		::JMFCIHKNIFH* FPPAAAGFODC; // 0x60
		::RPG::Client::LittleGame::MovieBossConfig* KMGIBGPAOPC; // 0x68
		::System::Int32 IDALPBNMFJD; // 0x70
		::System::Single NFGFKDLDHIA; // 0x74
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + OAFCCICMILM_CTOR_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_KMANBNKPLJJ_OFFSET))(this);
		}

		::System::Void OLEMOCLOILG(::KHPOKIKCOFO* a1, ::MMLNKGHJCJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*, ::MMLNKGHJCJK*))((::PBYTE)hIl2Cpp + OAFCCICMILM_OLEMOCLOILG_OFFSET))(this, a1, a2);
		}

		::KHPOKIKCOFO* BEKCKJHGHAM(::System::Single a1)
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAFCCICMILM_BEKCKJHGHAM_OFFSET))(this, a1);
		}

		::KHPOKIKCOFO* BLMGCANFGNP()
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_BLMGCANFGNP_OFFSET))(this);
		}

		::System::Void NEMCDFMPKEF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAFCCICMILM_NEMCDFMPKEF_OFFSET))(this, a1);
		}

		::System::Void GAPJCBMDLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_GAPJCBMDLIH_OFFSET))(this);
		}

		::System::Void MALFFKJHKII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_MALFFKJHKII_OFFSET))(this);
		}

		::System::Void GLFNDICGPHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_GLFNDICGPHM_OFFSET))(this);
		}

		::System::Void FPAPLMIGPNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_FPAPLMIGPNI_OFFSET))(this);
		}

		::System::Void GPNOOOHAIOE(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFCCICMILM_GPNOOOHAIOE_OFFSET))(this, a1, a2);
		}

		::System::Single NLLMFGNIFGB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_NLLMFGNIFGB_OFFSET))(this);
		}

		::System::Single LJAHPPIBDGK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_LJAHPPIBDGK_OFFSET))(this);
		}

		::System::Single KOJBCOCNEAF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_KOJBCOCNEAF_OFFSET))(this);
		}

		::System::Boolean HJIEKEAHAND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_HJIEKEAHAND_OFFSET))(this);
		}

		::System::Boolean NBBAJPNJPDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_NBBAJPNJPDI_OFFSET))(this);
		}

		::System::Boolean BKIBGJBJDAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_BKIBGJBJDAM_OFFSET))(this);
		}

		::System::Boolean MCODJNHPGPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_MCODJNHPGPO_OFFSET))(this);
		}

		::System::Boolean LAPELKCLLPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_LAPELKCLLPL_OFFSET))(this);
		}

		::System::Boolean NKGJKLMDPKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_NKGJKLMDPKL_OFFSET))(this);
		}

		::System::Single MEOOJJPKDOB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCCICMILM_MEOOJJPKDOB_OFFSET))(this);
		}

	};

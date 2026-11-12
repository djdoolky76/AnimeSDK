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

#define OAFCCICMILM_BEKCKJHGHAM_OFFSET UNITYSDK_OFFSET(0x1DB2B2C0)
#define OAFCCICMILM_BKIBGJBJDAM_OFFSET UNITYSDK_OFFSET(0x1DB2C990)
#define OAFCCICMILM_BLMGCANFGNP_OFFSET UNITYSDK_OFFSET(0x1DB2CAD0)
#define OAFCCICMILM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB39B50)
#define OAFCCICMILM_FPAPLMIGPNI_OFFSET UNITYSDK_OFFSET(0x1DB2C8C0)
#define OAFCCICMILM_GAPJCBMDLIH_OFFSET UNITYSDK_OFFSET(0x1DB3A860)
#define OAFCCICMILM_GLFNDICGPHM_OFFSET UNITYSDK_OFFSET(0x1DB2D810)
#define OAFCCICMILM_GPNOOOHAIOE_OFFSET UNITYSDK_OFFSET(0x1DB3A690)
#define OAFCCICMILM_HJIEKEAHAND_OFFSET UNITYSDK_OFFSET(0x1DB2B1F0)
#define OAFCCICMILM_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1DB39CB0)
#define OAFCCICMILM_KOJBCOCNEAF_OFFSET UNITYSDK_OFFSET(0x1DB3B000)
#define OAFCCICMILM_LAPELKCLLPL_OFFSET UNITYSDK_OFFSET(0x1DB3A530)
#define OAFCCICMILM_LJAHPPIBDGK_OFFSET UNITYSDK_OFFSET(0x1DB3AF10)
#define OAFCCICMILM_MALFFKJHKII_OFFSET UNITYSDK_OFFSET(0x1DB2E470)
#define OAFCCICMILM_MCODJNHPGPO_OFFSET UNITYSDK_OFFSET(0x1DB2C0E0)
#define OAFCCICMILM_MEOOJJPKDOB_OFFSET UNITYSDK_OFFSET(0x1DB3B1B0)
#define OAFCCICMILM_NBBAJPNJPDI_OFFSET UNITYSDK_OFFSET(0x1DB2B980)
#define OAFCCICMILM_NEMCDFMPKEF_OFFSET UNITYSDK_OFFSET(0x1DB2D1B0)
#define OAFCCICMILM_NKGJKLMDPKL_OFFSET UNITYSDK_OFFSET(0x1DB3B0E0)
#define OAFCCICMILM_NLLMFGNIFGB_OFFSET UNITYSDK_OFFSET(0x1DB3AC30)
#define OAFCCICMILM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1DB39C30)
#define OAFCCICMILM_OLEMOCLOILG_OFFSET UNITYSDK_OFFSET(0x1DB39E00)

inline static constexpr unsigned int OAFCCICMILM_TypeDefinitionIndex = 43362;

	class OAFCCICMILM : public ::GIFNELLKBFE
	{
	public:
		::RPG::Client::LittleGame::MovieBossConfig* KMGIBGPAOPC; // 0x30
		::JMFCIHKNIFH* FPPAAAGFODC; // 0x38
		::FDPALAEIHPB* FKINCGODJEP; // 0x40
		::LNFLPOLMCIF* DHCDLPDEHPJ; // 0x48
		::JKICCDFOCDO* AFLEFOJCING; // 0x50
		::BINJLCOJPHC* DCNCCEHNIMA; // 0x58
		::BGALDAPECKN* FELKOHMMCHK; // 0x60
		::RPG::Client::LittleGame::MovieGameLevelConfig* EABKOHGCHFP; // 0x68
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

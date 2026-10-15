#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGameShare/AuthorityType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationDormancy.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationNetMode.h"
#include "unitysdk/RPG/MVector3.h"
class AKHGJJKOKHO;
class EPLACBCPLGK;
class GBJHOMFKNDE;
class IHGOKJPBAIC;
class LHHKOJNJODO;
class OAJLLHGOPMH;
class OFKKOGBKOFI;
class PGMPJKHCHPH;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JIGNHFBMPAD_ABMDBKPJHAN_OFFSET UNITYSDK_OFFSET(0x1C6F8790)
#define JIGNHFBMPAD_AJHACPFDODK_OFFSET UNITYSDK_OFFSET(0x1C6F7710)
#define JIGNHFBMPAD_CAJFMBPLMPB_OFFSET UNITYSDK_OFFSET(0x1C6F7500)
#define JIGNHFBMPAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F9680)
#define JIGNHFBMPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F9600)
#define JIGNHFBMPAD_DBGHCLCPPMJ_OFFSET UNITYSDK_OFFSET(0x1C6F8F90)
#define JIGNHFBMPAD_DDBBEFAKEMD_OFFSET UNITYSDK_OFFSET(0x1C6F8B10)
#define JIGNHFBMPAD_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1C6F8680)
#define JIGNHFBMPAD_EHFBBFKACLA_OFFSET UNITYSDK_OFFSET(0x1C6F75E0)
#define JIGNHFBMPAD_EJCFAFNDJNL_OFFSET UNITYSDK_OFFSET(0x1C6F91B0)
#define JIGNHFBMPAD_EOIMBBFNKPP_OFFSET UNITYSDK_OFFSET(0x1C6F8360)
#define JIGNHFBMPAD_EPILPFHHAJJ_OFFSET UNITYSDK_OFFSET(0x1C6F95A0)
#define JIGNHFBMPAD_FANCEOPOBDD_OFFSET UNITYSDK_OFFSET(0x1C6F93E0)
#define JIGNHFBMPAD_GCAOOMIAFGD_OFFSET UNITYSDK_OFFSET(0x1C6F79F0)
#define JIGNHFBMPAD_GCNPEDHNFJK_OFFSET UNITYSDK_OFFSET(0x1C6F78E0)
#define JIGNHFBMPAD_GFAKPCBFIPB_OFFSET UNITYSDK_OFFSET(0x1C6F8630)
#define JIGNHFBMPAD_HDGGNOJBPNL_OFFSET UNITYSDK_OFFSET(0x1C6F8170)
#define JIGNHFBMPAD_HFPGOIJDJCJ_OFFSET UNITYSDK_OFFSET(0x1C6F8E90)
#define JIGNHFBMPAD_HJEJLOOHAMB_OFFSET UNITYSDK_OFFSET(0x1C6F8470)
#define JIGNHFBMPAD_IALBODPMOOB_OFFSET UNITYSDK_OFFSET(0x1C6F74A0)
#define JIGNHFBMPAD_IGKBNKMIANK_OFFSET UNITYSDK_OFFSET(0x1C6F76C0)
#define JIGNHFBMPAD_JCKPDKKLLCB_OFFSET UNITYSDK_OFFSET(0x1C6F9490)
#define JIGNHFBMPAD_KEDCHDMNPEB_OFFSET UNITYSDK_OFFSET(0x1C6F8FF0)
#define JIGNHFBMPAD_KFAJCPCHJBF_OFFSET UNITYSDK_OFFSET(0x1C6F73F0)
#define JIGNHFBMPAD_KFKBPJDGJDK_OFFSET UNITYSDK_OFFSET(0x1C6F8730)
#define JIGNHFBMPAD_LDKKPDECFKE_OFFSET UNITYSDK_OFFSET(0x1C6F8010)
#define JIGNHFBMPAD_LEDECHIACLO_OFFSET UNITYSDK_OFFSET(0x1C6F7770)
#define JIGNHFBMPAD_LMJECBNJPOE_OFFSET UNITYSDK_OFFSET(0x1C6F9270)
#define JIGNHFBMPAD_LNHFBFEGHMN_OFFSET UNITYSDK_OFFSET(0x1C6F8550)
#define JIGNHFBMPAD_MACNKBNNGJP_OFFSET UNITYSDK_OFFSET(0x1C6F90A0)
#define JIGNHFBMPAD_MFCLPHIHLPC_OFFSET UNITYSDK_OFFSET(0x1C6F9100)
#define JIGNHFBMPAD_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x1C6F94F0)
#define JIGNHFBMPAD_NMGAJKCCJKO_OFFSET UNITYSDK_OFFSET(0x1C6F8060)
#define JIGNHFBMPAD_ODICOKFGEKH_OFFSET UNITYSDK_OFFSET(0x1C6F8240)
#define JIGNHFBMPAD_OIEEPEOLLHF_OFFSET UNITYSDK_OFFSET(0x1C6F9210)
#define JIGNHFBMPAD_OKEMFFEHNPE_OFFSET UNITYSDK_OFFSET(0x1C6F7990)
#define JIGNHFBMPAD_OKEPOBBKHII_OFFSET UNITYSDK_OFFSET(0x1C6F8EE0)
#define JIGNHFBMPAD_PHJOKPKBEMN_OFFSET UNITYSDK_OFFSET(0x1C6F8310)
#define JIGNHFBMPAD_PMEJOMNJIDE_OFFSET UNITYSDK_OFFSET(0x1C6F7D00)
#define JIGNHFBMPAD_PMGNJJCNEHG_OFFSET UNITYSDK_OFFSET(0x1C6F8110)
#define JIGNHFBMPAD_PNNECJKJBOA_OFFSET UNITYSDK_OFFSET(0x1C6F8410)

	class JIGNHFBMPAD : public ::Entitas::Entity
	{
	public:
		static ::IHGOKJPBAIC** StaticGet_GJBDHDKDPPO()
		{
			return (::IHGOKJPBAIC**)UnitySDK::FromName("", "JIGNHFBMPAD")->GetStaticField(0x11010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGNHFBMPAD_CCTOR_OFFSET))();
		}

		::EPLACBCPLGK* KFAJCPCHJBF()
		{
			return ((::EPLACBCPLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_KFAJCPCHJBF_OFFSET))(this);
		}

		::System::Boolean IALBODPMOOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_IALBODPMOOB_OFFSET))(this);
		}

		::System::Void CAJFMBPLMPB(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_CAJFMBPLMPB_OFFSET))(this, a1);
		}

		::System::Void EHFBBFKACLA(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_EHFBBFKACLA_OFFSET))(this, a1);
		}

		::System::Void IGKBNKMIANK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_IGKBNKMIANK_OFFSET))(this);
		}

		::System::Boolean AJHACPFDODK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_AJHACPFDODK_OFFSET))(this);
		}

		::System::Void LEDECHIACLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_LEDECHIACLO_OFFSET))(this, a1);
		}

		::LHHKOJNJODO* GCNPEDHNFJK()
		{
			return ((::LHHKOJNJODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_GCNPEDHNFJK_OFFSET))(this);
		}

		::System::Boolean OKEMFFEHNPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_OKEMFFEHNPE_OFFSET))(this);
		}

		::System::Void GCAOOMIAFGD(::System::Int32 a1, ::RPG::Client::LittleGameShare::AuthorityType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::RPG::Client::LittleGameShare::ReplicationNetMode a6, ::RPG::Client::LittleGameShare::ReplicationDormancy a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::HashSet_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGameShare::AuthorityType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::Client::LittleGameShare::ReplicationNetMode, ::RPG::Client::LittleGameShare::ReplicationDormancy, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_GCAOOMIAFGD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void PMEJOMNJIDE(::System::Int32 a1, ::RPG::Client::LittleGameShare::AuthorityType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::RPG::Client::LittleGameShare::ReplicationNetMode a6, ::RPG::Client::LittleGameShare::ReplicationDormancy a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::HashSet_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGameShare::AuthorityType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::Client::LittleGameShare::ReplicationNetMode, ::RPG::Client::LittleGameShare::ReplicationDormancy, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_PMEJOMNJIDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void LDKKPDECFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_LDKKPDECFKE_OFFSET))(this);
		}

		::AKHGJJKOKHO* NMGAJKCCJKO()
		{
			return ((::AKHGJJKOKHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_NMGAJKCCJKO_OFFSET))(this);
		}

		::System::Boolean PMGNJJCNEHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_PMGNJJCNEHG_OFFSET))(this);
		}

		::System::Void HDGGNOJBPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_HDGGNOJBPNL_OFFSET))(this, a1);
		}

		::System::Void ODICOKFGEKH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_ODICOKFGEKH_OFFSET))(this, a1);
		}

		::System::Void PHJOKPKBEMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_PHJOKPKBEMN_OFFSET))(this);
		}

		::PGMPJKHCHPH* EOIMBBFNKPP()
		{
			return ((::PGMPJKHCHPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_EOIMBBFNKPP_OFFSET))(this);
		}

		::System::Boolean PNNECJKJBOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_PNNECJKJBOA_OFFSET))(this);
		}

		::System::Void HJEJLOOHAMB(::OAJLLHGOPMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAJLLHGOPMH*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_HJEJLOOHAMB_OFFSET))(this, a1);
		}

		::System::Void LNHFBFEGHMN(::OAJLLHGOPMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAJLLHGOPMH*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_LNHFBFEGHMN_OFFSET))(this, a1);
		}

		::System::Void GFAKPCBFIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_GFAKPCBFIPB_OFFSET))(this);
		}

		::GBJHOMFKNDE* DICDJJOJKGF()
		{
			return ((::GBJHOMFKNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_DICDJJOJKGF_OFFSET))(this);
		}

		::System::Boolean KFKBPJDGJDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_KFKBPJDGJDK_OFFSET))(this);
		}

		::System::Void ABMDBKPJHAN(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_ABMDBKPJHAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DDBBEFAKEMD(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_DDBBEFAKEMD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HFPGOIJDJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_HFPGOIJDJCJ_OFFSET))(this);
		}

		::AKHGJJKOKHO* OKEPOBBKHII()
		{
			return ((::AKHGJJKOKHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_OKEPOBBKHII_OFFSET))(this);
		}

		::System::Boolean DBGHCLCPPMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_DBGHCLCPPMJ_OFFSET))(this);
		}

		::PGMPJKHCHPH* KEDCHDMNPEB()
		{
			return ((::PGMPJKHCHPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_KEDCHDMNPEB_OFFSET))(this);
		}

		::System::Boolean MACNKBNNGJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_MACNKBNNGJP_OFFSET))(this);
		}

		::EPLACBCPLGK* MFCLPHIHLPC()
		{
			return ((::EPLACBCPLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_MFCLPHIHLPC_OFFSET))(this);
		}

		::System::Boolean EJCFAFNDJNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_EJCFAFNDJNL_OFFSET))(this);
		}

		::System::Boolean OIEEPEOLLHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_OIEEPEOLLHF_OFFSET))(this);
		}

		::System::Void LMJECBNJPOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_LMJECBNJPOE_OFFSET))(this, a1);
		}

		::LHHKOJNJODO* FANCEOPOBDD()
		{
			return ((::LHHKOJNJODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_FANCEOPOBDD_OFFSET))(this);
		}

		::System::Boolean JCKPDKKLLCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_JCKPDKKLLCB_OFFSET))(this);
		}

		::GBJHOMFKNDE* MJHIFABJDHJ()
		{
			return ((::GBJHOMFKNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_MJHIFABJDHJ_OFFSET))(this);
		}

		::System::Boolean EPILPFHHAJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGNHFBMPAD_EPILPFHHAJJ_OFFSET))(this);
		}

	};

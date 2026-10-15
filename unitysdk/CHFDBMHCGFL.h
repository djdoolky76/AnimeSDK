#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHFDBMHCGFL_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BDMGLFNMFBD;
class KPCDEJGJHBK;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class NamedCurve; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::GameCore { class TeamTowersRobotConfig; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CHFDBMHCGFL_AEOMIBPLMND_OFFSET UNITYSDK_OFFSET(0xCC975D0)
#define CHFDBMHCGFL_ALJOPAPDDFB_OFFSET UNITYSDK_OFFSET(0xCC987B0)
#define CHFDBMHCGFL_BCNPBEMHDPP_OFFSET UNITYSDK_OFFSET(0xCC99C50)
#define CHFDBMHCGFL_BOBPMLPAGGG_OFFSET UNITYSDK_OFFSET(0xCC971B0)
#define CHFDBMHCGFL_BPIBBOPOOFE_OFFSET UNITYSDK_OFFSET(0xCC988D0)
#define CHFDBMHCGFL_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC9A0A0)
#define CHFDBMHCGFL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC962E0)
#define CHFDBMHCGFL_DBFHIJJCEJI_OFFSET UNITYSDK_OFFSET(0xCC97530)
#define CHFDBMHCGFL_DCOEPGFBLKK_OFFSET UNITYSDK_OFFSET(0xCC97130)
#define CHFDBMHCGFL_DHKHBGNLFAJ_OFFSET UNITYSDK_OFFSET(0xCC98FE0)
#define CHFDBMHCGFL_EDCFCLLBHDF_OFFSET UNITYSDK_OFFSET(0xCC96CB0)
#define CHFDBMHCGFL_EEPEIGJBCJH_OFFSET UNITYSDK_OFFSET(0xCC98730)
#define CHFDBMHCGFL_ENHICMBJAHC_OFFSET UNITYSDK_OFFSET(0xCC99160)
#define CHFDBMHCGFL_FFBOMCDNCIJ_OFFSET UNITYSDK_OFFSET(0xCC97880)
#define CHFDBMHCGFL_FFEEGCKOLFP_OFFSET UNITYSDK_OFFSET(0xCC99BB0)
#define CHFDBMHCGFL_FFPOKBLICIO_OFFSET UNITYSDK_OFFSET(0xCC993F0)
#define CHFDBMHCGFL_FKKKAHKGHPI_OFFSET UNITYSDK_OFFSET(0xCC992D0)
#define CHFDBMHCGFL_FMKFNPEGKBB_OFFSET UNITYSDK_OFFSET(0xCC99100)
#define CHFDBMHCGFL_FPEMHNLKKAH_OFFSET UNITYSDK_OFFSET(0xCC991C0)
#define CHFDBMHCGFL_FPGCLKLMLNK_OFFSET UNITYSDK_OFFSET(0xCC986A0)
#define CHFDBMHCGFL_GHLNJDHKFBC_OFFSET UNITYSDK_OFFSET(0xCC984A0)
#define CHFDBMHCGFL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCC98D50)
#define CHFDBMHCGFL_HGGLBLFIFGJ_OFFSET UNITYSDK_OFFSET(0xCC99840)
#define CHFDBMHCGFL_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xCC96480)
#define CHFDBMHCGFL_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xCC96640)
#define CHFDBMHCGFL_IINAJCONGJN_OFFSET UNITYSDK_OFFSET(0xCC990A0)
#define CHFDBMHCGFL_IKHKFCELFBH_OFFSET UNITYSDK_OFFSET(0xCC99500)
#define CHFDBMHCGFL_JIDILKKFOOM_OFFSET UNITYSDK_OFFSET(0xCC999F0)
#define CHFDBMHCGFL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCC97780)
#define CHFDBMHCGFL_JLFDLHLNHHB_OFFSET UNITYSDK_OFFSET(0xCC97900)
#define CHFDBMHCGFL_JOBDCIFLADE_OFFSET UNITYSDK_OFFSET(0xCC96F90)
#define CHFDBMHCGFL_KCNAPODOOFC_OFFSET UNITYSDK_OFFSET(0xCC97AB0)
#define CHFDBMHCGFL_KLEPDPGONBM_OFFSET UNITYSDK_OFFSET(0xCC997B0)
#define CHFDBMHCGFL_KMLDBAEJCIN_OFFSET UNITYSDK_OFFSET(0xCC9A010)
#define CHFDBMHCGFL_KOCKOEAFJCH_OFFSET UNITYSDK_OFFSET(0xCC97EE0)
#define CHFDBMHCGFL_LDCCKDIPICO_OFFSET UNITYSDK_OFFSET(0xCC96F10)
#define CHFDBMHCGFL_LNEJIJCBJIF_OFFSET UNITYSDK_OFFSET(0xCC97FE0)
#define CHFDBMHCGFL_LPKMDKNCHKL_OFFSET UNITYSDK_OFFSET(0xCC96260)
#define CHFDBMHCGFL_MNLFCOJAKLG_OFFSET UNITYSDK_OFFSET(0xCC98250)
#define CHFDBMHCGFL_NBKOHKKNBEF_OFFSET UNITYSDK_OFFSET(0xCC99D00)
#define CHFDBMHCGFL_NEFMELFNOHA_OFFSET UNITYSDK_OFFSET(0xCC96550)
#define CHFDBMHCGFL_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0xCC96540)
#define CHFDBMHCGFL_NMCIBMHJPGK_OFFSET UNITYSDK_OFFSET(0xCC970A0)
#define CHFDBMHCGFL_OCANGABHLCN_OFFSET UNITYSDK_OFFSET(0xCC96B40)
#define CHFDBMHCGFL_PDJKNFNGICK_OFFSET UNITYSDK_OFFSET(0xCC97D40)
#define CHFDBMHCGFL_PGOKKEHBAMK_OFFSET UNITYSDK_OFFSET(0xCC97F30)

	class CHFDBMHCGFL : public ::System::Object
	{
	public:
		::UnityEngine::Transform* OFNKMNBNPFB; // 0x10
		::UnityEngine::Transform* FONIIPOKFBC; // 0x18
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x20
		::RPG::Client::NamedCurve* OOFILFNOJPG; // 0x28
		::RPG::Client::NamedCurve* IHPJAMCDEFP; // 0x30
		::RPG::Client::MonoAnimationTrigger* GOLLNCJAPJC; // 0x38
		::UnityEngine::GameObject* PEDCCCBPFOM; // 0x40
		::UnityEngine::Transform* KNDPLAOCEKG; // 0x48
		::UnityEngine::GameObject* DMJGAFPPJCB; // 0x50
		::KPCDEJGJHBK* MPJPDNHHENK; // 0x58
		::UnityEngine::Transform* CEIICMEKDNE; // 0x60
		::UnityEngine::Animator* APPGGMLEPLN; // 0x68
		::System::Action* JEPGOJGADHI; // 0x70
		::UnityEngine::GameObject* PFFFHDNFGKB; // 0x78
		::RPG::Client::NamedCurve* DKBKFGAJDLJ; // 0x80
		::System::Single HHBAMKJNMDC; // 0x88
		::System::Single FNDLONENDNP; // 0x8C
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x90
		::System::Single KOEMDJNFMKI; // 0x9C
		::System::Single OJPNEIEIHEA; // 0xA0
		::UnityEngine::Vector3 CNFABNFAINN; // 0xA4
		::System::Single LMINLHJNCPH; // 0xB0
		::UnityEngine::Vector3 ADGHBKGNONA; // 0xB4
		::System::Single KPIGLDIFOAO; // 0xC0
		::System::Single BMOALGGJNCL; // 0xC4
		::System::Single NGDEHDOMDGG; // 0xC8
		::System::Single MJFIPPMLHEA; // 0xCC
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0xD0
		::System::Single HGAPOBNBKBJ; // 0xDC
		::CHFDBMHCGFL_State JJBOPOPCOCH; // 0xE0
		::System::Single FNICEFKGJAF; // 0xE4
		::System::Single NAGOFNDKGDB; // 0xE8
		::System::Boolean ACICALCCILD; // 0xEC
		::System::Boolean AMJCALKDCDH; // 0xED
		::System::Byte _padding0[0x2];
		::System::Single DMBFACIJPKN; // 0xF0
		::System::Single AADPCFNNGNM; // 0xF4
		::UnityEngine::Vector3 BMMLIDOCCKB; // 0xF8
		::System::Single BPHIMOFKKGD; // 0x104
		::System::Single FJDBLCBNNHF; // 0x108
		::System::Single JOPEIKFEFLJ; // 0x10C
		::UnityEngine::Vector3 MHINNKLHMFJ; // 0x110
		::UnityEngine::Vector3 KODEKFOLOAC; // 0x11C
		::System::Single EEEOMMJEGCC; // 0x128
		::UnityEngine::Vector3 ENMOJPCNPCO; // 0x12C
		::System::Single PELGNOEPMEP; // 0x138
		::System::Single LMMGCJKEHOF; // 0x13C
		static ::System::Int32* StaticGet_DKJPHIKLIKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHFDBMHCGFL")->GetStaticField(0x8420);
		}

		static ::System::Int32* StaticGet_IFPLMHIOAPM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHFDBMHCGFL")->GetStaticField(0x8424);
		}

		static ::System::Int32* StaticGet_OFEPLACCJPF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHFDBMHCGFL")->GetStaticField(0x8428);
		}

		static ::System::Int32* StaticGet_DJJNGGBOPPM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHFDBMHCGFL")->GetStaticField(0x842C);
		}

		static ::System::Int32* StaticGet_AOLONKKFAGP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHFDBMHCGFL")->GetStaticField(0x8430);
		}

		// static const ::System::String* CNEFNNNIHDF; // 0x0
		// static const ::System::Object GDPICIAKMLF; // 0x0
		// static const ::System::String* PGOLNMDJIMO; // 0x0
		// static const ::System::String* BAPLKKPKLCB; // 0x0
		// static const ::System::Object HCEPNMIDKKH; // 0x0
		// static const ::System::Object JPNBMNMPFBB; // 0x0
		// static const ::System::String* LHBENJIEIBO; // 0x0
		// static const ::System::String* KBEFDBCMHLN; // 0x0
		// static const ::System::String* OBBBHGDHBLJ; // 0x0
		// static const ::System::String* CACDLKPPNPN; // 0x0
		// static const ::System::Object PNCHJDLKHPJ; // 0x0
		::System::Void _ctor(::System::Boolean a1, ::RPG::GameCore::TeamTowersRobotConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::TeamTowersRobotConfig*))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFDBMHCGFL_CCTOR_OFFSET))();
		}

		::BDMGLFNMFBD* LPKMDKNCHKL()
		{
			return ((::BDMGLFNMFBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_LPKMDKNCHKL_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_HHMFILFAMNA_OFFSET))(this);
		}

		::CHFDBMHCGFL_State NJDMJODMLFF()
		{
			return ((::CHFDBMHCGFL_State(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_NJDMJODMLFF_OFFSET))(this);
		}

		::System::Void NEFMELFNOHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_NEFMELFNOHA_OFFSET))(this, a1);
		}

		::System::Void HKEPJLDBGIG(::System::String* a1, ::UnityEngine::Transform* a2, ::KPCDEJGJHBK* a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::KPCDEJGJHBK*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_HKEPJLDBGIG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KOCKOEAFJCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_KOCKOEAFJCH_OFFSET))(this);
		}

		::System::Void PGOKKEHBAMK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_PGOKKEHBAMK_OFFSET))(this, a1, a2);
		}

		::System::Void MNLFCOJAKLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_MNLFCOJAKLG_OFFSET))(this);
		}

		::System::Void ALJOPAPDDFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_ALJOPAPDDFB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DBFHIJJCEJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_DBFHIJJCEJI_OFFSET))(this);
		}

		::System::Nullable* FPEMHNLKKAH()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FPEMHNLKKAH_OFFSET))(this);
		}

		::System::Void AEOMIBPLMND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_AEOMIBPLMND_OFFSET))(this);
		}

		::System::Void LNEJIJCBJIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_LNEJIJCBJIF_OFFSET))(this);
		}

		::System::Void FFBOMCDNCIJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FFBOMCDNCIJ_OFFSET))(this, a1);
		}

		::System::Void BPIBBOPOOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_BPIBBOPOOFE_OFFSET))(this);
		}

		::System::Void JLFDLHLNHHB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_JLFDLHLNHHB_OFFSET))(this, a1);
		}

		::System::Void IKHKFCELFBH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_IKHKFCELFBH_OFFSET))(this, a1);
		}

		::System::Void HGGLBLFIFGJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_HGGLBLFIFGJ_OFFSET))(this, a1);
		}

		::System::Single JIDILKKFOOM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_JIDILKKFOOM_OFFSET))(this);
		}

		::System::Void FKKKAHKGHPI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FKKKAHKGHPI_OFFSET))(this, a1);
		}

		static ::System::Single FFEEGCKOLFP(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FFEEGCKOLFP_OFFSET))(a1);
		}

		::System::Void EDCFCLLBHDF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_EDCFCLLBHDF_OFFSET))(this, a1);
		}

		::System::Void LDCCKDIPICO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_LDCCKDIPICO_OFFSET))(this);
		}

		::System::Void ENHICMBJAHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_ENHICMBJAHC_OFFSET))(this);
		}

		::System::Void JOBDCIFLADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_JOBDCIFLADE_OFFSET))(this);
		}

		::System::Void DHKHBGNLFAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_DHKHBGNLFAJ_OFFSET))(this);
		}

		::System::Void BCNPBEMHDPP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_BCNPBEMHDPP_OFFSET))(this, a1);
		}

		::System::Void NBKOHKKNBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_NBKOHKKNBEF_OFFSET))(this);
		}

		::System::Void KCNAPODOOFC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_KCNAPODOOFC_OFFSET))(this, a1);
		}

		::System::Single KMLDBAEJCIN(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_KMLDBAEJCIN_OFFSET))(this, a1);
		}

		::System::Void GHLNJDHKFBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_GHLNJDHKFBC_OFFSET))(this);
		}

		::System::Void OCANGABHLCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_OCANGABHLCN_OFFSET))(this);
		}

		::System::Void EEPEIGJBCJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_EEPEIGJBCJH_OFFSET))(this, a1);
		}

		::System::Void FPGCLKLMLNK(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FPGCLKLMLNK_OFFSET))(this, a1, a2);
		}

		::System::Void NMCIBMHJPGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_NMCIBMHJPGK_OFFSET))(this);
		}

		::System::Void IINAJCONGJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_IINAJCONGJN_OFFSET))(this);
		}

		::System::Single FFPOKBLICIO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FFPOKBLICIO_OFFSET))(this, a1, a2);
		}

		::System::Single KLEPDPGONBM(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_KLEPDPGONBM_OFFSET))(this, a1);
		}

		::System::Void BOBPMLPAGGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_BOBPMLPAGGG_OFFSET))(this);
		}

		::System::Void DCOEPGFBLKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_DCOEPGFBLKK_OFFSET))(this);
		}

		::System::Void FMKFNPEGKBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_FMKFNPEGKBB_OFFSET))(this);
		}

		::System::Void PDJKNFNGICK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFDBMHCGFL_PDJKNFNGICK_OFFSET))(this, a1);
		}

	};

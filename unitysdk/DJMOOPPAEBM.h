#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BANDDFEHONE;
class CAOEEDDAPIK_NNBFMHKHMKO;
class DJMOOPPAEBM;
class GEDMHFPPBHN;
class KEMIFCIOGPE;
class KLLJEFNNCBM;
class LCJPDOOLBEC;
class MADHNHEMBOJ;
class OEENEGJBMCO;
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJMOOPPAEBM_ALKAFBCALDK_OFFSET UNITYSDK_OFFSET(0xF23BAC0)
#define DJMOOPPAEBM_BAKJDIHLDKG_OFFSET UNITYSDK_OFFSET(0xF23B4D0)
#define DJMOOPPAEBM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF23B1C0)
#define DJMOOPPAEBM_CTOR_OFFSET UNITYSDK_OFFSET(0xF23B3C0)
#define DJMOOPPAEBM_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0xF23BBD0)
#define DJMOOPPAEBM_GBPCICHOBNO_OFFSET UNITYSDK_OFFSET(0xF23B580)
#define DJMOOPPAEBM_GET_ACTIONBARDATA_OFFSET UNITYSDK_OFFSET(0xF23BBB0)
#define DJMOOPPAEBM_GET_ELATIONITEMACTIONDATA_OFFSET UNITYSDK_OFFSET(0xF23BCF0)
#define DJMOOPPAEBM_GET_ELATIONITEMAPPENDDATA_OFFSET UNITYSDK_OFFSET(0xF23BCD0)
#define DJMOOPPAEBM_GET_UISTYLE_OFFSET UNITYSDK_OFFSET(0xF23BB90)
#define DJMOOPPAEBM_GKFLIJHOJOJ_OFFSET UNITYSDK_OFFSET(0xF23B970)
#define DJMOOPPAEBM_HDIIEAELOPP_OFFSET UNITYSDK_OFFSET(0xF23B9C0)
#define DJMOOPPAEBM_HJECKPDMPIM_OFFSET UNITYSDK_OFFSET(0xF23BA30)
#define DJMOOPPAEBM_LCJJKAKOPCC_OFFSET UNITYSDK_OFFSET(0xF23B520)
#define DJMOOPPAEBM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xF23B3D0)
#define DJMOOPPAEBM_PCJHOHNIHAJ_OFFSET UNITYSDK_OFFSET(0xF23BC50)
#define DJMOOPPAEBM_PGNIKFCMMOB_OFFSET UNITYSDK_OFFSET(0xF23B5E0)
#define DJMOOPPAEBM_PIALNCOIPKG_OFFSET UNITYSDK_OFFSET(0xF23B470)
#define DJMOOPPAEBM_SET_ACTIONBARDATA_OFFSET UNITYSDK_OFFSET(0xF23BBC0)
#define DJMOOPPAEBM_SET_ELATIONITEMACTIONDATA_OFFSET UNITYSDK_OFFSET(0xF23BD00)
#define DJMOOPPAEBM_SET_ELATIONITEMAPPENDDATA_OFFSET UNITYSDK_OFFSET(0xF23BCE0)
#define DJMOOPPAEBM_SET_UISTYLE_OFFSET UNITYSDK_OFFSET(0xF23BBA0)

inline static constexpr unsigned int DJMOOPPAEBM_TypeDefinitionIndex = 72183;

	class DJMOOPPAEBM : public ::System::Object
	{
	public:
		::KLLJEFNNCBM* _ElationItemActionData_k__BackingField; // 0x10
		::LCJPDOOLBEC* MIGLENPAECA; // 0x18
		::OEENEGJBMCO* IPKDEJMHHJG; // 0x20
		::KEMIFCIOGPE* _ElationItemAppendData_k__BackingField; // 0x28
		::MADHNHEMBOJ* _ActionBarData_k__BackingField; // 0x30
		::GJPBCNIIEOB_Mode FCGFFAJIBKA; // 0x38
		::RPG::Client::ActionBarItemUIStyle _UIStyle_k__BackingField; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_CTOR_OFFSET))(this);
		}

		static ::DJMOOPPAEBM* BPLPBPMEODA(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::DJMOOPPAEBM*(*)(::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PAGKOAEOLKA(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BAKJDIHLDKG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_BAKJDIHLDKG_OFFSET))(this, a1);
		}

		::System::Void PIALNCOIPKG(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_PIALNCOIPKG_OFFSET))(this, a1);
		}

		::System::Void LCJJKAKOPCC(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_LCJJKAKOPCC_OFFSET))(this, a1);
		}

		::System::Boolean GBPCICHOBNO(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_GBPCICHOBNO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 PGNIKFCMMOB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_PGNIKFCMMOB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BANDDFEHONE*>* HDIIEAELOPP()
		{
			return ((::System::Collections::Generic::List_1<::BANDDFEHONE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_HDIIEAELOPP_OFFSET))(this);
		}

		::System::Boolean HJECKPDMPIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_HJECKPDMPIM_OFFSET))(this);
		}

		::GEDMHFPPBHN* ALKAFBCALDK()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_ALKAFBCALDK_OFFSET))(this);
		}

		::RPG::Client::ActionBarItemUIStyle get_UIStyle()
		{
			return ((::RPG::Client::ActionBarItemUIStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_GET_UISTYLE_OFFSET))(this);
		}

		::System::Void set_UIStyle(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_SET_UISTYLE_OFFSET))(this, a1);
		}

		::MADHNHEMBOJ* get_ActionBarData()
		{
			return ((::MADHNHEMBOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_GET_ACTIONBARDATA_OFFSET))(this);
		}

		::System::Void set_ActionBarData(::MADHNHEMBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MADHNHEMBOJ*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_SET_ACTIONBARDATA_OFFSET))(this, a1);
		}

		::System::Int32 EMLGPKHMCAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_EMLGPKHMCAA_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityActionDelayChanged* PCJHOHNIHAJ()
		{
			return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_PCJHOHNIHAJ_OFFSET))(this);
		}

		::KEMIFCIOGPE* get_ElationItemAppendData()
		{
			return ((::KEMIFCIOGPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_GET_ELATIONITEMAPPENDDATA_OFFSET))(this);
		}

		::System::Void set_ElationItemAppendData(::KEMIFCIOGPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMIFCIOGPE*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_SET_ELATIONITEMAPPENDDATA_OFFSET))(this, a1);
		}

		::KLLJEFNNCBM* get_ElationItemActionData()
		{
			return ((::KLLJEFNNCBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_GET_ELATIONITEMACTIONDATA_OFFSET))(this);
		}

		::System::Void set_ElationItemActionData(::KLLJEFNNCBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLLJEFNNCBM*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_SET_ELATIONITEMACTIONDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* GKFLIJHOJOJ()
		{
			return ((::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_GKFLIJHOJOJ_OFFSET))(this);
		}

	};

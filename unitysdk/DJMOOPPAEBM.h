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

#define DJMOOPPAEBM_ALKAFBCALDK_OFFSET UNITYSDK_OFFSET(0xFFC2410)
#define DJMOOPPAEBM_BAKJDIHLDKG_OFFSET UNITYSDK_OFFSET(0xFFC1E20)
#define DJMOOPPAEBM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xFFC1A20)
#define DJMOOPPAEBM_CTOR_OFFSET UNITYSDK_OFFSET(0xFFC1C40)
#define DJMOOPPAEBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFC1C50)
#define DJMOOPPAEBM_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0xFFC2520)
#define DJMOOPPAEBM_GBPCICHOBNO_OFFSET UNITYSDK_OFFSET(0xFFC1ED0)
#define DJMOOPPAEBM_GET_ACTIONBARDATA_OFFSET UNITYSDK_OFFSET(0xFFC2500)
#define DJMOOPPAEBM_GET_ELATIONITEMACTIONDATA_OFFSET UNITYSDK_OFFSET(0xFFC2640)
#define DJMOOPPAEBM_GET_ELATIONITEMAPPENDDATA_OFFSET UNITYSDK_OFFSET(0xFFC2620)
#define DJMOOPPAEBM_GET_UISTYLE_OFFSET UNITYSDK_OFFSET(0xFFC24E0)
#define DJMOOPPAEBM_GKFLIJHOJOJ_OFFSET UNITYSDK_OFFSET(0xFFC22C0)
#define DJMOOPPAEBM_HDIIEAELOPP_OFFSET UNITYSDK_OFFSET(0xFFC2310)
#define DJMOOPPAEBM_HJECKPDMPIM_OFFSET UNITYSDK_OFFSET(0xFFC2380)
#define DJMOOPPAEBM_LCJJKAKOPCC_OFFSET UNITYSDK_OFFSET(0xFFC1E70)
#define DJMOOPPAEBM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xFFC1D20)
#define DJMOOPPAEBM_PCJHOHNIHAJ_OFFSET UNITYSDK_OFFSET(0xFFC25A0)
#define DJMOOPPAEBM_PGNIKFCMMOB_OFFSET UNITYSDK_OFFSET(0xFFC1F30)
#define DJMOOPPAEBM_PIALNCOIPKG_OFFSET UNITYSDK_OFFSET(0xFFC1DC0)
#define DJMOOPPAEBM_SET_ACTIONBARDATA_OFFSET UNITYSDK_OFFSET(0xFFC2510)
#define DJMOOPPAEBM_SET_ELATIONITEMACTIONDATA_OFFSET UNITYSDK_OFFSET(0xFFC2650)
#define DJMOOPPAEBM_SET_ELATIONITEMAPPENDDATA_OFFSET UNITYSDK_OFFSET(0xFFC2630)
#define DJMOOPPAEBM_SET_UISTYLE_OFFSET UNITYSDK_OFFSET(0xFFC24F0)

inline static constexpr unsigned int DJMOOPPAEBM_TypeDefinitionIndex = 74246;

	class DJMOOPPAEBM : public ::System::Object
	{
	public:
		::OEENEGJBMCO* IPKDEJMHHJG; // 0x10
		::KLLJEFNNCBM* _ElationItemActionData_k__BackingField; // 0x18
		::LCJPDOOLBEC* MIGLENPAECA; // 0x20
		::KEMIFCIOGPE* _ElationItemAppendData_k__BackingField; // 0x28
		::MADHNHEMBOJ* _ActionBarData_k__BackingField; // 0x30
		::RPG::Client::ActionBarItemUIStyle _UIStyle_k__BackingField; // 0x38
		::GJPBCNIIEOB_Mode FCGFFAJIBKA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_CTOR_OFFSET))(this);
		}

		static ::DJMOOPPAEBM* BPLPBPMEODA(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::DJMOOPPAEBM*(*)(::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMOOPPAEBM_DISPOSE_OFFSET))(this);
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

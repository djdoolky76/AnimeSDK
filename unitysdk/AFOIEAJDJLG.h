#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavAreaType.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABKHJBACHOO.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFOIEAJDJLG;
class FFCGHKGDAJF;
class GIJPBMMNJKO;
class IFGCDEEKCCD;
class JHGAJMAOPJE;
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFOIEAJDJLG_AGFNFBIAMNB_OFFSET UNITYSDK_OFFSET(0xCF13800)
#define AFOIEAJDJLG_AMAFBHFBIHF_OFFSET UNITYSDK_OFFSET(0xCF136B0)
#define AFOIEAJDJLG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF13960)
#define AFOIEAJDJLG_CNKHNADHGFO_OFFSET UNITYSDK_OFFSET(0xCF14340)
#define AFOIEAJDJLG_CPCDCCGOCEO_OFFSET UNITYSDK_OFFSET(0xCF13710)
#define AFOIEAJDJLG_CTOR_OFFSET UNITYSDK_OFFSET(0xCF13A50)
#define AFOIEAJDJLG_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xCF13C60)
#define AFOIEAJDJLG_ELPLMDKMAHK_OFFSET UNITYSDK_OFFSET(0xCF15B60)
#define AFOIEAJDJLG_EOCLCLIJJPA_OFFSET UNITYSDK_OFFSET(0xCF13CB0)
#define AFOIEAJDJLG_GANGIOIMOIH_OFFSET UNITYSDK_OFFSET(0xCF14970)
#define AFOIEAJDJLG_GET_ID_OFFSET UNITYSDK_OFFSET(0xCF13860)
#define AFOIEAJDJLG_GFGENIOPCOB_OFFSET UNITYSDK_OFFSET(0xCF158F0)
#define AFOIEAJDJLG_GFPHIJLLILO_OFFSET UNITYSDK_OFFSET(0xCF142E0)
#define AFOIEAJDJLG_GNLBBDCLEAI_OFFSET UNITYSDK_OFFSET(0xCF15200)
#define AFOIEAJDJLG_HFPPFEHPGOH_OFFSET UNITYSDK_OFFSET(0xCF143D0)
#define AFOIEAJDJLG_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xCF138C0)
#define AFOIEAJDJLG_IFLBALDDCEE_OFFSET UNITYSDK_OFFSET(0xCF14200)
#define AFOIEAJDJLG_IIFLIOKBGKO_OFFSET UNITYSDK_OFFSET(0xCF15020)
#define AFOIEAJDJLG_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xCF13870)
#define AFOIEAJDJLG_LHFPDLIIFAJ_OFFSET UNITYSDK_OFFSET(0xCF14180)
#define AFOIEAJDJLG_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0xCF13910)
#define AFOIEAJDJLG_PIHIIEAJLDE_OFFSET UNITYSDK_OFFSET(0xCF14E30)

inline static constexpr unsigned int AFOIEAJDJLG_TypeDefinitionIndex = 74546;

	class AFOIEAJDJLG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* ILDKEOAMPAO; // 0x10
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* CPEMNJMKBEL; // 0x20
		::IFGCDEEKCCD* JCPJNKBJPBB; // 0x28
		::JHGAJMAOPJE* ILDMNAIPCGK; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* HKNKKPADMHB; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::IFGCDEEKCCD* a2, ::JHGAJMAOPJE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::IFGCDEEKCCD*, ::JHGAJMAOPJE*))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single AMAFBHFBIHF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_AMAFBHFBIHF_OFFSET))(this);
		}

		::System::Single CPCDCCGOCEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_CPCDCCGOCEO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameNavConnectInfo*>* AGFNFBIAMNB()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameNavConnectInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_AGFNFBIAMNB_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavAreaType JBIOGKPHKKC()
		{
			return ((::RPG::Client::NavMap::NavAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::UInt32 OEIIDHFBKHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_OEIIDHFBKHG_OFFSET))(this);
		}

		static ::AFOIEAJDJLG* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::IFGCDEEKCCD* a2, ::JHGAJMAOPJE* a3)
		{
			return ((::AFOIEAJDJLG*(*)(::FFCGHKGDAJF*, ::IFGCDEEKCCD*, ::JHGAJMAOPJE*))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* LHFPDLIIFAJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_LHFPDLIIFAJ_OFFSET))(this, a1);
		}

		::System::Single IFLBALDDCEE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_IFLBALDDCEE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GFPHIJLLILO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_GFPHIJLLILO_OFFSET))(this, a1);
		}

		::System::Void EOCLCLIJJPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_EOCLCLIJJPA_OFFSET))(this);
		}

		::System::Void CNKHNADHGFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_CNKHNADHGFO_OFFSET))(this, a1);
		}

		::System::Void HFPPFEHPGOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_HFPPFEHPGOH_OFFSET))(this, a1);
		}

		::System::Void GANGIOIMOIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_GANGIOIMOIH_OFFSET))(this);
		}

		::System::UInt32 PIHIIEAJLDE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_PIHIIEAJLDE_OFFSET))(this, a1);
		}

		::System::Void GNLBBDCLEAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_GNLBBDCLEAI_OFFSET))(this);
		}

		::GIJPBMMNJKO* GFGENIOPCOB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_GFGENIOPCOB_OFFSET))(this, a1, a2);
		}

		::System::Void ELPLMDKMAHK(::GIJPBMMNJKO* a1, ::GIJPBMMNJKO* a2, ::RPG::GameCore::LittleGameNavConnectInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GIJPBMMNJKO*, ::GIJPBMMNJKO*, ::RPG::GameCore::LittleGameNavConnectInfo*))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_ELPLMDKMAHK_OFFSET))(this, a1, a2, a3);
		}

		::GIJPBMMNJKO* IIFLIOKBGKO(::ABKHJBACHOO a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + AFOIEAJDJLG_IIFLIOKBGKO_OFFSET))(this, a1);
		}

	};

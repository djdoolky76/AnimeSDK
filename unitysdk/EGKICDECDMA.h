#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class EGKICDECDMA;
class EGKICDECDMA_BGBONPKMMDG;
class GGJFAFONDHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGKICDECDMA_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x14519D20)
#define EGKICDECDMA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x14519BA0)
#define EGKICDECDMA_BCIAKFBMDOA_OFFSET UNITYSDK_OFFSET(0x1451A5C0)
#define EGKICDECDMA_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x1451A880)
#define EGKICDECDMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1451A940)
#define EGKICDECDMA_CHADEPPHLCL_OFFSET UNITYSDK_OFFSET(0x1451A120)
#define EGKICDECDMA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1451A8D0)
#define EGKICDECDMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1451A200)
#define EGKICDECDMA_DAKKPGAAAAA_OFFSET UNITYSDK_OFFSET(0x1451A610)
#define EGKICDECDMA_EENBIGGIEAM_OFFSET UNITYSDK_OFFSET(0x14519FB0)
#define EGKICDECDMA_HAIGNFCCNIK_OFFSET UNITYSDK_OFFSET(0x1451A1C0)
#define EGKICDECDMA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1451A2C0)
#define EGKICDECDMA_KNKPNFLMPOF_OFFSET UNITYSDK_OFFSET(0x1451A4D0)
#define EGKICDECDMA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1451A260)
#define EGKICDECDMA_MENOFPHKCNC_OFFSET UNITYSDK_OFFSET(0x1451A3C0)
#define EGKICDECDMA_OGJNBONLACD_OFFSET UNITYSDK_OFFSET(0x14519FC0)
#define EGKICDECDMA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x14519F60)
#define EGKICDECDMA_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x14519F50)

inline static constexpr unsigned int EGKICDECDMA_TypeDefinitionIndex = 49453;

	class EGKICDECDMA : public ::System::Object
	{
	public:
		::GGJFAFONDHN* MEKBJFCFFED; // 0x10
		::GGJFAFONDHN* DMIACAELLDA; // 0x18
		::RPG::GameCore::EnviromentControlPriority MGAKPKNIFKH; // 0x20
		static ::System::Collections::Generic::List_1<::GGJFAFONDHN*>** StaticGet_EPGKKDGAELG()
		{
			return (::System::Collections::Generic::List_1<::GGJFAFONDHN*>**)UnitySDK::FromName("", "EGKICDECDMA")->GetStaticField(0x2F50);
		}

		static ::EGKICDECDMA_BGBONPKMMDG** StaticGet_MFPNICMCKJG()
		{
			return (::EGKICDECDMA_BGBONPKMMDG**)UnitySDK::FromName("", "EGKICDECDMA")->GetStaticField(0x2F58);
		}

		::System::Void _ctor(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGKICDECDMA_CCTOR_OFFSET))();
		}

		static ::EGKICDECDMA* ACMKLFOMPFC(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::EGKICDECDMA*(*)(::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_ABKBOGIGAEH_OFFSET))(this);
		}

		::RPG::GameCore::EnviromentControlPriority PLNCKLJOJME()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_PJPFIHFAHGO_OFFSET))(this);
		}

		::GGJFAFONDHN* EENBIGGIEAM()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_EENBIGGIEAM_OFFSET))(this);
		}

		static ::System::Void OGJNBONLACD(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_OGJNBONLACD_OFFSET))(a1);
		}

		static ::System::Boolean CHADEPPHLCL(::GGJFAFONDHN* a1)
		{
			return ((::System::Boolean(*)(::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_CHADEPPHLCL_OFFSET))(a1);
		}

		::System::Boolean HAIGNFCCNIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_HAIGNFCCNIK_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_KHGIKBFDLFB_OFFSET))(this, a1, a2);
		}

		::System::Void MENOFPHKCNC(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_MENOFPHKCNC_OFFSET))(this, a1);
		}

		::System::Void KNKPNFLMPOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_KNKPNFLMPOF_OFFSET))(this);
		}

		::System::Boolean BCIAKFBMDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_BCIAKFBMDOA_OFFSET))(this);
		}

		static ::System::Void DAKKPGAAAAA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGKICDECDMA_DAKKPGAAAAA_OFFSET))();
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKICDECDMA_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Int32 CompareTo(::EGKICDECDMA* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EGKICDECDMA*))((::PBYTE)hIl2Cpp + EGKICDECDMA_COMPARETO_OFFSET))(this, a1);
		}

	};

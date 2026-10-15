#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IGCLGKCKACE.h"
class MKECAGMHDAC;
namespace CriWare { class CriWareInitializer; }
namespace CriWare::CriMana { class Player; }
namespace RPG::Client { class UIController; }
namespace System { class String; }

#define GPNMGGINMFC_BIEMPBLKCNB_OFFSET UNITYSDK_OFFSET(0x15B63930)
#define GPNMGGINMFC_BJGIPJPOOJI_OFFSET UNITYSDK_OFFSET(0x15B62780)
#define GPNMGGINMFC_BKJDOMKGMKI_OFFSET UNITYSDK_OFFSET(0x15B63C90)
#define GPNMGGINMFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B64480)
#define GPNMGGINMFC_CKGLLDGNNCE_OFFSET UNITYSDK_OFFSET(0x15B63820)
#define GPNMGGINMFC_CMGKMCJFGHA_OFFSET UNITYSDK_OFFSET(0x15B62AD0)
#define GPNMGGINMFC_DJIDPEEDHKA_OFFSET UNITYSDK_OFFSET(0x15B62830)
#define GPNMGGINMFC_EAMDMJEIPBG_OFFSET UNITYSDK_OFFSET(0x15B636D0)
#define GPNMGGINMFC_EPAFFAOKLEP_OFFSET UNITYSDK_OFFSET(0x15B62F50)
#define GPNMGGINMFC_GAEDHJBNFHH_OFFSET UNITYSDK_OFFSET(0x15B643F0)
#define GPNMGGINMFC_GEONPPNLJLF_OFFSET UNITYSDK_OFFSET(0x15B62DB0)
#define GPNMGGINMFC_GKKBHDKOHLD_OFFSET UNITYSDK_OFFSET(0x15B64360)
#define GPNMGGINMFC_IEPELDLBCBP_OFFSET UNITYSDK_OFFSET(0x15B62C40)
#define GPNMGGINMFC_IKAPLJKJEEO_OFFSET UNITYSDK_OFFSET(0x15B63A40)
#define GPNMGGINMFC_JNKHBAEJIAP_OFFSET UNITYSDK_OFFSET(0x15B63750)
#define GPNMGGINMFC_KJEMEBHEJHB_OFFSET UNITYSDK_OFFSET(0x15B631A0)
#define GPNMGGINMFC_KJGKGNMEIEI_OFFSET UNITYSDK_OFFSET(0x15B625F0)
#define GPNMGGINMFC_MIPHCLBHKOA_OFFSET UNITYSDK_OFFSET(0x15B62990)
#define GPNMGGINMFC_MJENINJAGPK_OFFSET UNITYSDK_OFFSET(0x15B640C0)
#define GPNMGGINMFC_NAJHMGIFGPI_OFFSET UNITYSDK_OFFSET(0x15B63D40)
#define GPNMGGINMFC_NICLDLFFLMJ_OFFSET UNITYSDK_OFFSET(0x15B64280)
#define GPNMGGINMFC_OGHNIKCIDMG_OFFSET UNITYSDK_OFFSET(0x15B63AF0)

inline static constexpr unsigned int GPNMGGINMFC_TypeDefinitionIndex = 73224;

	class GPNMGGINMFC : public ::System::Object
	{
	public:
		static ::MKECAGMHDAC** StaticGet_MHKPACKLKCD()
		{
			return (::MKECAGMHDAC**)UnitySDK::FromName("", "GPNMGGINMFC")->GetStaticField(0x6D820);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_LIHFBAEICJD()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "GPNMGGINMFC")->GetStaticField(0x6D828);
		}

		static ::System::Boolean* StaticGet_APDBDHBFCHG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPNMGGINMFC")->GetStaticField(0x15190);
		}

		static ::System::Boolean* StaticGet_ANGDKGICMPB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPNMGGINMFC")->GetStaticField(0x15191);
		}

		// static const ::System::String* DGGGFLCFNML; // 0x0
		// static const ::System::String* AMHEBMFJIMN; // 0x0
		// static const ::System::String* FOIFBIHEKOD; // 0x0
		// static const ::System::String* DIIFOPPGCFH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_CCTOR_OFFSET))();
		}

		static ::System::Boolean KJGKGNMEIEI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_KJGKGNMEIEI_OFFSET))();
		}

		static ::System::String* BJGIPJPOOJI(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPNMGGINMFC_BJGIPJPOOJI_OFFSET))(a1, a2);
		}

		static ::System::String* DJIDPEEDHKA(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPNMGGINMFC_DJIDPEEDHKA_OFFSET))(a1, a2);
		}

		static ::System::Int32 MIPHCLBHKOA()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_MIPHCLBHKOA_OFFSET))();
		}

		static ::System::Single CMGKMCJFGHA()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_CMGKMCJFGHA_OFFSET))();
		}

		static ::System::Void IEPELDLBCBP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_IEPELDLBCBP_OFFSET))();
		}

		static ::RPG::Client::UIController* GEONPPNLJLF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::String* a6)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + GPNMGGINMFC_GEONPPNLJLF_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void EPAFFAOKLEP(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GPNMGGINMFC_EPAFFAOKLEP_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 KJEMEBHEJHB(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GPNMGGINMFC_KJEMEBHEJHB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt64 EAMDMJEIPBG()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_EAMDMJEIPBG_OFFSET))();
		}

		static ::System::Void JNKHBAEJIAP(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GPNMGGINMFC_JNKHBAEJIAP_OFFSET))(a1);
		}

		static ::System::Void CKGLLDGNNCE(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + GPNMGGINMFC_CKGLLDGNNCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BIEMPBLKCNB(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + GPNMGGINMFC_BIEMPBLKCNB_OFFSET))(a1, a2, a3, a4);
		}

		static ::IGCLGKCKACE IKAPLJKJEEO(::System::UInt32 a1)
		{
			return ((::IGCLGKCKACE(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GPNMGGINMFC_IKAPLJKJEEO_OFFSET))(a1);
		}

		static ::IGCLGKCKACE OGHNIKCIDMG(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::IGCLGKCKACE(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + GPNMGGINMFC_OGHNIKCIDMG_OFFSET))(a1, a2);
		}

		static ::IGCLGKCKACE BKJDOMKGMKI(::System::UInt32 a1)
		{
			return ((::IGCLGKCKACE(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GPNMGGINMFC_BKJDOMKGMKI_OFFSET))(a1);
		}

		static ::IGCLGKCKACE NAJHMGIFGPI(::System::String* a1)
		{
			return ((::IGCLGKCKACE(*)(::System::String*))((::PBYTE)hIl2Cpp + GPNMGGINMFC_NAJHMGIFGPI_OFFSET))(a1);
		}

		static ::IGCLGKCKACE MJENINJAGPK(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::IGCLGKCKACE(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + GPNMGGINMFC_MJENINJAGPK_OFFSET))(a1, a2);
		}

		static ::System::Void NICLDLFFLMJ(::CriWare::CriMana::Player* a1, ::IGCLGKCKACE a2)
		{
			return ((::System::Void(*)(::CriWare::CriMana::Player*, ::IGCLGKCKACE))((::PBYTE)hIl2Cpp + GPNMGGINMFC_NICLDLFFLMJ_OFFSET))(a1, a2);
		}

		static ::System::Void GKKBHDKOHLD(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Void(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + GPNMGGINMFC_GKKBHDKOHLD_OFFSET))(a1);
		}

		static ::CriWare::CriWareInitializer* GAEDHJBNFHH()
		{
			return ((::CriWare::CriWareInitializer*(*)())((::PBYTE)hIl2Cpp + GPNMGGINMFC_GAEDHJBNFHH_OFFSET))();
		}

	};

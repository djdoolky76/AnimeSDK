#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/AICarRuntimeState.h"
class BJIACBNKCCJ;
class CAJHMHHIJEG;
class GHMGGIHEHJE;
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashGameModifier_TutorialLevelAI; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAJHMHHIJEG_BPEHGJPMCAH_OFFSET UNITYSDK_OFFSET(0xC485620)
#define CAJHMHHIJEG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4875F0)
#define CAJHMHHIJEG_CDDMEFMGNHD_OFFSET UNITYSDK_OFFSET(0xC484D10)
#define CAJHMHHIJEG_CGOKCFKEPDJ_OFFSET UNITYSDK_OFFSET(0xC486AC0)
#define CAJHMHHIJEG_CPGBPJJPFJH_OFFSET UNITYSDK_OFFSET(0xC486A30)
#define CAJHMHHIJEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC484B80)
#define CAJHMHHIJEG_DILNENFCIJL_OFFSET UNITYSDK_OFFSET(0xC486C50)
#define CAJHMHHIJEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC484B90)
#define CAJHMHHIJEG_EDOFCDEIMJD_OFFSET UNITYSDK_OFFSET(0xC486D90)
#define CAJHMHHIJEG_FJJCOEFJPBK_OFFSET UNITYSDK_OFFSET(0xC485190)
#define CAJHMHHIJEG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC487300)
#define CAJHMHHIJEG_GLANHHJHNFF_1_OFFSET UNITYSDK_OFFSET(0xC486480)
#define CAJHMHHIJEG_GLANHHJHNFF_OFFSET UNITYSDK_OFFSET(0xC484F70)
#define CAJHMHHIJEG_HLBECOIKFNI_OFFSET UNITYSDK_OFFSET(0xC486140)
#define CAJHMHHIJEG_HLMEPLDLCAE_OFFSET UNITYSDK_OFFSET(0xC486600)
#define CAJHMHHIJEG_IDOBBOEHGLO_OFFSET UNITYSDK_OFFSET(0xC486190)
#define CAJHMHHIJEG_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0xC484BF0)
#define CAJHMHHIJEG_LFMJFLDAAGB_OFFSET UNITYSDK_OFFSET(0xC487340)
#define CAJHMHHIJEG_MMNOIOHPBGC_OFFSET UNITYSDK_OFFSET(0xC4854A0)
#define CAJHMHHIJEG_MNFGCBBKPNA_OFFSET UNITYSDK_OFFSET(0xC485240)
#define CAJHMHHIJEG_NPJEODCPHFE_OFFSET UNITYSDK_OFFSET(0xC4867B0)
#define CAJHMHHIJEG_ONBHKLDEEKK_1_OFFSET UNITYSDK_OFFSET(0xC486250)
#define CAJHMHHIJEG_ONBHKLDEEKK_OFFSET UNITYSDK_OFFSET(0xC485060)
#define CAJHMHHIJEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC485120)
#define CAJHMHHIJEG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4857C0)
#define CAJHMHHIJEG_TICK_OFFSET UNITYSDK_OFFSET(0xC485830)

inline static constexpr unsigned int CAJHMHHIJEG_TypeDefinitionIndex = 58433;

	class CAJHMHHIJEG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::RoadRashGameModifier_TutorialLevelAI* OFKGLJOAMLD; // 0x20
		::BJIACBNKCCJ* EJJMBPMHOBA; // 0x28
		::System::Int32 ONPJLDJHNDG; // 0x30
		::System::Boolean MKPJJPLDOBI; // 0x34
		::System::Boolean ELMNAHHPFLK; // 0x35
		::System::Byte _padding0[0x2];
		::System::Single MELNEEBEJBA; // 0x38
		::System::Single EIFDPPIFEEJ; // 0x3C
		::System::Single OIPLGPBHAHL; // 0x40
		::System::Single BOGMKKMNLJL; // 0x44
		::System::Boolean LFMEDHFJMKB; // 0x48
		::System::Boolean POPPDFDEINM; // 0x49
		::System::Boolean CLMIEEBDLBL; // 0x4A
		::System::Byte _padding1[0x1];
		::System::Single ADPMMNEFDPA; // 0x4C
		::System::Single MJIDMGGDMIB; // 0x50
		::System::Single DPALCHEKJHC; // 0x54
		::System::Single MAOGDONHAHM; // 0x58
		::System::Boolean BDIIKNAAIFD; // 0x5C
		::System::Boolean AGEDKBBFJFL; // 0x5D
		::System::Boolean IGHAMGNKHAO; // 0x5E
		::System::Boolean OAPBNLFGHEB; // 0x5F
		static ::System::Collections::Generic::List_1<::CAJHMHHIJEG*>** StaticGet_ONOIJDOCJIL()
		{
			return (::System::Collections::Generic::List_1<::CAJHMHHIJEG*>**)UnitySDK::FromName("", "CAJHMHHIJEG")->GetStaticField(0x106D0);
		}

		static ::System::Single* StaticGet_EJJGHKDJHEL()
		{
			return (::System::Single*)UnitySDK::FromName("", "CAJHMHHIJEG")->GetStaticField(0x3790);
		}

		static ::System::Int32* StaticGet_CGBFNOHNMDE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CAJHMHHIJEG")->GetStaticField(0x3794);
		}

		static ::System::Boolean* StaticGet_JPKINJEBNJD()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CAJHMHHIJEG")->GetStaticField(0x3798);
		}

		static ::System::Boolean* StaticGet_DPDNECGFDGK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CAJHMHHIJEG")->GetStaticField(0x3799);
		}

		// static const ::System::String* GHOHEHDDCEC; // 0x0
		// static const ::System::Object FFGKPOENFKC; // 0x0
		// static const ::System::Object OHHFCKJPBBD; // 0x0
		// static const ::System::Object OCGDLEFIHEG; // 0x0
		// static const ::System::Object OOMMGKHFKGK; // 0x0
		// static const ::System::Object CPMOFCGEBJB; // 0x0
		// static const ::System::Object GDEIMMBACFB; // 0x0
		// static const ::System::Object ELLOGBAKIHD; // 0x0
		// static const ::System::Object CGJODGHIDNG; // 0x0
		// static const ::System::Object ADEJOKEKCLE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAJHMHHIJEG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_TICK_OFFSET))(this, a1);
		}

		::System::Void EDOFCDEIMJD(::RPG::Client::LittleGame::RoadRash::AICarRuntimeState a1, ::GHMGGIHEHJE* a2, ::GHMGGIHEHJE* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::AICarRuntimeState, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_EDOFCDEIMJD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_GETCONFIG_OFFSET))(this);
		}

		static ::System::Int32 LFMJFLDAAGB(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_LFMJFLDAAGB_OFFSET))(a1, a2);
		}

		::System::Single CGOKCFKEPDJ(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_CGOKCFKEPDJ_OFFSET))(this, a1, a2);
		}

		::System::Void CPGBPJJPFJH(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_CPGBPJJPFJH_OFFSET))(this, a1, a2);
		}

		::System::Void FJJCOEFJPBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_FJJCOEFJPBK_OFFSET))(this);
		}

		::System::Void BPEHGJPMCAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_BPEHGJPMCAH_OFFSET))(this);
		}

		static ::System::Boolean IDOBBOEHGLO(::MFIMCKDKDKG* a1)
		{
			return ((::System::Boolean(*)(::MFIMCKDKDKG*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_IDOBBOEHGLO_OFFSET))(a1);
		}

		static ::System::Boolean DILNENFCIJL(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Boolean(*)(::MFIMCKDKDKG*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_DILNENFCIJL_OFFSET))(a1, a2);
		}

		::System::Void MMNOIOHPBGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_MMNOIOHPBGC_OFFSET))(this);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Single HLMEPLDLCAE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_HLMEPLDLCAE_OFFSET))(this, a1);
		}

		::System::Void HLBECOIKFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_HLBECOIKFNI_OFFSET))(this);
		}

		::System::Boolean NPJEODCPHFE(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFIMCKDKDKG*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_NPJEODCPHFE_OFFSET))(this, a1, a2);
		}

		::System::Void MNFGCBBKPNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_MNFGCBBKPNA_OFFSET))(this);
		}

		::System::Void CDDMEFMGNHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_CDDMEFMGNHD_OFFSET))(this);
		}

		::System::Void GLANHHJHNFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_GLANHHJHNFF_OFFSET))(this);
		}

		static ::System::Void GLANHHJHNFF_1(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_GLANHHJHNFF_1_OFFSET))(a1);
		}

		::System::Void ONBHKLDEEKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_ONBHKLDEEKK_OFFSET))(this);
		}

		::System::Void ONBHKLDEEKK_1(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG_ONBHKLDEEKK_1_OFFSET))(this, a1);
		}

	};

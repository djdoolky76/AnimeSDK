#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMatchAIState.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
class BGFDLPPHOCI_BDAFHFAGNGM;
class GHMGGIHEHJE;
class KPDKCEAFBHI;
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class StreamWriter; }

#define BGFDLPPHOCI_ACFBKFAMIJF_OFFSET UNITYSDK_OFFSET(0xBB05BA0)
#define BGFDLPPHOCI_ACNOPMPBMGB_OFFSET UNITYSDK_OFFSET(0xBB08AA0)
#define BGFDLPPHOCI_AFKCDACLKEP_OFFSET UNITYSDK_OFFSET(0xBB07310)
#define BGFDLPPHOCI_BBAPIBIDAGP_OFFSET UNITYSDK_OFFSET(0xBB091F0)
#define BGFDLPPHOCI_BGMHLECPPOL_OFFSET UNITYSDK_OFFSET(0xBB05C00)
#define BGFDLPPHOCI_CBAGFADJBAM_OFFSET UNITYSDK_OFFSET(0xBB08980)
#define BGFDLPPHOCI_CIMKMBDNGIK_OFFSET UNITYSDK_OFFSET(0xBB04D30)
#define BGFDLPPHOCI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0B450)
#define BGFDLPPHOCI_DAENJDLDHBG_OFFSET UNITYSDK_OFFSET(0xBB057D0)
#define BGFDLPPHOCI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB05F40)
#define BGFDLPPHOCI_FKNOEPGGAOI_OFFSET UNITYSDK_OFFSET(0xBB05E30)
#define BGFDLPPHOCI_GET_ENABLERECORD_OFFSET UNITYSDK_OFFSET(0xBB04D10)
#define BGFDLPPHOCI_GPOICIHFFOJ_OFFSET UNITYSDK_OFFSET(0xBB097C0)
#define BGFDLPPHOCI_HDMKGLJGCLI_OFFSET UNITYSDK_OFFSET(0xBB059C0)
#define BGFDLPPHOCI_ILOEHADNCHF_OFFSET UNITYSDK_OFFSET(0xBB04D60)
#define BGFDLPPHOCI_JPGODGECDFJ_OFFSET UNITYSDK_OFFSET(0xBB0ABD0)
#define BGFDLPPHOCI_LGDDEGDFCGA_OFFSET UNITYSDK_OFFSET(0xBB0AEA0)
#define BGFDLPPHOCI_LMCBHHIEPMC_OFFSET UNITYSDK_OFFSET(0xBB08E50)
#define BGFDLPPHOCI_MOKMKIBJGIL_OFFSET UNITYSDK_OFFSET(0xBB05FB0)
#define BGFDLPPHOCI_NIHKDGHEJFN_OFFSET UNITYSDK_OFFSET(0xBB0AC60)
#define BGFDLPPHOCI_NMHMKKNAPPD_OFFSET UNITYSDK_OFFSET(0xBB04D40)
#define BGFDLPPHOCI_OMGKHKGDBNG_OFFSET UNITYSDK_OFFSET(0xBB09500)
#define BGFDLPPHOCI_OMLKHOFCMFF_OFFSET UNITYSDK_OFFSET(0xBB07C60)
#define BGFDLPPHOCI_PAEGAFNPPAC_OFFSET UNITYSDK_OFFSET(0xBB07F00)
#define BGFDLPPHOCI_PBAFJMPLNOD_OFFSET UNITYSDK_OFFSET(0xBB08380)
#define BGFDLPPHOCI_PENBLPFFOFK_OFFSET UNITYSDK_OFFSET(0xBB05B40)
#define BGFDLPPHOCI_PKOODBKBDAN_OFFSET UNITYSDK_OFFSET(0xBB04D50)
#define BGFDLPPHOCI_SET_ENABLERECORD_OFFSET UNITYSDK_OFFSET(0xBB04D20)

inline static constexpr unsigned int BGFDLPPHOCI_TypeDefinitionIndex = 78230;

	class BGFDLPPHOCI : public ::System::Object
	{
	public:
		::System::String* HOFHPAAFMMG; // 0x10
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x18
		::System::String* GGEEKEAKFHN; // 0x20
		::System::IO::StreamWriter* LBLHMBNGKEO; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* BDHACHIBADJ; // 0x30
		::System::DateTime DICDBJFGOIF; // 0x38
		::System::Boolean KLMAEPMHPCE; // 0x40
		::System::Boolean AMDJLAFJKFA; // 0x41
		static ::System::Boolean* StaticGet__EnableRecord_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BGFDLPPHOCI")->GetStaticField(0x156D0);
		}

		// static const ::System::Object JPKMKANAOME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_EnableRecord()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGFDLPPHOCI_GET_ENABLERECORD_OFFSET))();
		}

		static ::System::Void set_EnableRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_SET_ENABLERECORD_OFFSET))(a1);
		}

		::System::Boolean CIMKMBDNGIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_CIMKMBDNGIK_OFFSET))(this);
		}

		::System::String* NMHMKKNAPPD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_NMHMKKNAPPD_OFFSET))(this);
		}

		::System::String* PKOODBKBDAN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_PKOODBKBDAN_OFFSET))(this);
		}

		::System::Void ILOEHADNCHF(::KPDKCEAFBHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_ILOEHADNCHF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_DISPOSE_OFFSET))(this);
		}

		::System::Void DAENJDLDHBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_DAENJDLDHBG_OFFSET))(this, a1);
		}

		::System::Void AFKCDACLKEP(::GHMGGIHEHJE* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_AFKCDACLKEP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void PBAFJMPLNOD(::GHMGGIHEHJE* a1, ::RPG::GameCore::EMatchAIState a2, ::RPG::GameCore::EMatchAIState a3, ::System::String* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::GameCore::EMatchAIState, ::RPG::GameCore::EMatchAIState, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_PBAFJMPLNOD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ACNOPMPBMGB(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_ACNOPMPBMGB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LMCBHHIEPMC(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_LMCBHHIEPMC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BBAPIBIDAGP(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_BBAPIBIDAGP_OFFSET))(this, a1, a2);
		}

		::System::Void OMGKHKGDBNG(::GHMGGIHEHJE* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_OMGKHKGDBNG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GPOICIHFFOJ(::System::Single a1, ::GHMGGIHEHJE* a2, ::GHMGGIHEHJE* a3, ::RPG::GameCore::EMatchAIState a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Single a14, ::System::Boolean a15, ::System::Single a16, ::System::Boolean a17, ::System::Single a18, ::System::Boolean a19, ::System::Single a20, ::System::Single a21, ::System::Single a22)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::RPG::GameCore::EMatchAIState, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_GPOICIHFFOJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
		}

		::System::Void NIHKDGHEJFN(::GHMGGIHEHJE* a1, ::BGFDLPPHOCI_BDAFHFAGNGM* a2, ::RPG::GameCore::EMatchAIState a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BGFDLPPHOCI_BDAFHFAGNGM*, ::RPG::GameCore::EMatchAIState, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_NIHKDGHEJFN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LGDDEGDFCGA(::GHMGGIHEHJE* a1, ::BGFDLPPHOCI_BDAFHFAGNGM* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BGFDLPPHOCI_BDAFHFAGNGM*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_LGDDEGDFCGA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::SimpleJSON::JSONClass* MOKMKIBJGIL(::System::String* a1)
		{
			return ((::SimpleJSON::JSONClass*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_MOKMKIBJGIL_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONClass* PAEGAFNPPAC(::System::String* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::SimpleJSON::JSONClass*(*)(::PVOID, ::System::String*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_PAEGAFNPPAC_OFFSET))(this, a1, a2);
		}

		::System::Void BGMHLECPPOL(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_BGMHLECPPOL_OFFSET))(this, a1);
		}

		::BGFDLPPHOCI_BDAFHFAGNGM* OMLKHOFCMFF(::GHMGGIHEHJE* a1)
		{
			return ((::BGFDLPPHOCI_BDAFHFAGNGM*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_OMLKHOFCMFF_OFFSET))(this, a1);
		}

		::System::Void JPGODGECDFJ(::BGFDLPPHOCI_BDAFHFAGNGM* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGFDLPPHOCI_BDAFHFAGNGM*, ::System::Single))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_JPGODGECDFJ_OFFSET))(this, a1, a2);
		}

		::System::Void CBAGFADJBAM(::BGFDLPPHOCI_BDAFHFAGNGM* a1, ::RPG::GameCore::EMatchAIState a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGFDLPPHOCI_BDAFHFAGNGM*, ::RPG::GameCore::EMatchAIState))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_CBAGFADJBAM_OFFSET))(this, a1, a2);
		}

		::System::String* HDMKGLJGCLI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_HDMKGLJGCLI_OFFSET))(this);
		}

		::System::Void FKNOEPGGAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_FKNOEPGGAOI_OFFSET))(this);
		}

		::System::Single PENBLPFFOFK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_PENBLPFFOFK_OFFSET))(this);
		}

		::System::UInt64 ACFBKFAMIJF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_ACFBKFAMIJF_OFFSET))(this);
		}

	};

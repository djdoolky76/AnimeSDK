#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/ICOHAPENNHF_CKPLOEHPLNF.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/OJACCBLPEPG_EStationOpenState.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
class MHHBDDMJOII;
class PFFJCPFPPHG;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionStationInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EFKFAPMPJDI_CAKFAMAOFCK_OFFSET UNITYSDK_OFFSET(0x13A54B50)
#define EFKFAPMPJDI_CBMCENKOPEP_OFFSET UNITYSDK_OFFSET(0x13A54190)
#define EFKFAPMPJDI_CGAFOMMPCDO_OFFSET UNITYSDK_OFFSET(0x13A53E50)
#define EFKFAPMPJDI_CLCMKPHAIKJ_OFFSET UNITYSDK_OFFSET(0x13A53730)
#define EFKFAPMPJDI_COIBIANHILL_OFFSET UNITYSDK_OFFSET(0x13A536A0)
#define EFKFAPMPJDI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A52D80)
#define EFKFAPMPJDI_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0x13A52D70)
#define EFKFAPMPJDI_FKMGEOCJCNL_OFFSET UNITYSDK_OFFSET(0x13A53560)
#define EFKFAPMPJDI_GMCOPDBFDDO_OFFSET UNITYSDK_OFFSET(0x13A53840)
#define EFKFAPMPJDI_HPGBGGAGCFM_OFFSET UNITYSDK_OFFSET(0x13A53510)
#define EFKFAPMPJDI_IONAADDDMHG_OFFSET UNITYSDK_OFFSET(0x13A535C0)
#define EFKFAPMPJDI_LFLDIKCGPAJ_OFFSET UNITYSDK_OFFSET(0x13A54BF0)
#define EFKFAPMPJDI_LHAOLEAPHPD_OFFSET UNITYSDK_OFFSET(0x13A539B0)
#define EFKFAPMPJDI_LLMAJLEMIDM_OFFSET UNITYSDK_OFFSET(0x13A537C0)
#define EFKFAPMPJDI_LMNEAJEEAPI_OFFSET UNITYSDK_OFFSET(0x13A53A50)
#define EFKFAPMPJDI_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x13A532E0)
#define EFKFAPMPJDI_NHFCCEECMGG_OFFSET UNITYSDK_OFFSET(0x13A53AA0)
#define EFKFAPMPJDI_OCGDHGJLMEB_OFFSET UNITYSDK_OFFSET(0x13A53B80)
#define EFKFAPMPJDI_PIHLANMDHHK_OFFSET UNITYSDK_OFFSET(0x13A53C60)

inline static constexpr unsigned int EFKFAPMPJDI_TypeDefinitionIndex = 69322;

	class EFKFAPMPJDI : public ::ICOHAPENNHF
	{
	public:
		::ICOHAPENNHF_CKPLOEHPLNF DGAIMPKFGAI; // 0x80
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::PFFJCPFPPHG*>* DGGPKCGDNOA; // 0xA8
		::RPG::Client::TwoKeyDictionary_3<::JOGBIBJLPJB, ::JOGBIBJLPJB, ::PFFJCPFPPHG*>* CBJLIJPOBLP; // 0xB0
		::System::Collections::Generic::List_1<::LAJCPEFEOPN*>* ECBHMEGFNPK; // 0xB8
		::System::String* NJMDCBHNBCO; // 0xC0
		::ICOHAPENNHF_CKPLOEHPLNF AHBKNKNDJLC; // 0xC8
		::Il2CppArray<::PFFJCPFPPHG*>* IHLBAMHPGFG; // 0xF0
		::System::Collections::Generic::List_1<::LAJCPEFEOPN*>* FHPFKPGCCBA; // 0xF8
		::System::UInt32 DLOCDFJOBPI; // 0x100
		::System::UInt32 JOIFGEHNKCH; // 0x104
		::OJACCBLPEPG_EStationOpenState HKHDOFAKKDE; // 0x108
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_FCMKHIPNDPG_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_MHFNJCLKNMG_OFFSET))(this);
		}

		::JOGBIBJLPJB HPGBGGAGCFM(::JOGBIBJLPJB a1)
		{
			return ((::JOGBIBJLPJB(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_HPGBGGAGCFM_OFFSET))(this, a1);
		}

		::System::Boolean FKMGEOCJCNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_FKMGEOCJCNL_OFFSET))(this);
		}

		::System::Boolean IONAADDDMHG(::JOGBIBJLPJB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_IONAADDDMHG_OFFSET))(this, a1);
		}

		::System::Boolean COIBIANHILL(::JOGBIBJLPJB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_COIBIANHILL_OFFSET))(this, a1);
		}

		::System::Single CLCMKPHAIKJ(::LAJCPEFEOPN* a1)
		{
			return ((::System::Single(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_CLCMKPHAIKJ_OFFSET))(this, a1);
		}

		::System::Void LLMAJLEMIDM(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_LLMAJLEMIDM_OFFSET))(this, a1);
		}

		::System::Void GMCOPDBFDDO(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_GMCOPDBFDDO_OFFSET))(this, a1);
		}

		::System::Boolean LMNEAJEEAPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_LMNEAJEEAPI_OFFSET))(this);
		}

		::System::Boolean NHFCCEECMGG(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_NHFCCEECMGG_OFFSET))(this, a1, a2);
		}

		::System::Void OCGDHGJLMEB(::LAJCPEFEOPN* a1, ::JOGBIBJLPJB a2, ::JOGBIBJLPJB a3)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_OCGDHGJLMEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LHAOLEAPHPD(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_LHAOLEAPHPD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PIHLANMDHHK(::LAJCPEFEOPN* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_PIHLANMDHHK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CGAFOMMPCDO(::LAJCPEFEOPN* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_CGAFOMMPCDO_OFFSET))(this, a1);
		}

		::System::Void CBMCENKOPEP(::OJACCBLPEPG_EStationOpenState a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJACCBLPEPG_EStationOpenState))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_CBMCENKOPEP_OFFSET))(this, a1);
		}

		::System::Void LFLDIKCGPAJ(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_LFLDIKCGPAJ_OFFSET))(this, a1);
		}

		::System::Boolean CAKFAMAOFCK(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + EFKFAPMPJDI_CAKFAMAOFCK_OFFSET))(this, a1);
		}

	};

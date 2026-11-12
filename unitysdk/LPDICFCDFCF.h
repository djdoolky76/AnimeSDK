#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPDICFCDFCF_AMBKJAHLKFP;
class LPDICFCDFCF_JIBDOMCOAPK;
class NEOBJJIOBFP;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameWorld; }
namespace RPGTools::Timeline { class ActiveVirtualCameraConfig; }
namespace RPGTools::Timeline::Discussion { class CameraCompositionClip; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define LPDICFCDFCF_AJJLIMGJJCD_OFFSET UNITYSDK_OFFSET(0xC07D3D0)
#define LPDICFCDFCF_BDMBJLDHGAE_OFFSET UNITYSDK_OFFSET(0xC07C8A0)
#define LPDICFCDFCF_CFJJCAEEINC_OFFSET UNITYSDK_OFFSET(0xC07EA20)
#define LPDICFCDFCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC07C590)
#define LPDICFCDFCF_DHPABMMNFAB_OFFSET UNITYSDK_OFFSET(0xC07CBE0)
#define LPDICFCDFCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC07C5A0)
#define LPDICFCDFCF_DJHDFNBIODH_OFFSET UNITYSDK_OFFSET(0xC07C750)
#define LPDICFCDFCF_ECNKJGHDNLI_OFFSET UNITYSDK_OFFSET(0xC07D250)
#define LPDICFCDFCF_EKLAGHDACMF_OFFSET UNITYSDK_OFFSET(0xC07E1D0)
#define LPDICFCDFCF_EMDPPEHAEKL_OFFSET UNITYSDK_OFFSET(0xC07D5E0)
#define LPDICFCDFCF_FAIDHMDMPFJ_OFFSET UNITYSDK_OFFSET(0xC07C900)
#define LPDICFCDFCF_FMPMDMAKAFC_OFFSET UNITYSDK_OFFSET(0xC07C690)
#define LPDICFCDFCF_GEDOHAEGEAM_OFFSET UNITYSDK_OFFSET(0xC07E280)
#define LPDICFCDFCF_GHDCNHKEDIG_OFFSET UNITYSDK_OFFSET(0xC07D570)
#define LPDICFCDFCF_GJMLFLICEHG_OFFSET UNITYSDK_OFFSET(0xC07D650)
#define LPDICFCDFCF_GOFELBHNPCH_OFFSET UNITYSDK_OFFSET(0xC07EAD0)
#define LPDICFCDFCF_HAOPJNJKANA_OFFSET UNITYSDK_OFFSET(0xC07CC40)
#define LPDICFCDFCF_HBEODCMJIBA_OFFSET UNITYSDK_OFFSET(0xC07D850)
#define LPDICFCDFCF_HEFBGMMBDCP_OFFSET UNITYSDK_OFFSET(0xC07CA40)
#define LPDICFCDFCF_HOIJFOKEOMA_OFFSET UNITYSDK_OFFSET(0xC07CE40)
#define LPDICFCDFCF_IKFNEDECDJE_OFFSET UNITYSDK_OFFSET(0xC07CB10)
#define LPDICFCDFCF_JEFGPFPIDIA_OFFSET UNITYSDK_OFFSET(0xC07CD60)
#define LPDICFCDFCF_JOJBMIPABPF_OFFSET UNITYSDK_OFFSET(0xC07E910)
#define LPDICFCDFCF_KABGMOELOOE_OFFSET UNITYSDK_OFFSET(0xC07D4E0)
#define LPDICFCDFCF_LDDLGDKEIBM_OFFSET UNITYSDK_OFFSET(0xC07CEE0)
#define LPDICFCDFCF_LODDFBCOMPB_OFFSET UNITYSDK_OFFSET(0xC07E9C0)
#define LPDICFCDFCF_MFGBAPBJEIL_OFFSET UNITYSDK_OFFSET(0xC07CAD0)
#define LPDICFCDFCF_NDOCEDBFDDA_OFFSET UNITYSDK_OFFSET(0xC07D090)
#define LPDICFCDFCF_NHAKKEONDAA_OFFSET UNITYSDK_OFFSET(0xC07C9F0)
#define LPDICFCDFCF_OOGBIKEGJPH_OFFSET UNITYSDK_OFFSET(0xC07DA30)
#define LPDICFCDFCF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC07C5F0)

inline static constexpr unsigned int LPDICFCDFCF_TypeDefinitionIndex = 62124;

	class LPDICFCDFCF : public ::System::Object
	{
	public:
		::NEOBJJIOBFP* IODLOIKPMEH; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* HLHHILPKNPJ; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* OHFJNMMPKFM; // 0x20
		::UnityEngine::Coroutine* NKJLLKFHNPA; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* CELKIBFPIML; // 0x30
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x38
		::LPDICFCDFCF_JIBDOMCOAPK* MLDNHLGKFFH; // 0x40
		::System::Boolean GAOOEKHNIJC; // 0x48
		::System::Boolean CFIOLJILGLM; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 FDNNOCDFPHA; // 0x4C
		::System::Int32 JHDJFFKDJEF; // 0x50
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void NHAKKEONDAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPDICFCDFCF_NHAKKEONDAA_OFFSET))(this, a1);
		}

		::System::Void HEFBGMMBDCP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPDICFCDFCF_HEFBGMMBDCP_OFFSET))(this, a1);
		}

		::System::Void FAIDHMDMPFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_FAIDHMDMPFJ_OFFSET))(this);
		}

		::System::Boolean MFGBAPBJEIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_MFGBAPBJEIL_OFFSET))(this);
		}

		::System::Boolean IKFNEDECDJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_IKFNEDECDJE_OFFSET))(this);
		}

		::System::Void HAOPJNJKANA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_HAOPJNJKANA_OFFSET))(this, a1);
		}

		::System::Void JEFGPFPIDIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_JEFGPFPIDIA_OFFSET))(this);
		}

		::System::Void HOIJFOKEOMA(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_HOIJFOKEOMA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LDDLGDKEIBM(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_LDDLGDKEIBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NDOCEDBFDDA(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_NDOCEDBFDDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ECNKJGHDNLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_ECNKJGHDNLI_OFFSET))(this);
		}

		::System::Boolean AJJLIMGJJCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_AJJLIMGJJCD_OFFSET))(this);
		}

		::System::Void KABGMOELOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_KABGMOELOOE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GHDCNHKEDIG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_GHDCNHKEDIG_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EMDPPEHAEKL(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_EMDPPEHAEKL_OFFSET))(this, a1);
		}

		::System::Void BDMBJLDHGAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_BDMBJLDHGAE_OFFSET))(this);
		}

		::System::Void GJMLFLICEHG(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_GJMLFLICEHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DHPABMMNFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_DHPABMMNFAB_OFFSET))(this);
		}

		::System::Void HBEODCMJIBA(::LPDICFCDFCF_AMBKJAHLKFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPDICFCDFCF_AMBKJAHLKFP*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_HBEODCMJIBA_OFFSET))(this, a1);
		}

		::System::Void FMPMDMAKAFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_FMPMDMAKAFC_OFFSET))(this);
		}

		::System::Void OOGBIKEGJPH(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_OOGBIKEGJPH_OFFSET))(this, a1);
		}

		::System::Void GEDOHAEGEAM(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_GEDOHAEGEAM_OFFSET))(this, a1);
		}

		::System::Boolean JOJBMIPABPF(::RPGTools::Timeline::ActiveVirtualCameraConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraConfig*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_JOJBMIPABPF_OFFSET))(this, a1);
		}

		::System::Boolean LODDFBCOMPB(::RPGTools::Timeline::Discussion::CameraCompositionClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::Discussion::CameraCompositionClip*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_LODDFBCOMPB_OFFSET))(this, a1);
		}

		::System::Void EKLAGHDACMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_EKLAGHDACMF_OFFSET))(this);
		}

		::System::Void CFJJCAEEINC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPDICFCDFCF_CFJJCAEEINC_OFFSET))(this, a1);
		}

		::System::Void GOFELBHNPCH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPDICFCDFCF_GOFELBHNPCH_OFFSET))(this, a1);
		}

		::System::Void DJHDFNBIODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDICFCDFCF_DJHDFNBIODH_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicComboType.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class FFLDDNKKIOB;
class GFIMNLJALNN;
class HIOEAKHGILF;
class IHPIHJDMOPL;
class PEEDLCHFAFL;
namespace RPG::Client { class AdventureAudioManager; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FIBBFHBGMBO_BPILMHBJPEK_OFFSET UNITYSDK_OFFSET(0x15798EE0)
#define FIBBFHBGMBO_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x15799090)
#define FIBBFHBGMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15798060)
#define FIBBFHBGMBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1579B280)
#define FIBBFHBGMBO_EDHAOCKPHFN_OFFSET UNITYSDK_OFFSET(0x15798670)
#define FIBBFHBGMBO_FGPFBDANDAG_OFFSET UNITYSDK_OFFSET(0x1579AA40)
#define FIBBFHBGMBO_FJCMICGFODD_OFFSET UNITYSDK_OFFSET(0x1579AD50)
#define FIBBFHBGMBO_GAHIDENOGIF_1_OFFSET UNITYSDK_OFFSET(0x15799710)
#define FIBBFHBGMBO_GAHIDENOGIF_OFFSET UNITYSDK_OFFSET(0x1579A200)
#define FIBBFHBGMBO_GAOKFJFPBJF_OFFSET UNITYSDK_OFFSET(0x15799C90)
#define FIBBFHBGMBO_GDLOLHGLBPG_OFFSET UNITYSDK_OFFSET(0x15798540)
#define FIBBFHBGMBO_GEHEIMBIOOO_OFFSET UNITYSDK_OFFSET(0x1579AFB0)
#define FIBBFHBGMBO_GET_BEATEVENTS_OFFSET UNITYSDK_OFFSET(0x1579AC40)
#define FIBBFHBGMBO_GET_SUIYANGBEATBPM_OFFSET UNITYSDK_OFFSET(0x1579AC20)
#define FIBBFHBGMBO_GET_SUIYANGBEATSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1579AC00)
#define FIBBFHBGMBO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15798CD0)
#define FIBBFHBGMBO_HIHMLFNOHOI_OFFSET UNITYSDK_OFFSET(0x1579A7F0)
#define FIBBFHBGMBO_HPEHKLCBEAI_OFFSET UNITYSDK_OFFSET(0x15798B20)
#define FIBBFHBGMBO_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x15798820)
#define FIBBFHBGMBO_IGGMNKJBJJP_OFFSET UNITYSDK_OFFSET(0x1579AAC0)
#define FIBBFHBGMBO_IPNEIOEJEOC_OFFSET UNITYSDK_OFFSET(0x15799840)
#define FIBBFHBGMBO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x157992A0)
#define FIBBFHBGMBO_KHFJHDLMDGO_OFFSET UNITYSDK_OFFSET(0x15799540)
#define FIBBFHBGMBO_KOJMFLOAELI_OFFSET UNITYSDK_OFFSET(0x157999D0)
#define FIBBFHBGMBO_LGEOJDDFAPE_OFFSET UNITYSDK_OFFSET(0x157989F0)
#define FIBBFHBGMBO_LIBKBLKLHIG_OFFSET UNITYSDK_OFFSET(0x1579B1D0)
#define FIBBFHBGMBO_LLKBGCLJNEE_OFFSET UNITYSDK_OFFSET(0x1579AC50)
#define FIBBFHBGMBO_MFAJIPOECLH_OFFSET UNITYSDK_OFFSET(0x15798300)
#define FIBBFHBGMBO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x157980D0)
#define FIBBFHBGMBO_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15798380)
#define FIBBFHBGMBO_PODBDMJEMJP_OFFSET UNITYSDK_OFFSET(0x15799AC0)
#define FIBBFHBGMBO_SET_SUIYANGBEATBPM_OFFSET UNITYSDK_OFFSET(0x1579AC30)
#define FIBBFHBGMBO_SET_SUIYANGBEATSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1579AC10)

	class FIBBFHBGMBO : public ::System::Object
	{
	public:
		::System::String* NNDOEKALACM; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _BeatEvents_k__BackingField; // 0x18
		::EFODGECFLLC* FKINCGODJEP; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::RPG::Client::AdventureAudioManager* GEFNFMKBBGF; // 0x30
		::System::UInt32 JBPDEAKGKOK; // 0x38
		::System::Boolean JLOEFGJAGEG; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single _SuiyangBeatBpm_k__BackingField; // 0x40
		::System::Single _SuiyangBeatStartTime_k__BackingField; // 0x44
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void EDHAOCKPHFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_EDHAOCKPHFN_OFFSET))(this);
		}

		::System::Void IECIAPPANHI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_IECIAPPANHI_OFFSET))(this, a1);
		}

		::System::Void HPEHKLCBEAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_HPEHKLCBEAI_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_HFKFNFKIEON_OFFSET))(this, a1);
		}

		::System::Void CIHFGJDCHIA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_CIHFGJDCHIA_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::HIOEAKHGILF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Double KHFJHDLMDGO(::FFLDDNKKIOB* a1)
		{
			return ((::System::Double(*)(::PVOID, ::FFLDDNKKIOB*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_KHFJHDLMDGO_OFFSET))(this, a1);
		}

		::System::Double KOJMFLOAELI(::System::UInt32 a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_KOJMFLOAELI_OFFSET))(this, a1);
		}

		::System::Boolean PODBDMJEMJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_PODBDMJEMJP_OFFSET))(this);
		}

		::System::Boolean GAOKFJFPBJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GAOKFJFPBJF_OFFSET))(this);
		}

		::System::Void GAHIDENOGIF(::FFLDDNKKIOB* a1, ::System::Collections::Generic::ICollection_1<::IHPIHJDMOPL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFLDDNKKIOB*, ::System::Collections::Generic::ICollection_1<::IHPIHJDMOPL*>*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GAHIDENOGIF_OFFSET))(this, a1, a2);
		}

		::System::Void GAHIDENOGIF_1(::FFLDDNKKIOB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFLDDNKKIOB*, ::System::Int32))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GAHIDENOGIF_1_OFFSET))(this, a1, a2);
		}

		::System::Void HIHMLFNOHOI(::IHPIHJDMOPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHPIHJDMOPL*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_HIHMLFNOHOI_OFFSET))(this, a1);
		}

		::System::Void FGPFBDANDAG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_FGPFBDANDAG_OFFSET))(this, a1, a2);
		}

		::System::Void MFAJIPOECLH(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_MFAJIPOECLH_OFFSET))(this, a1, a2);
		}

		::System::Void IPNEIOEJEOC(::GFIMNLJALNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIMNLJALNN*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_IPNEIOEJEOC_OFFSET))(this, a1);
		}

		::System::Void GDLOLHGLBPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GDLOLHGLBPG_OFFSET))(this);
		}

		::System::Void LGEOJDDFAPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_LGEOJDDFAPE_OFFSET))(this);
		}

		::System::Void BPILMHBJPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_BPILMHBJPEK_OFFSET))(this);
		}

		::System::Single get_SuiyangBeatStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GET_SUIYANGBEATSTARTTIME_OFFSET))(this);
		}

		::System::Void set_SuiyangBeatStartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_SET_SUIYANGBEATSTARTTIME_OFFSET))(this, a1);
		}

		::System::Single get_SuiyangBeatBpm()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GET_SUIYANGBEATBPM_OFFSET))(this);
		}

		::System::Void set_SuiyangBeatBpm(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_SET_SUIYANGBEATBPM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_BeatEvents()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GET_BEATEVENTS_OFFSET))(this);
		}

		::System::Void LLKBGCLJNEE(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEvent* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEvent*, ::System::Single))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_LLKBGCLJNEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FJCMICGFODD(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_FJCMICGFODD_OFFSET))(this, a1);
		}

		::System::Int32 GEHEIMBIOOO(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_GEHEIMBIOOO_OFFSET))(this, a1);
		}

		::System::Void LIBKBLKLHIG(::UnityEngine::GameObject* a1, ::RPG::GameCore::MusicComboType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::MusicComboType, ::System::Boolean))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_LIBKBLKLHIG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AdventureAudioManager* IGGMNKJBJJP()
		{
			return ((::RPG::Client::AdventureAudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_IGGMNKJBJJP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_DISPOSE_OFFSET))(this);
		}

	};

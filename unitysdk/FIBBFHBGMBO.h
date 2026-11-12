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
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FIBBFHBGMBO_BPILMHBJPEK_OFFSET UNITYSDK_OFFSET(0x166BA0A0)
#define FIBBFHBGMBO_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x166BA250)
#define FIBBFHBGMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x166B92B0)
#define FIBBFHBGMBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166BCA80)
#define FIBBFHBGMBO_EDHAOCKPHFN_OFFSET UNITYSDK_OFFSET(0x166B9880)
#define FIBBFHBGMBO_FGPFBDANDAG_OFFSET UNITYSDK_OFFSET(0x166BC230)
#define FIBBFHBGMBO_FJCMICGFODD_OFFSET UNITYSDK_OFFSET(0x166BC550)
#define FIBBFHBGMBO_GAHIDENOGIF_OFFSET UNITYSDK_OFFSET(0x166BBA00)
#define FIBBFHBGMBO_GAOKFJFPBJF_OFFSET UNITYSDK_OFFSET(0x166BB490)
#define FIBBFHBGMBO_GDLOLHGLBPG_OFFSET UNITYSDK_OFFSET(0x166B9750)
#define FIBBFHBGMBO_GEHEIMBIOOO_OFFSET UNITYSDK_OFFSET(0x166BC7B0)
#define FIBBFHBGMBO_GET_BEATEVENTS_OFFSET UNITYSDK_OFFSET(0x166BC440)
#define FIBBFHBGMBO_GET_SUIYANGBEATBPM_OFFSET UNITYSDK_OFFSET(0x166BC420)
#define FIBBFHBGMBO_GET_SUIYANGBEATSTARTTIME_OFFSET UNITYSDK_OFFSET(0x166BC400)
#define FIBBFHBGMBO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x166B9EC0)
#define FIBBFHBGMBO_HIHMLFNOHOI_OFFSET UNITYSDK_OFFSET(0x166BBFF0)
#define FIBBFHBGMBO_HPEHKLCBEAI_OFFSET UNITYSDK_OFFSET(0x166B9D10)
#define FIBBFHBGMBO_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x166B9A30)
#define FIBBFHBGMBO_IGGMNKJBJJP_OFFSET UNITYSDK_OFFSET(0x166BC2B0)
#define FIBBFHBGMBO_IPNEIOEJEOC_OFFSET UNITYSDK_OFFSET(0x166BB040)
#define FIBBFHBGMBO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x166BA430)
#define FIBBFHBGMBO_KHFJHDLMDGO_OFFSET UNITYSDK_OFFSET(0x166BA700)
#define FIBBFHBGMBO_KLKBPLKGGAD_OFFSET UNITYSDK_OFFSET(0x166BA8D0)
#define FIBBFHBGMBO_KOJMFLOAELI_OFFSET UNITYSDK_OFFSET(0x166BB1D0)
#define FIBBFHBGMBO_LGEOJDDFAPE_OFFSET UNITYSDK_OFFSET(0x166B9BE0)
#define FIBBFHBGMBO_LIBKBLKLHIG_OFFSET UNITYSDK_OFFSET(0x166BC9D0)
#define FIBBFHBGMBO_LLKBGCLJNEE_OFFSET UNITYSDK_OFFSET(0x166BC450)
#define FIBBFHBGMBO_LMADPEMKPFE_OFFSET UNITYSDK_OFFSET(0x166BC110)
#define FIBBFHBGMBO_MFAJIPOECLH_OFFSET UNITYSDK_OFFSET(0x166B9530)
#define FIBBFHBGMBO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x166B9320)
#define FIBBFHBGMBO_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x166B95B0)
#define FIBBFHBGMBO_PODBDMJEMJP_OFFSET UNITYSDK_OFFSET(0x166BB2C0)
#define FIBBFHBGMBO_SET_SUIYANGBEATBPM_OFFSET UNITYSDK_OFFSET(0x166BC430)
#define FIBBFHBGMBO_SET_SUIYANGBEATSTARTTIME_OFFSET UNITYSDK_OFFSET(0x166BC410)

inline static constexpr unsigned int FIBBFHBGMBO_TypeDefinitionIndex = 79228;

	class FIBBFHBGMBO : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _BeatEvents_k__BackingField; // 0x18
		::RPG::Client::AdventureAudioManager* GEFNFMKBBGF; // 0x20
		::System::String* NNDOEKALACM; // 0x28
		::EFODGECFLLC* FKINCGODJEP; // 0x30
		::System::Boolean JLOEFGJAGEG; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single _SuiyangBeatBpm_k__BackingField; // 0x3C
		::System::UInt32 JBPDEAKGKOK; // 0x40
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

		::System::Void KLKBPLKGGAD(::FFLDDNKKIOB* a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::FFLDDNKKIOB*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_KLKBPLKGGAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HIHMLFNOHOI(::IHPIHJDMOPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHPIHJDMOPL*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_HIHMLFNOHOI_OFFSET))(this, a1);
		}

		::System::Void LMADPEMKPFE(::IHPIHJDMOPL* a1, ::RPG::GameCore::FiveDimMusicEventInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IHPIHJDMOPL*, ::RPG::GameCore::FiveDimMusicEventInfo*))((::PBYTE)hIl2Cpp + FIBBFHBGMBO_LMADPEMKPFE_OFFSET))(this, a1, a2);
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

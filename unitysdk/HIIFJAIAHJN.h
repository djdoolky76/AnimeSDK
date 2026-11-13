#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class HIIFJAIAHJN_MPBNCGKHOOD;
class KLKMCNOECAL;
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define HIIFJAIAHJN_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x19034110)
#define HIIFJAIAHJN_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x190335F0)
#define HIIFJAIAHJN_ANNDAKMIBMC_OFFSET UNITYSDK_OFFSET(0x190350E0)
#define HIIFJAIAHJN_BEAGDIEILFD_OFFSET UNITYSDK_OFFSET(0x19035050)
#define HIIFJAIAHJN_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0x190331C0)
#define HIIFJAIAHJN_BOGIJPBIILL_OFFSET UNITYSDK_OFFSET(0x19034260)
#define HIIFJAIAHJN_CTOR_OFFSET UNITYSDK_OFFSET(0x19033080)
#define HIIFJAIAHJN_DBBJAFCPPHF_OFFSET UNITYSDK_OFFSET(0x19034300)
#define HIIFJAIAHJN_DIFOOBEFGBF_OFFSET UNITYSDK_OFFSET(0x190348F0)
#define HIIFJAIAHJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19033F40)
#define HIIFJAIAHJN_FBJMLONLLNC_OFFSET UNITYSDK_OFFSET(0x19034220)
#define HIIFJAIAHJN_GANOIJCJGHH_OFFSET UNITYSDK_OFFSET(0x19034410)
#define HIIFJAIAHJN_GBLDJLNPKMG_OFFSET UNITYSDK_OFFSET(0x19033BF0)
#define HIIFJAIAHJN_GEDOIDDCKED_OFFSET UNITYSDK_OFFSET(0x19035370)
#define HIIFJAIAHJN_GJBKNOANEBM_OFFSET UNITYSDK_OFFSET(0x19034390)
#define HIIFJAIAHJN_GONAEJDBGHD_OFFSET UNITYSDK_OFFSET(0x19036060)
#define HIIFJAIAHJN_IAKGNOGHMDH_OFFSET UNITYSDK_OFFSET(0x19034980)
#define HIIFJAIAHJN_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0x190340B0)
#define HIIFJAIAHJN_JJJAJOOCAJP_OFFSET UNITYSDK_OFFSET(0x19033B10)
#define HIIFJAIAHJN_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x190362B0)
#define HIIFJAIAHJN_LHBJCHNCKIA_OFFSET UNITYSDK_OFFSET(0x19033DA0)
#define HIIFJAIAHJN_LNOCAJJPAFD_OFFSET UNITYSDK_OFFSET(0x190342A0)
#define HIIFJAIAHJN_MCIDCFLKBPG_OFFSET UNITYSDK_OFFSET(0x19035710)
#define HIIFJAIAHJN_MFMDINJEJHF_OFFSET UNITYSDK_OFFSET(0x19033A60)
#define HIIFJAIAHJN_NDHACKPDJPJ_OFFSET UNITYSDK_OFFSET(0x19034B70)
#define HIIFJAIAHJN_OEOKAOAEIFD_OFFSET UNITYSDK_OFFSET(0x19034AF0)
#define HIIFJAIAHJN_PJLNGEKJBDP_OFFSET UNITYSDK_OFFSET(0x19033460)
#define HIIFJAIAHJN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x190336A0)
#define HIIFJAIAHJN__PRELOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x190362C0)
#define HIIFJAIAHJN__PRELOAD_B__4_1_OFFSET UNITYSDK_OFFSET(0x190363E0)

inline static constexpr unsigned int HIIFJAIAHJN_TypeDefinitionIndex = 60956;

	class HIIFJAIAHJN : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* NCAJHEHFGDP; // 0x10
		::HIIFJAIAHJN_MPBNCGKHOOD* OPGGJKJLHCH; // 0x18
		::UnityEngine::Transform* CJLFBMEPOPA; // 0x20
		::RPG::Client::Promises::Promise* DNBEPMJBJOA; // 0x28
		::System::String* EPLLKMCBKHC; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DCJKNDNLFNL; // 0x38
		::RPG::Client::Promises::Promise* JCIGLKCIGEM; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* BMFHGECEFNB; // 0x48
		::System::String* GIDDKFAKIFK; // 0x50
		::RPG::Client::Promises::Promise* IOIBJPIIINC; // 0x58
		::System::Boolean MDEMEIIFKNA; // 0x60
		::System::Byte _padding0[0x3];
		::RPG::GameCore::GenderType MGDEPNMOADD; // 0x64
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void BFLENEMBIBM(::RPG::Client::CutsceneCacheInitParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_BFLENEMBIBM_OFFSET))(this, a1);
		}

		::System::Boolean ABNMKAPKMGF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_ABNMKAPKMGF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::TimelineAsset* JJJAJOOCAJP()
		{
			return ((::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_JJJAJOOCAJP_OFFSET))(this);
		}

		::KLKMCNOECAL* GBLDJLNPKMG(::System::String* a1)
		{
			return ((::KLKMCNOECAL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_GBLDJLNPKMG_OFFSET))(this, a1);
		}

		::KLKMCNOECAL* LHBJCHNCKIA(::System::String* a1)
		{
			return ((::KLKMCNOECAL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_LHBJCHNCKIA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_PJPFIHFAHGO_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_ABCMNBHIAKM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* FBJMLONLLNC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_FBJMLONLLNC_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* BOGIJPBIILL()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_BOGIJPBIILL_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* MFMDINJEJHF(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MFMDINJEJHF_OFFSET))(this, a1);
		}

		::System::Void DBBJAFCPPHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DBBJAFCPPHF_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GJBKNOANEBM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_GJBKNOANEBM_OFFSET))(this);
		}

		::System::Void DIFOOBEFGBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DIFOOBEFGBF_OFFSET))(this);
		}

		::System::Void IAKGNOGHMDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_IAKGNOGHMDH_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* OEOKAOAEIFD()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_OEOKAOAEIFD_OFFSET))(this);
		}

		::System::Void BEAGDIEILFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_BEAGDIEILFD_OFFSET))(this);
		}

		::System::Void ANNDAKMIBMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_ANNDAKMIBMC_OFFSET))(this);
		}

		::System::String* PJLNGEKJBDP(::System::String* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_PJLNGEKJBDP_OFFSET))(this, a1, a2);
		}

		::System::Void LNOCAJJPAFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_LNOCAJJPAFD_OFFSET))(this, a1);
		}

		::System::Boolean GANOIJCJGHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_GANOIJCJGHH_OFFSET))(this);
		}

		::System::Boolean NDHACKPDJPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_NDHACKPDJPJ_OFFSET))(this);
		}

		::System::Boolean GEDOIDDCKED(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_GEDOIDDCKED_OFFSET))(this, a1);
		}

		::System::Boolean MCIDCFLKBPG(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MCIDCFLKBPG_OFFSET))(this, a1);
		}

		::System::Void GONAEJDBGHD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_GONAEJDBGHD_OFFSET))(this, a1);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_LEHKGLNGAGF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _Preload_b__4_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN__PRELOAD_B__4_0_OFFSET))(this);
		}

		::System::Void _Preload_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN__PRELOAD_B__4_1_OFFSET))(this);
		}

	};

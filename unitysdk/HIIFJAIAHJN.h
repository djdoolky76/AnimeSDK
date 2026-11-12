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

#define HIIFJAIAHJN_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x16C35CB0)
#define HIIFJAIAHJN_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x16C35190)
#define HIIFJAIAHJN_ANNDAKMIBMC_OFFSET UNITYSDK_OFFSET(0x16C36C80)
#define HIIFJAIAHJN_BEAGDIEILFD_OFFSET UNITYSDK_OFFSET(0x16C36BF0)
#define HIIFJAIAHJN_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0x16C34D60)
#define HIIFJAIAHJN_BOGIJPBIILL_OFFSET UNITYSDK_OFFSET(0x16C35E00)
#define HIIFJAIAHJN_CTOR_OFFSET UNITYSDK_OFFSET(0x16C34C20)
#define HIIFJAIAHJN_DBBJAFCPPHF_OFFSET UNITYSDK_OFFSET(0x16C35EA0)
#define HIIFJAIAHJN_DIFOOBEFGBF_OFFSET UNITYSDK_OFFSET(0x16C36490)
#define HIIFJAIAHJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C35AE0)
#define HIIFJAIAHJN_FBJMLONLLNC_OFFSET UNITYSDK_OFFSET(0x16C35DC0)
#define HIIFJAIAHJN_GANOIJCJGHH_OFFSET UNITYSDK_OFFSET(0x16C35FB0)
#define HIIFJAIAHJN_GBLDJLNPKMG_OFFSET UNITYSDK_OFFSET(0x16C35790)
#define HIIFJAIAHJN_GEDOIDDCKED_OFFSET UNITYSDK_OFFSET(0x16C36F10)
#define HIIFJAIAHJN_GJBKNOANEBM_OFFSET UNITYSDK_OFFSET(0x16C35F30)
#define HIIFJAIAHJN_GONAEJDBGHD_OFFSET UNITYSDK_OFFSET(0x16C37C00)
#define HIIFJAIAHJN_IAKGNOGHMDH_OFFSET UNITYSDK_OFFSET(0x16C36520)
#define HIIFJAIAHJN_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0x16C35C50)
#define HIIFJAIAHJN_JJJAJOOCAJP_OFFSET UNITYSDK_OFFSET(0x16C356B0)
#define HIIFJAIAHJN_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x16C37E50)
#define HIIFJAIAHJN_LHBJCHNCKIA_OFFSET UNITYSDK_OFFSET(0x16C35940)
#define HIIFJAIAHJN_LNOCAJJPAFD_OFFSET UNITYSDK_OFFSET(0x16C35E40)
#define HIIFJAIAHJN_MCIDCFLKBPG_OFFSET UNITYSDK_OFFSET(0x16C372B0)
#define HIIFJAIAHJN_MFMDINJEJHF_OFFSET UNITYSDK_OFFSET(0x16C35600)
#define HIIFJAIAHJN_NDHACKPDJPJ_OFFSET UNITYSDK_OFFSET(0x16C36710)
#define HIIFJAIAHJN_OEOKAOAEIFD_OFFSET UNITYSDK_OFFSET(0x16C36690)
#define HIIFJAIAHJN_PJLNGEKJBDP_OFFSET UNITYSDK_OFFSET(0x16C35000)
#define HIIFJAIAHJN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16C35240)
#define HIIFJAIAHJN__PRELOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x16C37E60)
#define HIIFJAIAHJN__PRELOAD_B__4_1_OFFSET UNITYSDK_OFFSET(0x16C37F80)

inline static constexpr unsigned int HIIFJAIAHJN_TypeDefinitionIndex = 60956;

	class HIIFJAIAHJN : public ::System::Object
	{
	public:
		::HIIFJAIAHJN_MPBNCGKHOOD* OPGGJKJLHCH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DCJKNDNLFNL; // 0x18
		::System::String* GIDDKFAKIFK; // 0x20
		::RPG::Client::Promises::Promise* JCIGLKCIGEM; // 0x28
		::UnityEngine::Transform* CJLFBMEPOPA; // 0x30
		::System::String* EPLLKMCBKHC; // 0x38
		::RPG::Client::Promises::Promise* IOIBJPIIINC; // 0x40
		::RPG::Client::Promises::Promise* DNBEPMJBJOA; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* BMFHGECEFNB; // 0x50
		::RPG::Client::Promises::Promise* NCAJHEHFGDP; // 0x58
		::RPG::GameCore::GenderType MGDEPNMOADD; // 0x60
		::System::Boolean MDEMEIIFKNA; // 0x64
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

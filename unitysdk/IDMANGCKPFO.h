#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDMANGCKPFO_RegionStrategy.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class PerformanceRegionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define IDMANGCKPFO_AINKPFDBNGM_OFFSET UNITYSDK_OFFSET(0x15EDB3D0)
#define IDMANGCKPFO_ANJLLLINCJE_OFFSET UNITYSDK_OFFSET(0x15EDBA70)
#define IDMANGCKPFO_AOEBIFOKELL_OFFSET UNITYSDK_OFFSET(0x15EDB5A0)
#define IDMANGCKPFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDACF0)
#define IDMANGCKPFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EDAF20)
#define IDMANGCKPFO_DKFBHIADJBD_OFFSET UNITYSDK_OFFSET(0x15EDB1B0)
#define IDMANGCKPFO_GEPPDMOCODP_OFFSET UNITYSDK_OFFSET(0x15EDB300)
#define IDMANGCKPFO_GET_ENABLESPECIFICREGIONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15EDACD0)
#define IDMANGCKPFO_IJABIGFGMIK_OFFSET UNITYSDK_OFFSET(0x15EDB8E0)
#define IDMANGCKPFO_JDNNDNONFFA_OFFSET UNITYSDK_OFFSET(0x15EDBB40)
#define IDMANGCKPFO_LCEKDLAMBKH_OFFSET UNITYSDK_OFFSET(0x15EDB7C0)
#define IDMANGCKPFO_MKAHIPBFFMI_OFFSET UNITYSDK_OFFSET(0x15EDBE80)
#define IDMANGCKPFO_NAFPFFBGKHH_OFFSET UNITYSDK_OFFSET(0x15EDBF30)
#define IDMANGCKPFO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15EDB020)
#define IDMANGCKPFO_SET_ENABLESPECIFICREGIONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15EDACE0)

	class IDMANGCKPFO : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* DCAONJMLMFD; // 0x10
		::RPG::GameCore::PerformanceRegionConfig* HMPDKCFLOFJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* BELODKMCMBA; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* IMBCBILBDJE; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DPLKDAELAMF; // 0x30
		::System::String* KILNEFGPOPP; // 0x38
		::System::String* AJAMCHDOGKA; // 0x40
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x48
		::System::Boolean ABAMGGLADEB; // 0x50
		::System::Boolean OPJJIHEMPMN; // 0x51
		::System::Boolean DNEANHCFEGC; // 0x52
		::System::Boolean ECCDAOFMKJL; // 0x53
		::System::Boolean GCGHEEAJDHF; // 0x54
		::System::Boolean BEJMCPDBCAN; // 0x55
		::System::Boolean ACHFNFCHNBC; // 0x56
		::System::Byte _padding0[0x1];
		::IDMANGCKPFO_RegionStrategy FAPADHGKAPO; // 0x58
		static ::System::Boolean* StaticGet__EnableSpecificRegionStrategy_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IDMANGCKPFO")->GetStaticField(0x12740);
		}

		// static const ::System::String* BBINBEOGDCJ; // 0x0
		// static const ::System::String* IKMIGELDJHD; // 0x0
		// static const ::System::String* MLGMEBAPOMB; // 0x0
		// static const ::System::String* BJBJIPKIANF; // 0x0
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + IDMANGCKPFO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean get_EnableSpecificRegionStrategy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IDMANGCKPFO_GET_ENABLESPECIFICREGIONSTRATEGY_OFFSET))();
		}

		static ::System::Void set_EnableSpecificRegionStrategy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + IDMANGCKPFO_SET_ENABLESPECIFICREGIONSTRATEGY_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANGCKPFO_DISPOSE_OFFSET))(this);
		}

		::System::Void DKFBHIADJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANGCKPFO_DKFBHIADJBD_OFFSET))(this);
		}

		::System::Void LCEKDLAMBKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANGCKPFO_LCEKDLAMBKH_OFFSET))(this);
		}

		::System::Void IJABIGFGMIK(::System::Int32 a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + IDMANGCKPFO_IJABIGFGMIK_OFFSET))(this, a1, a2);
		}

		::System::Void ANJLLLINCJE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDMANGCKPFO_ANJLLLINCJE_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANGCKPFO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean AINKPFDBNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANGCKPFO_AINKPFDBNGM_OFFSET))(this);
		}

		::System::Boolean AOEBIFOKELL(::RPG::GameCore::ELevelPerformanceType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IDMANGCKPFO_AOEBIFOKELL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void NAFPFFBGKHH(::Il2CppArray<::System::String*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + IDMANGCKPFO_NAFPFFBGKHH_OFFSET))(a1, a2);
		}

		::System::Boolean JDNNDNONFFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDMANGCKPFO_JDNNDNONFFA_OFFSET))(this, a1);
		}

		::System::Void GEPPDMOCODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANGCKPFO_GEPPDMOCODP_OFFSET))(this);
		}

		::System::Void MKAHIPBFFMI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDMANGCKPFO_MKAHIPBFFMI_OFFSET))(this, a1);
		}

	};

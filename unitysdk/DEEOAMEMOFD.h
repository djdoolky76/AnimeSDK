#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEEOAMEMOFD_OnlyUseCameraPosToTickLodReason.h"
#include "unitysdk/JLEFPBCCAGJ.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BKOIMIBEGIE;
class DGPKLNNFELK;
class JIAJFGCHLJE;
class OPAEFGOHJEB;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class TickLodConfig; }
namespace RPG::GameCore { class TickLodDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEEOAMEMOFD_AMGPBLGKJAF_OFFSET UNITYSDK_OFFSET(0xE507270)
#define DEEOAMEMOFD_CCTOR_OFFSET UNITYSDK_OFFSET(0xE509B50)
#define DEEOAMEMOFD_CTOR_OFFSET UNITYSDK_OFFSET(0xE507750)
#define DEEOAMEMOFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE508140)
#define DEEOAMEMOFD_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xE508EA0)
#define DEEOAMEMOFD_FBKDODMEFDL_OFFSET UNITYSDK_OFFSET(0xE5072F0)
#define DEEOAMEMOFD_FHANIMEJGAE_OFFSET UNITYSDK_OFFSET(0xE507E90)
#define DEEOAMEMOFD_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xE509B30)
#define DEEOAMEMOFD_HAILEHNFLIP_OFFSET UNITYSDK_OFFSET(0xE508E50)
#define DEEOAMEMOFD_HCFCGNDFDCG_OFFSET UNITYSDK_OFFSET(0xE507E20)
#define DEEOAMEMOFD_HKECFIIEDNK_OFFSET UNITYSDK_OFFSET(0xE5084D0)
#define DEEOAMEMOFD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xE509940)
#define DEEOAMEMOFD_IGBILCMNKMD_OFFSET UNITYSDK_OFFSET(0xE508800)
#define DEEOAMEMOFD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE508600)
#define DEEOAMEMOFD_KAGLHIENDBD_OFFSET UNITYSDK_OFFSET(0xE507240)
#define DEEOAMEMOFD_KCEEDMBPHDE_OFFSET UNITYSDK_OFFSET(0xE5076C0)
#define DEEOAMEMOFD_KJGJNBMMMLF_OFFSET UNITYSDK_OFFSET(0xE5074E0)
#define DEEOAMEMOFD_LHAHMFHAKAE_OFFSET UNITYSDK_OFFSET(0xE508B60)
#define DEEOAMEMOFD_MDCMGOHFFDM_OFFSET UNITYSDK_OFFSET(0xE509570)
#define DEEOAMEMOFD_MLNOJLEBDPP_OFFSET UNITYSDK_OFFSET(0xE508420)
#define DEEOAMEMOFD_MOMJNELKBPM_OFFSET UNITYSDK_OFFSET(0xE508A60)
#define DEEOAMEMOFD_NPCJCINAJEH_OFFSET UNITYSDK_OFFSET(0xE5094C0)
#define DEEOAMEMOFD_OCDPFGAMNEG_OFFSET UNITYSDK_OFFSET(0xE508D50)
#define DEEOAMEMOFD_PAIIJJHMDOH_OFFSET UNITYSDK_OFFSET(0xE5079E0)
#define DEEOAMEMOFD_PJFJOKODKLJ_OFFSET UNITYSDK_OFFSET(0xE507540)
#define DEEOAMEMOFD_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xE509B40)

inline static constexpr unsigned int DEEOAMEMOFD_TypeDefinitionIndex = 57789;

	class DEEOAMEMOFD : public ::System::Object
	{
	public:
		::JIAJFGCHLJE* _BoundsOccluderForJob_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::OPAEFGOHJEB*>* LEJLIIGIMEC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DGPKLNNFELK*>* HPEHFHOBIGG; // 0x20
		::System::Collections::Generic::List_1<::OPAEFGOHJEB*>* JJOFPLMDCMK; // 0x28
		::System::Collections::Generic::List_1<::OPAEFGOHJEB*>* MALPDHPDPDB; // 0x30
		::BKOIMIBEGIE* HKPLKLDIFCM; // 0x38
		::RPG::GameCore::TickLodConfig* KNFFAILGFIF; // 0x40
		::JLEFPBCCAGJ LHANPGLMHMD; // 0x48
		::System::Nullable_1<::Unity::Jobs::JobHandle> CDBGDBNJOPF; // 0x58
		::System::Byte _padding0[0x10];
		::System::Boolean DKDLKJHNHNC; // 0x70
		::System::Boolean CPKCLCNMGHP; // 0x71
		::System::Boolean DIECPKPBDEN; // 0x72
		static ::System::String** StaticGet_ALNNBGGIINB()
		{
			return (::System::String**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F3E0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DHENEGNOJBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F3E8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BAHJOMPJPND()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F3F0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BHHLPBCJLBH()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F3F8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_OBPPGKLKLPB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F400);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_AKFFPNIDIMF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F408);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ACGJKBIKNMN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x5F410);
		}

		static ::System::Boolean* StaticGet_BPFGBEHONML()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x14570);
		}

		static ::System::UInt32* StaticGet_EIEICCFEMBE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "DEEOAMEMOFD")->GetStaticField(0x14574);
		}

		// static const ::System::Object KOHPHHHOCDK; // 0x0
		// static const ::System::Object EDECNPIJNED; // 0x0
		// static const ::System::Object MLCFELCKDEN; // 0x0
		// static const ::System::Object PDMANDMHGFL; // 0x0
		// static const ::System::Object HDENIAOLNCJ; // 0x0
		// static const ::System::Object EBONJKEDGMB; // 0x0
		// static const ::System::Object HIMAGKLPMOD; // 0x0
		// static const ::System::String* ALHJGBFOKAN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEEOAMEMOFD_CCTOR_OFFSET))();
		}

		static ::System::Boolean KAGLHIENDBD()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEEOAMEMOFD_KAGLHIENDBD_OFFSET))();
		}

		static ::System::Void AMGPBLGKJAF(::System::Boolean a1, ::DEEOAMEMOFD_OnlyUseCameraPosToTickLodReason a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::DEEOAMEMOFD_OnlyUseCameraPosToTickLodReason))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_AMGPBLGKJAF_OFFSET))(a1, a2);
		}

		static ::System::Void FBKDODMEFDL(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_FBKDODMEFDL_OFFSET))(a1, a2);
		}

		static ::System::Void PJFJOKODKLJ(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::PropConfig* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::PropConfig*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_PJFJOKODKLJ_OFFSET))(a1, a2, a3);
		}

		::System::Void HCFCGNDFDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_HCFCGNDFDCG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_DISPOSE_OFFSET))(this);
		}

		::System::Void HKECFIIEDNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_HKECFIIEDNK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MOMJNELKBPM(::OPAEFGOHJEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPAEFGOHJEB*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_MOMJNELKBPM_OFFSET))(this, a1);
		}

		::System::Void LHAHMFHAKAE(::OPAEFGOHJEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPAEFGOHJEB*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_LHAHMFHAKAE_OFFSET))(this, a1);
		}

		::System::Void OCDPFGAMNEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_OCDPFGAMNEG_OFFSET))(this);
		}

		::System::Void MLNOJLEBDPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_MLNOJLEBDPP_OFFSET))(this);
		}

		::System::Void IGBILCMNKMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_IGBILCMNKMD_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void NPCJCINAJEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_NPCJCINAJEH_OFFSET))(this);
		}

		::RPG::GameCore::TickLodDetail* MDCMGOHFFDM(::System::String* a1, ::System::Single a2)
		{
			return ((::RPG::GameCore::TickLodDetail*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_MDCMGOHFFDM_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		static ::System::Boolean KCEEDMBPHDE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_KCEEDMBPHDE_OFFSET))(a1);
		}

		static ::System::Boolean KJGJNBMMMLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_KJGJNBMMMLF_OFFSET))(a1);
		}

		::System::Void HAILEHNFLIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_HAILEHNFLIP_OFFSET))(this);
		}

		::System::Void FHANIMEJGAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_FHANIMEJGAE_OFFSET))(this);
		}

		::System::Void PAIIJJHMDOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_PAIIJJHMDOH_OFFSET))(this);
		}

		::JIAJFGCHLJE* get_BoundsOccluderForJob()
		{
			return ((::JIAJFGCHLJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
		}

		::System::Void set_BoundsOccluderForJob(::JIAJFGCHLJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIAJFGCHLJE*))((::PBYTE)hIl2Cpp + DEEOAMEMOFD_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, a1);
		}

	};

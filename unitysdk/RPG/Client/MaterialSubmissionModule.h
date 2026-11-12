#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"
class JNEJKGNDADC;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MaterialSubmitter; }
namespace RPG::Client { class MaterialSubmitterGroup; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWREWARDTAKENPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE02F620)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWSUBMITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE02F590)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMEREWARD_OFFSET UNITYSDK_OFFSET(0xE02F670)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMESUBMITTEDSUBMITTERID_OFFSET UNITYSDK_OFFSET(0xE02F5D0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xE02FBF0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTERGROUP_OFFSET UNITYSDK_OFFSET(0xE02E400)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTER_OFFSET UNITYSDK_OFFSET(0xE02F040)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE02EBB0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xE02E8E0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE02EDD0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xE02EE10)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__BUILDMAP_OFFSET UNITYSDK_OFFSET(0xE02EC00)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__GETORCREATESUBMITTERGROUP_OFFSET UNITYSDK_OFFSET(0xE02F320)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONGETMATERIALSUBMITACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xE02F710)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONSUBMITMATERIALSUBMITACTIVITYMATERIALSCRSP_OFFSET UNITYSDK_OFFSET(0xE02F7C0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONTAKEMATERIALSUBMITACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xE02F8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmissionModule_TypeDefinitionIndex = 63198;

	class MaterialSubmissionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemToGroupMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitterGroup*>* _SubmitterGroups; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>* _Submitters; // 0x20
		::JNEJKGNDADC* _ServerAgent; // 0x28
		::Proto::ItemList* _RewardCahce; // 0x30
		::System::Nullable_1<::System::UInt32> _SubmittedSubmitterIDCache; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitter* GetMaterialSubmitter(::System::UInt32 a1)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTER_OFFSET))(this, a1);
		}

		::RPG::Client::MaterialSubmitterGroup* GetMaterialSubmitterGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTERGROUP_OFFSET))(this, a1);
		}

		::System::Boolean CheckNeedShowSubmitPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWSUBMITPERFORMANCE_OFFSET))(this);
		}

		::System::UInt32 ConsumeSubmittedSubmitterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMESUBMITTEDSUBMITTERID_OFFSET))(this);
		}

		::System::Boolean CheckNeedShowRewardTakenPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWREWARDTAKENPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ConsumeReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMEREWARD_OFFSET))(this);
		}

		::System::Void _OnGetMaterialSubmitActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONGETMATERIALSUBMITACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSubmitMaterialSubmitActivityMaterialScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONSUBMITMATERIALSUBMITACTIVITYMATERIALSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeMaterialSubmitActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONTAKEMATERIALSUBMITACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__BUILDMAP_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitterGroup* _GetOrCreateSubmitterGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__GETORCREATESUBMITTERGROUP_OFFSET))(this, a1);
		}

	};
}

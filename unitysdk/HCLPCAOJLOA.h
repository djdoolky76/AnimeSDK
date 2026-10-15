#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJEAHAODOHJ.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_CustomRuleType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/HoYoGroupType.h"
#include "unitysdk/GJMPEIGLHJK.h"
#include "unitysdk/OANLHANJEII.h"
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCLPCAOJLOA_AJDCJPHOJJN_OFFSET UNITYSDK_OFFSET(0x15C16BD0)
#define HCLPCAOJLOA_ANJHOFFOGDG_OFFSET UNITYSDK_OFFSET(0x15C16230)
#define HCLPCAOJLOA_APIGBAJFHHC_OFFSET UNITYSDK_OFFSET(0x15C15F30)
#define HCLPCAOJLOA_BICGIGBMJHJ_OFFSET UNITYSDK_OFFSET(0x15C161B0)
#define HCLPCAOJLOA_CHGGGFGLFOO_OFFSET UNITYSDK_OFFSET(0x15C17030)
#define HCLPCAOJLOA_CNHBNFMADCG_OFFSET UNITYSDK_OFFSET(0x15C15EE0)
#define HCLPCAOJLOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C15CD0)
#define HCLPCAOJLOA_DCJFAGACPBF_OFFSET UNITYSDK_OFFSET(0x15C16DC0)
#define HCLPCAOJLOA_DJDDHKENIML_OFFSET UNITYSDK_OFFSET(0x15C16320)
#define HCLPCAOJLOA_DJPICHMJNAO_OFFSET UNITYSDK_OFFSET(0x15C168C0)
#define HCLPCAOJLOA_DNJHHFHCLDK_OFFSET UNITYSDK_OFFSET(0x15C16740)
#define HCLPCAOJLOA_EEKHJLIHCDN_OFFSET UNITYSDK_OFFSET(0x15C16A30)
#define HCLPCAOJLOA_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0x15C15CE0)
#define HCLPCAOJLOA_FFNJDGBBBJC_OFFSET UNITYSDK_OFFSET(0x15C16130)
#define HCLPCAOJLOA_FKCFGEALEHN_OFFSET UNITYSDK_OFFSET(0x15C17330)
#define HCLPCAOJLOA_FNBJADKPJPP_OFFSET UNITYSDK_OFFSET(0x15C164C0)
#define HCLPCAOJLOA_GEJAMIAPLDG_OFFSET UNITYSDK_OFFSET(0x15C162A0)
#define HCLPCAOJLOA_HBPAGDDFBAM_OFFSET UNITYSDK_OFFSET(0x15C16FC0)
#define HCLPCAOJLOA_HFBJMLOIECF_OFFSET UNITYSDK_OFFSET(0x15C163B0)
#define HCLPCAOJLOA_ICJKHONHBLB_OFFSET UNITYSDK_OFFSET(0x15C15DA0)
#define HCLPCAOJLOA_ILFJNKOMBMJ_OFFSET UNITYSDK_OFFSET(0x15C16430)
#define HCLPCAOJLOA_IOBACAGGCJN_OFFSET UNITYSDK_OFFSET(0x15C169F0)
#define HCLPCAOJLOA_KFCJIKKBMNN_OFFSET UNITYSDK_OFFSET(0x15C16560)
#define HCLPCAOJLOA_LNHHNGKLJCP_OFFSET UNITYSDK_OFFSET(0x15C16CF0)
#define HCLPCAOJLOA_NCCAFIMGFPP_OFFSET UNITYSDK_OFFSET(0x15C15E40)
#define HCLPCAOJLOA_NFJNOEPGKNB_OFFSET UNITYSDK_OFFSET(0x15C160B0)
#define HCLPCAOJLOA_NLJEBHPDDFN_OFFSET UNITYSDK_OFFSET(0x15C15FB0)
#define HCLPCAOJLOA_OFIMIEJMOGE_OFFSET UNITYSDK_OFFSET(0x15C16B00)
#define HCLPCAOJLOA_OPBHAHBPLFM_OFFSET UNITYSDK_OFFSET(0x15C16810)
#define HCLPCAOJLOA_PFIDIFFEJCG_OFFSET UNITYSDK_OFFSET(0x15C16860)
#define HCLPCAOJLOA_PINALIPFLCF_OFFSET UNITYSDK_OFFSET(0x15C165F0)
#define HCLPCAOJLOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C17410)

inline static constexpr unsigned int HCLPCAOJLOA_TypeDefinitionIndex = 62033;

	class HCLPCAOJLOA : public ::AJEAHAODOHJ
	{
	public:
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* KPKMKFIJEDJ; // 0x10
		::System::UInt32 DLHOKIMOHFG; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean ENKPHKGECEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_ENKPHKGECEJ_OFFSET))(this);
		}

		::System::UInt32 ICJKHONHBLB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_ICJKHONHBLB_OFFSET))(this);
		}

		::System::Int32 NCCAFIMGFPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_NCCAFIMGFPP_OFFSET))(this);
		}

		::System::Boolean CNHBNFMADCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_CNHBNFMADCG_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* APIGBAJFHHC()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_APIGBAJFHHC_OFFSET))(this);
		}

		::GJMPEIGLHJK NLJEBHPDDFN()
		{
			return ((::GJMPEIGLHJK(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_NLJEBHPDDFN_OFFSET))(this);
		}

		::System::Void NFJNOEPGKNB(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_NFJNOEPGKNB_OFFSET))(this, a1);
		}

		::System::Boolean FFNJDGBBBJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_FFNJDGBBBJC_OFFSET))(this);
		}

		::System::Void BICGIGBMJHJ(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_BICGIGBMJHJ_OFFSET))(this, a1);
		}

		::System::Boolean ANJHOFFOGDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_ANJHOFFOGDG_OFFSET))(this);
		}

		::System::Void GEJAMIAPLDG(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_GEJAMIAPLDG_OFFSET))(this, a1);
		}

		::System::Boolean DJDDHKENIML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_DJDDHKENIML_OFFSET))(this);
		}

		::System::Void HFBJMLOIECF(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_HFBJMLOIECF_OFFSET))(this, a1);
		}

		::System::Boolean ILFJNKOMBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_ILFJNKOMBMJ_OFFSET))(this);
		}

		::System::Void FNBJADKPJPP(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType, ::System::Boolean))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_FNBJADKPJPP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFCJIKKBMNN(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_KFCJIKKBMNN_OFFSET))(this, a1);
		}

		::System::Boolean PINALIPFLCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_PINALIPFLCF_OFFSET))(this);
		}

		::RPG::GameCore::GroupCategory DNJHHFHCLDK()
		{
			return ((::RPG::GameCore::GroupCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_DNJHHFHCLDK_OFFSET))(this);
		}

		::System::UInt32 OPBHAHBPLFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_OPBHAHBPLFM_OFFSET))(this);
		}

		::System::Void PFIDIFFEJCG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_PFIDIFFEJCG_OFFSET))(this, a1);
		}

		::System::UInt32 DJPICHMJNAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_DJPICHMJNAO_OFFSET))(this);
		}

		::System::UInt32 IOBACAGGCJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_IOBACAGGCJN_OFFSET))(this);
		}

		::System::UInt32 EEKHJLIHCDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_EEKHJLIHCDN_OFFSET))(this);
		}

		::RPG::GameCore::HoYoGroupType OFIMIEJMOGE()
		{
			return ((::RPG::GameCore::HoYoGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_OFIMIEJMOGE_OFFSET))(this);
		}

		::OANLHANJEII AJDCJPHOJJN()
		{
			return ((::OANLHANJEII(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_AJDCJPHOJJN_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* LNHHNGKLJCP()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_LNHHNGKLJCP_OFFSET))(this);
		}

		::System::Boolean DCJFAGACPBF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_DCJFAGACPBF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* HBPAGDDFBAM()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_HBPAGDDFBAM_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* CHGGGFGLFOO()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_CHGGGFGLFOO_OFFSET))(this);
		}

		::System::Int32 FKCFGEALEHN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_FKCFGEALEHN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCAOJLOA_TOSTRING_OFFSET))(this);
		}

	};

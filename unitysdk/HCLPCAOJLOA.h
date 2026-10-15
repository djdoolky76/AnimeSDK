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

#define HCLPCAOJLOA_AJDCJPHOJJN_OFFSET UNITYSDK_OFFSET(0x15C23900)
#define HCLPCAOJLOA_ANJHOFFOGDG_OFFSET UNITYSDK_OFFSET(0x15C22F50)
#define HCLPCAOJLOA_APIGBAJFHHC_OFFSET UNITYSDK_OFFSET(0x15C22C60)
#define HCLPCAOJLOA_BICGIGBMJHJ_OFFSET UNITYSDK_OFFSET(0x15C22ED0)
#define HCLPCAOJLOA_CHGGGFGLFOO_OFFSET UNITYSDK_OFFSET(0x15C23D60)
#define HCLPCAOJLOA_CNHBNFMADCG_OFFSET UNITYSDK_OFFSET(0x15C22C10)
#define HCLPCAOJLOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C22A00)
#define HCLPCAOJLOA_DCJFAGACPBF_OFFSET UNITYSDK_OFFSET(0x15C23AF0)
#define HCLPCAOJLOA_DJDDHKENIML_OFFSET UNITYSDK_OFFSET(0x15C23040)
#define HCLPCAOJLOA_DJPICHMJNAO_OFFSET UNITYSDK_OFFSET(0x15C235F0)
#define HCLPCAOJLOA_DNJHHFHCLDK_OFFSET UNITYSDK_OFFSET(0x15C23470)
#define HCLPCAOJLOA_EEKHJLIHCDN_OFFSET UNITYSDK_OFFSET(0x15C23760)
#define HCLPCAOJLOA_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0x15C22A10)
#define HCLPCAOJLOA_FFNJDGBBBJC_OFFSET UNITYSDK_OFFSET(0x15C22E60)
#define HCLPCAOJLOA_FKCFGEALEHN_OFFSET UNITYSDK_OFFSET(0x15C24060)
#define HCLPCAOJLOA_FNBJADKPJPP_OFFSET UNITYSDK_OFFSET(0x15C231E0)
#define HCLPCAOJLOA_GEJAMIAPLDG_OFFSET UNITYSDK_OFFSET(0x15C22FC0)
#define HCLPCAOJLOA_HBPAGDDFBAM_OFFSET UNITYSDK_OFFSET(0x15C23CF0)
#define HCLPCAOJLOA_HFBJMLOIECF_OFFSET UNITYSDK_OFFSET(0x15C230D0)
#define HCLPCAOJLOA_ICJKHONHBLB_OFFSET UNITYSDK_OFFSET(0x15C22AD0)
#define HCLPCAOJLOA_ILFJNKOMBMJ_OFFSET UNITYSDK_OFFSET(0x15C23150)
#define HCLPCAOJLOA_IOBACAGGCJN_OFFSET UNITYSDK_OFFSET(0x15C23720)
#define HCLPCAOJLOA_KFCJIKKBMNN_OFFSET UNITYSDK_OFFSET(0x15C23290)
#define HCLPCAOJLOA_LNHHNGKLJCP_OFFSET UNITYSDK_OFFSET(0x15C23A20)
#define HCLPCAOJLOA_NCCAFIMGFPP_OFFSET UNITYSDK_OFFSET(0x15C22B70)
#define HCLPCAOJLOA_NFJNOEPGKNB_OFFSET UNITYSDK_OFFSET(0x15C22DE0)
#define HCLPCAOJLOA_NLJEBHPDDFN_OFFSET UNITYSDK_OFFSET(0x15C22CE0)
#define HCLPCAOJLOA_OFIMIEJMOGE_OFFSET UNITYSDK_OFFSET(0x15C23830)
#define HCLPCAOJLOA_OPBHAHBPLFM_OFFSET UNITYSDK_OFFSET(0x15C23540)
#define HCLPCAOJLOA_PFIDIFFEJCG_OFFSET UNITYSDK_OFFSET(0x15C23590)
#define HCLPCAOJLOA_PINALIPFLCF_OFFSET UNITYSDK_OFFSET(0x15C23320)
#define HCLPCAOJLOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C24140)

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

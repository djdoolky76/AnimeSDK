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
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAAOAFIHHEM_AJDCJPHOJJN_OFFSET UNITYSDK_OFFSET(0xBA4C7F0)
#define NAAOAFIHHEM_ANJHOFFOGDG_OFFSET UNITYSDK_OFFSET(0xBA4C240)
#define NAAOAFIHHEM_APIGBAJFHHC_OFFSET UNITYSDK_OFFSET(0xBA4C060)
#define NAAOAFIHHEM_BICGIGBMJHJ_OFFSET UNITYSDK_OFFSET(0xBA4C1F0)
#define NAAOAFIHHEM_CHGGGFGLFOO_OFFSET UNITYSDK_OFFSET(0xBA4CAC0)
#define NAAOAFIHHEM_CNHBNFMADCG_OFFSET UNITYSDK_OFFSET(0xBA4C010)
#define NAAOAFIHHEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4BED0)
#define NAAOAFIHHEM_DCJFAGACPBF_OFFSET UNITYSDK_OFFSET(0xBA4C930)
#define NAAOAFIHHEM_DJDDHKENIML_OFFSET UNITYSDK_OFFSET(0xBA4C2E0)
#define NAAOAFIHHEM_DJPICHMJNAO_OFFSET UNITYSDK_OFFSET(0xBA4C630)
#define NAAOAFIHHEM_DNJHHFHCLDK_OFFSET UNITYSDK_OFFSET(0xBA4C4E0)
#define NAAOAFIHHEM_EEKHJLIHCDN_OFFSET UNITYSDK_OFFSET(0xBA4C720)
#define NAAOAFIHHEM_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0xBA4BEF0)
#define NAAOAFIHHEM_FFNJDGBBBJC_OFFSET UNITYSDK_OFFSET(0xBA4C1A0)
#define NAAOAFIHHEM_FKCFGEALEHN_OFFSET UNITYSDK_OFFSET(0xBA4CD00)
#define NAAOAFIHHEM_FNBJADKPJPP_OFFSET UNITYSDK_OFFSET(0xBA4C3D0)
#define NAAOAFIHHEM_GEJAMIAPLDG_OFFSET UNITYSDK_OFFSET(0xBA4C290)
#define NAAOAFIHHEM_HBPAGDDFBAM_OFFSET UNITYSDK_OFFSET(0xBA4CA70)
#define NAAOAFIHHEM_HFBJMLOIECF_OFFSET UNITYSDK_OFFSET(0xBA4C330)
#define NAAOAFIHHEM_ICJKHONHBLB_OFFSET UNITYSDK_OFFSET(0xBA4BF70)
#define NAAOAFIHHEM_ILFJNKOMBMJ_OFFSET UNITYSDK_OFFSET(0xBA4C380)
#define NAAOAFIHHEM_IOBACAGGCJN_OFFSET UNITYSDK_OFFSET(0xBA4C6E0)
#define NAAOAFIHHEM_KFCJIKKBMNN_OFFSET UNITYSDK_OFFSET(0xBA4C440)
#define NAAOAFIHHEM_LNHHNGKLJCP_OFFSET UNITYSDK_OFFSET(0xBA4C8B0)
#define NAAOAFIHHEM_NCCAFIMGFPP_OFFSET UNITYSDK_OFFSET(0xBA4BFC0)
#define NAAOAFIHHEM_NFJNOEPGKNB_OFFSET UNITYSDK_OFFSET(0xBA4C150)
#define NAAOAFIHHEM_NLJEBHPDDFN_OFFSET UNITYSDK_OFFSET(0xBA4C0A0)
#define NAAOAFIHHEM_OFIMIEJMOGE_OFFSET UNITYSDK_OFFSET(0xBA4C760)
#define NAAOAFIHHEM_OPBHAHBPLFM_OFFSET UNITYSDK_OFFSET(0xBA4C560)
#define NAAOAFIHHEM_PFIDIFFEJCG_OFFSET UNITYSDK_OFFSET(0xBA4C5E0)
#define NAAOAFIHHEM_PINALIPFLCF_OFFSET UNITYSDK_OFFSET(0xBA4C4A0)
#define NAAOAFIHHEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA4CD90)

inline static constexpr unsigned int NAAOAFIHHEM_TypeDefinitionIndex = 62034;

	class NAAOAFIHHEM : public ::AJEAHAODOHJ
	{
	public:
		::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x10
		::System::UInt32 DLHOKIMOHFG; // 0x18
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState LMEKOPONEKE; // 0x1C
		::System::UInt64 EJMIAPEANPB; // 0x20
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState MDMGHEEOHCD; // 0x28
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState MLDKJNBEOGA; // 0x2C
		::System::UInt32 PEEFHNHDBMF; // 0x30
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState DNJPMMJAAFH; // 0x34
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::RuntimeGroupInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ENKPHKGECEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_ENKPHKGECEJ_OFFSET))(this);
		}

		::System::UInt32 ICJKHONHBLB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_ICJKHONHBLB_OFFSET))(this);
		}

		::System::Int32 NCCAFIMGFPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_NCCAFIMGFPP_OFFSET))(this);
		}

		::System::Boolean CNHBNFMADCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_CNHBNFMADCG_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* APIGBAJFHHC()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_APIGBAJFHHC_OFFSET))(this);
		}

		::GJMPEIGLHJK NLJEBHPDDFN()
		{
			return ((::GJMPEIGLHJK(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_NLJEBHPDDFN_OFFSET))(this);
		}

		::System::Void NFJNOEPGKNB(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_NFJNOEPGKNB_OFFSET))(this, a1);
		}

		::System::Boolean FFNJDGBBBJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_FFNJDGBBBJC_OFFSET))(this);
		}

		::System::Void BICGIGBMJHJ(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_BICGIGBMJHJ_OFFSET))(this, a1);
		}

		::System::Boolean ANJHOFFOGDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_ANJHOFFOGDG_OFFSET))(this);
		}

		::System::Void GEJAMIAPLDG(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_GEJAMIAPLDG_OFFSET))(this, a1);
		}

		::System::Boolean DJDDHKENIML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_DJDDHKENIML_OFFSET))(this);
		}

		::System::Void HFBJMLOIECF(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_HFBJMLOIECF_OFFSET))(this, a1);
		}

		::System::Boolean ILFJNKOMBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_ILFJNKOMBMJ_OFFSET))(this);
		}

		::System::Void FNBJADKPJPP(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType, ::System::Boolean))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_FNBJADKPJPP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFCJIKKBMNN(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_KFCJIKKBMNN_OFFSET))(this, a1);
		}

		::System::Boolean PINALIPFLCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_PINALIPFLCF_OFFSET))(this);
		}

		::RPG::GameCore::GroupCategory DNJHHFHCLDK()
		{
			return ((::RPG::GameCore::GroupCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_DNJHHFHCLDK_OFFSET))(this);
		}

		::System::UInt32 OPBHAHBPLFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_OPBHAHBPLFM_OFFSET))(this);
		}

		::System::Void PFIDIFFEJCG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_PFIDIFFEJCG_OFFSET))(this, a1);
		}

		::System::UInt32 DJPICHMJNAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_DJPICHMJNAO_OFFSET))(this);
		}

		::System::UInt32 IOBACAGGCJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_IOBACAGGCJN_OFFSET))(this);
		}

		::System::UInt32 EEKHJLIHCDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_EEKHJLIHCDN_OFFSET))(this);
		}

		::RPG::GameCore::HoYoGroupType OFIMIEJMOGE()
		{
			return ((::RPG::GameCore::HoYoGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_OFIMIEJMOGE_OFFSET))(this);
		}

		::OANLHANJEII AJDCJPHOJJN()
		{
			return ((::OANLHANJEII(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_AJDCJPHOJJN_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* LNHHNGKLJCP()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_LNHHNGKLJCP_OFFSET))(this);
		}

		::System::Boolean DCJFAGACPBF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_DCJFAGACPBF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* HBPAGDDFBAM()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_HBPAGDDFBAM_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* CHGGGFGLFOO()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_CHGGGFGLFOO_OFFSET))(this);
		}

		::System::Int32 FKCFGEALEHN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_FKCFGEALEHN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAOAFIHHEM_TOSTRING_OFFSET))(this);
		}

	};

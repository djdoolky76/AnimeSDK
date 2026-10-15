#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MGODMMLBALG_BLMBJLHMLHG_OFFSET UNITYSDK_OFFSET(0xB929C30)
#define MGODMMLBALG_CIGJGDOGBMJ_OFFSET UNITYSDK_OFFSET(0xB9299D0)
#define MGODMMLBALG_CTOR_OFFSET UNITYSDK_OFFSET(0xB929860)
#define MGODMMLBALG_GET_ISASSISTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB92A4E0)
#define MGODMMLBALG_GET_USINGASSISTGROUPID_OFFSET UNITYSDK_OFFSET(0xB92A4C0)
#define MGODMMLBALG_GET_USINGRETURNID_OFFSET UNITYSDK_OFFSET(0xB92A4A0)
#define MGODMMLBALG_GET_USINGTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0xB92A500)
#define MGODMMLBALG_HKLIPCELMBG_OFFSET UNITYSDK_OFFSET(0xB92A440)
#define MGODMMLBALG_HNLEJKFHPFB_OFFSET UNITYSDK_OFFSET(0xB92A160)
#define MGODMMLBALG_KADMDEOPOBB_OFFSET UNITYSDK_OFFSET(0xB92A330)
#define MGODMMLBALG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB929CF0)
#define MGODMMLBALG_NCAGGKLDJNO_OFFSET UNITYSDK_OFFSET(0xB92A240)
#define MGODMMLBALG_OFNGMIBBMIF_OFFSET UNITYSDK_OFFSET(0xB929F10)
#define MGODMMLBALG_OIPEODBGGHL_OFFSET UNITYSDK_OFFSET(0xB929920)
#define MGODMMLBALG_PEEPNELNFAB_OFFSET UNITYSDK_OFFSET(0xB92A100)
#define MGODMMLBALG_SET_ISASSISTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB92A4F0)
#define MGODMMLBALG_SET_USINGASSISTGROUPID_OFFSET UNITYSDK_OFFSET(0xB92A4D0)
#define MGODMMLBALG_SET_USINGRETURNID_OFFSET UNITYSDK_OFFSET(0xB92A4B0)
#define MGODMMLBALG_SET_USINGTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0xB92A510)

inline static constexpr unsigned int MGODMMLBALG_TypeDefinitionIndex = 61889;

	class MGODMMLBALG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KOGKDDBPLKK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerReturnTrialAvatarGroup*>* GBJMOLLFCNM; // 0x18
		::RPG::Client::PlayerReturnTrialAvatarGroup* _UsingTrialAvatarGroup_k__BackingField; // 0x20
		::System::UInt32 _UsingAssistGroupID_k__BackingField; // 0x28
		::System::UInt32 _UsingReturnID_k__BackingField; // 0x2C
		::System::Boolean _IsAssistAvailable_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_CTOR_OFFSET))(this);
		}

		::RPG::Client::PlayerReturnTrialAvatarGroup* OIPEODBGGHL(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_OIPEODBGGHL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CIGJGDOGBMJ()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_CIGJGDOGBMJ_OFFSET))(this);
		}

		::System::Boolean BLMBJLHMLHG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_BLMBJLHMLHG_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void OFNGMIBBMIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_OFNGMIBBMIF_OFFSET))(this, a1);
		}

		::System::Void PEEPNELNFAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_PEEPNELNFAB_OFFSET))(this, a1);
		}

		::System::Void HNLEJKFHPFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGODMMLBALG_HNLEJKFHPFB_OFFSET))(this, a1);
		}

		::System::UInt32 NCAGGKLDJNO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_NCAGGKLDJNO_OFFSET))(this);
		}

		::System::Boolean KADMDEOPOBB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_KADMDEOPOBB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* HKLIPCELMBG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_HKLIPCELMBG_OFFSET))(this);
		}

		::System::UInt32 get_UsingReturnID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_GET_USINGRETURNID_OFFSET))(this);
		}

		::System::Void set_UsingReturnID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_SET_USINGRETURNID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UsingAssistGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_GET_USINGASSISTGROUPID_OFFSET))(this);
		}

		::System::Void set_UsingAssistGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGODMMLBALG_SET_USINGASSISTGROUPID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAssistAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_GET_ISASSISTAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsAssistAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGODMMLBALG_SET_ISASSISTAVAILABLE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerReturnTrialAvatarGroup* get_UsingTrialAvatarGroup()
		{
			return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG_GET_USINGTRIALAVATARGROUP_OFFSET))(this);
		}

		::System::Void set_UsingTrialAvatarGroup(::RPG::Client::PlayerReturnTrialAvatarGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerReturnTrialAvatarGroup*))((::PBYTE)hIl2Cpp + MGODMMLBALG_SET_USINGTRIALAVATARGROUP_OFFSET))(this, a1);
		}

	};

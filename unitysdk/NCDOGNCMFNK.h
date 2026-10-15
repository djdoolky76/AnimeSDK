#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define NCDOGNCMFNK_AEMILEDDCIP_OFFSET UNITYSDK_OFFSET(0xBB075C0)
#define NCDOGNCMFNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB06950)
#define NCDOGNCMFNK_ENFNHOEAKMF_OFFSET UNITYSDK_OFFSET(0xBB07000)
#define NCDOGNCMFNK_GET_AVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBB06F90)
#define NCDOGNCMFNK_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB06FB0)
#define NCDOGNCMFNK_GET_ISUNRELEASEDVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB06FC0)
#define NCDOGNCMFNK_GET_RANK_OFFSET UNITYSDK_OFFSET(0xBB06FD0)
#define NCDOGNCMFNK_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBB06FA0)
#define NCDOGNCMFNK_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xBB06F80)
#define NCDOGNCMFNK_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0xBB06FE0)
#define NCDOGNCMFNK_GET_UPGRADECOMMAND_OFFSET UNITYSDK_OFFSET(0xBB06FF0)
#define NCDOGNCMFNK_IFFNJAMKKAA_OFFSET UNITYSDK_OFFSET(0xBB07600)
#define NCDOGNCMFNK_LBPJICHOIEM_OFFSET UNITYSDK_OFFSET(0xBB074E0)
#define NCDOGNCMFNK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBB06B80)

	class NCDOGNCMFNK : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::String*>* _AvatarImagePath_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::Boolean>* _IsUnreleasedVisible_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::UInt32>* _Rarity_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::System::Int32>* _Rank_k__BackingField; // 0x38
		::CEEGMMCFCBG* _SelectCommand_k__BackingField; // 0x40
		::CEEGMMCFCBG* _UpgradeCommand_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::UInt32>* get_RoleId()
		{
			return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_ROLEID_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_AvatarImagePath()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_AVATARIMAGEPATH_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::UInt32>* get_Rarity()
		{
			return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_RARITY_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsRoleVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_ISROLEVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsUnreleasedVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_ISUNRELEASEDVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* get_Rank()
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_RANK_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_SelectCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_SELECTCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_UpgradeCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_GET_UPGRADECOMMAND_OFFSET))(this);
		}

		::System::Void ENFNHOEAKMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_ENFNHOEAKMF_OFFSET))(this, a1);
		}

		::System::Void LBPJICHOIEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_LBPJICHOIEM_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void AEMILEDDCIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_AEMILEDDCIP_OFFSET))(this);
		}

		::System::Void IFFNJAMKKAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDOGNCMFNK_IFFNJAMKKAA_OFFSET))(this);
		}

	};

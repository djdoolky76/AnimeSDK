#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define NCDOGNCMFNK_AEMILEDDCIP_OFFSET UNITYSDK_OFFSET(0xBB014D0)
#define NCDOGNCMFNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB00860)
#define NCDOGNCMFNK_ENFNHOEAKMF_OFFSET UNITYSDK_OFFSET(0xBB00F10)
#define NCDOGNCMFNK_GET_AVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBB00EA0)
#define NCDOGNCMFNK_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB00EC0)
#define NCDOGNCMFNK_GET_ISUNRELEASEDVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB00ED0)
#define NCDOGNCMFNK_GET_RANK_OFFSET UNITYSDK_OFFSET(0xBB00EE0)
#define NCDOGNCMFNK_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBB00EB0)
#define NCDOGNCMFNK_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xBB00E90)
#define NCDOGNCMFNK_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0xBB00EF0)
#define NCDOGNCMFNK_GET_UPGRADECOMMAND_OFFSET UNITYSDK_OFFSET(0xBB00F00)
#define NCDOGNCMFNK_IFFNJAMKKAA_OFFSET UNITYSDK_OFFSET(0xBB01510)
#define NCDOGNCMFNK_LBPJICHOIEM_OFFSET UNITYSDK_OFFSET(0xBB013F0)
#define NCDOGNCMFNK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBB00A90)

inline static constexpr unsigned int NCDOGNCMFNK_TypeDefinitionIndex = 49719;

	class NCDOGNCMFNK : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::String*>* _AvatarImagePath_k__BackingField; // 0x10
		::CEEGMMCFCBG* _UpgradeCommand_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::Int32>* _Rank_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::UInt32>* _Rarity_k__BackingField; // 0x30
		::CEEGMMCFCBG* _SelectCommand_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x40
		::R3::ReactiveProperty_1<::System::Boolean>* _IsUnreleasedVisible_k__BackingField; // 0x48
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

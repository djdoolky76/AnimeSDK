#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class GPKMKOEJPNE;
class HKBMKMJHKBG;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define HKBMKMJHKBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3D640)
#define HKBMKMJHKBG_GET_AVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x15D3E3E0)
#define HKBMKMJHKBG_GET_BUYCOMMAND_OFFSET UNITYSDK_OFFSET(0x15D3E420)
#define HKBMKMJHKBG_GET_BUYITEMMSG_OFFSET UNITYSDK_OFFSET(0x15D3E410)
#define HKBMKMJHKBG_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15D3E3A0)
#define HKBMKMJHKBG_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x15D3E3B0)
#define HKBMKMJHKBG_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x15D3E3C0)
#define HKBMKMJHKBG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15D3E3D0)
#define HKBMKMJHKBG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15D3E400)
#define HKBMKMJHKBG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x15D3E3F0)
#define HKBMKMJHKBG_IIOLDHGDCIB_OFFSET UNITYSDK_OFFSET(0x15D3DDB0)
#define HKBMKMJHKBG_KALGICMBPGM_OFFSET UNITYSDK_OFFSET(0x15D3DD10)
#define HKBMKMJHKBG_OFBKADIKPGF_OFFSET UNITYSDK_OFFSET(0x15D3E430)
#define HKBMKMJHKBG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15D3D8D0)

	class HKBMKMJHKBG : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::String*>* _AvatarImagePath_k__BackingField; // 0x20
		::CEEGMMCFCBG* _BuyCommand_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::RPG::Client::TextID>* _Name_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::GPKMKOEJPNE*>* _BuyItemMsg_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::UInt32>* _Rarity_k__BackingField; // 0x40
		::R3::ReactiveProperty_1<::System::Boolean>* _IsEmpty_k__BackingField; // 0x48
		::System::Int32 _Index_k__BackingField; // 0x50
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_CTOR_OFFSET))(this, a1);
		}

		static ::HKBMKMJHKBG* KALGICMBPGM(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::HKBMKMJHKBG*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_KALGICMBPGM_OFFSET))(a1, a2);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_INDEX_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsEmpty()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_ISEMPTY_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsRoleVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_ISROLEVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_Name()
		{
			return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_NAME_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_AvatarImagePath()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_AVATARIMAGEPATH_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::UInt32>* get_RoleId()
		{
			return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_ROLEID_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::UInt32>* get_Rarity()
		{
			return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_RARITY_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::GPKMKOEJPNE*>* get_BuyItemMsg()
		{
			return ((::R3::ReactiveProperty_1<::GPKMKOEJPNE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_BUYITEMMSG_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_BuyCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_GET_BUYCOMMAND_OFFSET))(this);
		}

		::System::Void IIOLDHGDCIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_IIOLDHGDCIB_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OFBKADIKPGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBMKMJHKBG_OFBKADIKPGF_OFFSET))(this);
		}

	};

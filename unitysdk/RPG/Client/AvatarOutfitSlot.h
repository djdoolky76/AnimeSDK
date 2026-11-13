#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::GameCore { class PlayerOutfitSlotRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFITSLOT_ADDUNIT_OFFSET UNITYSDK_OFFSET(0x1A4DD1C0)
#define RPG_CLIENT_AVATAROUTFITSLOT_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A4DD270)
#define RPG_CLIENT_AVATAROUTFITSLOT_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4DD0F0)
#define RPG_CLIENT_AVATAROUTFITSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4DD180)
#define RPG_CLIENT_AVATAROUTFITSLOT_FILLUNITSTO_OFFSET UNITYSDK_OFFSET(0x1A4DBF70)
#define RPG_CLIENT_AVATAROUTFITSLOT_GETDEFAULTUNIT_OFFSET UNITYSDK_OFFSET(0x1A4DB9E0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_DEFAULTITEMID_OFFSET UNITYSDK_OFFSET(0x1A4DD000)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A4DCEA0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A4DCDE0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x1A4DD050)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_ISPATHRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1A4DCFA0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_LIMITBASETYPE_OFFSET UNITYSDK_OFFSET(0x1A4DCEF0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_LIMITPATH_OFFSET UNITYSDK_OFFSET(0x1A4DCF40)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A4DCE30)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A4DA360)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_VIRTUALCAMERAPATH_OFFSET UNITYSDK_OFFSET(0x1A4DD0A0)
#define RPG_CLIENT_AVATAROUTFITSLOT__GETDEFAULTUNIT_B__25_0_OFFSET UNITYSDK_OFFSET(0x1A4DD380)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitSlot_TypeDefinitionIndex = 63915;

	class AvatarOutfitSlot : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerOutfitSlotRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* _Units; // 0x18
		::System::Void _ctor(::RPG::GameCore::PlayerOutfitSlotRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::PlayerOutfitSlotType get_Type()
		{
			return ((::RPG::GameCore::PlayerOutfitSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_LimitBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_LIMITBASETYPE_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarPath* get_LimitPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_LIMITPATH_OFFSET))(this);
		}

		::System::Boolean get_IsPathRestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_ISPATHRESTRICTED_OFFSET))(this);
		}

		::System::UInt32 get_DefaultItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_DEFAULTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_IntroduceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_INTRODUCEID_OFFSET))(this);
		}

		::System::String* get_VirtualCameraPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_VIRTUALCAMERAPATH_OFFSET))(this);
		}

		static ::RPG::Client::AvatarOutfitSlot* Create(::RPG::GameCore::PlayerOutfitSlotRow* a1)
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::RPG::GameCore::PlayerOutfitSlotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_CREATE_OFFSET))(a1);
		}

		::System::Void AddUnit(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_ADDUNIT_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitUnit* GetDefaultUnit()
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GETDEFAULTUNIT_OFFSET))(this);
		}

		::System::Void FillUnitsTo(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_FILLUNITSTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Boolean _GetDefaultUnit_b__25_0(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT__GETDEFAULTUNIT_B__25_0_OFFSET))(this, a1);
		}

	};
}

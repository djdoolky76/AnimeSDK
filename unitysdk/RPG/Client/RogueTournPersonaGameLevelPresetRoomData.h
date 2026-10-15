#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIAOGEIADGA.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IPNAPKLLICO;
class ODNBCBEINNC;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaGameLevelPresetRoomData; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE00F7A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE00F810)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE00F940)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xE00FAF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xE00F500)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xE00F4E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xE00F4A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE00F700)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE00F4C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE00F6A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xE00F440)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xE00F460)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xE00F650)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xE00F480)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xE00F750)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xE00F4F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xE00F4B0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE00F4D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xE00F450)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xE00F470)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xE00F490)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE00F980)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET UNITYSDK_OFFSET(0xE00F820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelPresetRoomData_TypeDefinitionIndex = 67714;

	class RogueTournPersonaGameLevelPresetRoomData : public ::System::Object
	{
	public:
		::IPNAPKLLICO* _PresetData; // 0x10
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType_k__BackingField; // 0x18
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_k__BackingField; // 0x20
		::System::UInt32 _RoomIndex_k__BackingField; // 0x28
		::System::UInt32 _Level_k__BackingField; // 0x2C
		::System::UInt32 _RoomID_k__BackingField; // 0x30
		::IIAOGEIADGA _Status_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET))(this, a1);
		}

		::IIAOGEIADGA get_Status()
		{
			return ((::IIAOGEIADGA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::IIAOGEIADGA a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAOGEIADGA))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_AttributeList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameLevelPresetRoomData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaGameLevelPresetRoomData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::ODNBCBEINNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODNBCBEINNC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIAOGEIADGA.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ODNBCBEINNC;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2440)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E0D2500)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1E0D2B80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E0D2F10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E0D2E50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E0D2FB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E0D2E90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E0D2F50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1E0D2D80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x1E0D2DC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0x1E0D2E00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1E0D2ED0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0x1E0D3000)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1E0D2570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelRoomData_TypeDefinitionIndex = 69662;

	class RogueTournPersonaGameLevelRoomData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_ReadOnly; // 0x18
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType; // 0x20
		::IIAOGEIADGA _Status; // 0x28
		::System::UInt32 _Level; // 0x2C
		::System::UInt32 _RoomIndex; // 0x30
		::System::UInt32 _RoomID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::ODNBCBEINNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODNBCBEINNC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GETDEBUGINFO_OFFSET))(this);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMINDEX_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_LEVEL_OFFSET))(this);
		}

		::IIAOGEIADGA get_Status()
		{
			return ((::IIAOGEIADGA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ATTRIBUTES_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

	};
}

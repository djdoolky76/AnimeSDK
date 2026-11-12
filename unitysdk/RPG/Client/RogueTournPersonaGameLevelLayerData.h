#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCBNMFDICO.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IJNFOHJGPBC;
class ODNBCBEINNC;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace RPG::Client { class IRogueTournPersonaGameLevelRoom; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEA81E10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA824D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xEA83590)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xEA83DD0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xEA835E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xEA83C00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xEA83C80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xEA83CE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_ROOMS_OFFSET UNITYSDK_OFFSET(0xEA83D30)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xEA83C40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYERLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xEA836A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xEA83E60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_ROOMS_OFFSET UNITYSDK_OFFSET(0xEA83D70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xEA81E50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__CREATEROOMBYPROTO_OFFSET UNITYSDK_OFFSET(0xEA836F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__FILLFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xEA82620)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__GETORFILLROOMTOINDEX_OFFSET UNITYSDK_OFFSET(0xEA83900)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__ISPRESETROOM_OFFSET UNITYSDK_OFFSET(0xEA83AF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__SYNCROOMSFULL_OFFSET UNITYSDK_OFFSET(0xEA82ED0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__SYNCROOMSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xEA827D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelLayerData_TypeDefinitionIndex = 69657;

	class RogueTournPersonaGameLevelLayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>* _Rooms; // 0x10
		::RPG::Client::TextID _NumText; // 0x18
		::IDCBNMFDICO _Status; // 0x28
		::System::UInt32 _LayerID; // 0x2C
		::System::UInt32 _LayerIndex; // 0x30
		::System::UInt32 _CurRoomIndex; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::IJNFOHJGPBC* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJNFOHJGPBC*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GETDEBUGINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* RPG_Client_IRogueTournGameLevelLayerLinear_get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYERLINEAR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void _FillFromExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__FILLFROMEXCEL_OFFSET))(this);
		}

		::System::Void _SyncRoomsFull(::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__SYNCROOMSFULL_OFFSET))(this, a1);
		}

		::System::Void _SyncRoomsIncremental(::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__SYNCROOMSINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* _GetOrFillRoomToIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__GETORFILLROOMTOINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* _CreateRoomByProto(::ODNBCBEINNC* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID, ::ODNBCBEINNC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__CREATEROOMBYPROTO_OFFSET))(this, a1);
		}

		::System::Boolean _IsPresetRoom(::ODNBCBEINNC* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODNBCBEINNC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA__ISPRESETROOM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_LAYERINDEX_OFFSET))(this);
		}

		::IDCBNMFDICO get_Status()
		{
			return ((::IDCBNMFDICO(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_STATUS_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_NUMTEXT_OFFSET))(this);
		}

		::System::UInt32 get_RoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_ROOMCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>* get_Rooms()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_ROOMS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoom*>* RPG_Client_IRogueTournGameLevelLayer_get_Rooms()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoom*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_ROOMS_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* get_CurRoom()
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_GET_CURROOM_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelRoom* RPG_Client_IRogueTournGameLevelLayer_get_CurRoom()
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_CURROOM_OFFSET))(this);
		}

	};
}

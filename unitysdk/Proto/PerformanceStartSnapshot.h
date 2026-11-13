#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DialogSnapshot; }
namespace Proto { class EraFlipperSnapshot; }
namespace Proto { class FloorCustomValueSnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class MapRotationSnapshot; }
namespace Proto { class MissionSnapshot; }
namespace Proto { class PerformanceStartSnapshot; }
namespace Proto { class PlayerSnapshot; }
namespace Proto { class SwitchHandSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_PERFORMANCESTARTSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20215860)
#define PROTO_PERFORMANCESTARTSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x20216E30)
#define PROTO_PERFORMANCESTARTSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x20214640)
#define PROTO_PERFORMANCESTARTSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20214100)
#define PROTO_PERFORMANCESTARTSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x20214000)
#define PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20214970)
#define PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20214910)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20214C00)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTGROUPLIST_OFFSET UNITYSDK_OFFSET(0x20214820)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0x20214840)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x20214750)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIALOG_OFFSET UNITYSDK_OFFSET(0x202148B0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x20214710)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x20214770)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_ERAFLIPPER_OFFSET UNITYSDK_OFFSET(0x202147F0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORCUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x20214860)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x202146F0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORSAVEDVALUELIST_OFFSET UNITYSDK_OFFSET(0x20214850)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x20214870)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_MISSION_OFFSET UNITYSDK_OFFSET(0x202147D0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_OWNERGROUPID_OFFSET UNITYSDK_OFFSET(0x202148D0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x20213F90)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x20214690)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0x202146B0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x202146D0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x202147B0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERGROUPLIST_OFFSET UNITYSDK_OFFSET(0x20214810)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0x20214830)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x20214730)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_SWITCHHAND_OFFSET UNITYSDK_OFFSET(0x202148F0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x20214790)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x20214890)
#define PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202167E0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202160A0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20213FF0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x20214760)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIALOG_OFFSET UNITYSDK_OFFSET(0x202148C0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x20214720)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x20214780)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_ERAFLIPPER_OFFSET UNITYSDK_OFFSET(0x20214800)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x20214700)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x20214880)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_MISSION_OFFSET UNITYSDK_OFFSET(0x202147E0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_OWNERGROUPID_OFFSET UNITYSDK_OFFSET(0x202148E0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x202146A0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0x202146C0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x202146E0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x202147C0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x20214740)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_SWITCHHAND_OFFSET UNITYSDK_OFFSET(0x20214900)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x202147A0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x202148A0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20215100)
#define PROTO_PERFORMANCESTARTSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x20215160)

namespace Proto
{
	inline static constexpr unsigned int PerformanceStartSnapshot_TypeDefinitionIndex = 26353;

	class PerformanceStartSnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* serverLegacyGroupList_; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* floorSavedValueList_; // 0x18
		::Proto::MapRotationSnapshot* mapRotation_; // 0x20
		::Proto::SwitchHandSnapshot* switchHand_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* clientGroupList_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* clientLegacyGroupList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* serverGroupList_; // 0x40
		::Proto::MissionSnapshot* mission_; // 0x48
		::Proto::PlayerSnapshot* player_; // 0x50
		::Proto::DialogSnapshot* dialog_; // 0x58
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::Proto::FloorCustomValueSnapshot*>* floorCustomValueList_; // 0x60
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x68
		::Proto::EraFlipperSnapshot* eraFlipper_; // 0x70
		::System::UInt32 entryId_; // 0x78
		::System::UInt32 floorId_; // 0x7C
		::System::UInt32 storyLineId_; // 0x80
		::System::UInt32 planeId_; // 0x84
		::System::UInt32 performanceType_; // 0x88
		::System::UInt32 version_; // 0x8C
		::System::UInt32 performanceId_; // 0x90
		::System::UInt32 contentId_; // 0x94
		::System::UInt32 ownerGroupId_; // 0x98
		::System::UInt32 dimensionId_; // 0x9C
		::System::UInt32 worldId_; // 0xA0
		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_clientLegacyGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x29090);
		}

		static ::System::Object** StaticGet__map_floorCustomValueList_codec()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x29098);
		}

		static ::System::Object** StaticGet__map_floorSavedValueList_codec()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x290A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_serverLegacyGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x290A8);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_serverGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x290B0);
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x290B8);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_clientGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)UnitySDK::FromName("Proto", "PerformanceStartSnapshot")->GetStaticField(0x290C0);
		}

		// static const ::System::Object PerformanceIdFieldNumber; // 0x0
		// static const ::System::Object PerformanceTypeFieldNumber; // 0x0
		// static const ::System::Object PlaneIdFieldNumber; // 0x0
		// static const ::System::Object FloorIdFieldNumber; // 0x0
		// static const ::System::Object DimensionIdFieldNumber; // 0x0
		// static const ::System::Object StoryLineIdFieldNumber; // 0x0
		// static const ::System::Object ContentIdFieldNumber; // 0x0
		// static const ::System::Object EntryIdFieldNumber; // 0x0
		// static const ::System::Object VersionFieldNumber; // 0x0
		// static const ::System::Object PlayerFieldNumber; // 0x0
		// static const ::System::Object MissionFieldNumber; // 0x0
		// static const ::System::Object EraFlipperFieldNumber; // 0x0
		// static const ::System::Object ServerGroupListFieldNumber; // 0x0
		// static const ::System::Object ClientGroupListFieldNumber; // 0x0
		// static const ::System::Object ServerLegacyGroupListFieldNumber; // 0x0
		// static const ::System::Object ClientLegacyGroupListFieldNumber; // 0x0
		// static const ::System::Object FloorSavedValueListFieldNumber; // 0x0
		// static const ::System::Object FloorCustomValueListFieldNumber; // 0x0
		// static const ::System::Object MapRotationFieldNumber; // 0x0
		// static const ::System::Object WorldIdFieldNumber; // 0x0
		// static const ::System::Object DialogFieldNumber; // 0x0
		// static const ::System::Object OwnerGroupIdFieldNumber; // 0x0
		// static const ::System::Object SwitchHandFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PerformanceStartSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PerformanceStartSnapshot* Clone()
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::Void set_PerformanceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PerformanceType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCETYPE_OFFSET))(this);
		}

		::System::Void set_PerformanceType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DimensionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIMENSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_STORYLINEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_CONTENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntryId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_VERSION_OFFSET))(this, a1);
		}

		::Proto::PlayerSnapshot* get_Player()
		{
			return ((::Proto::PlayerSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::Proto::PlayerSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLAYER_OFFSET))(this, a1);
		}

		::Proto::MissionSnapshot* get_Mission()
		{
			return ((::Proto::MissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_MISSION_OFFSET))(this);
		}

		::System::Void set_Mission(::Proto::MissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_MISSION_OFFSET))(this, a1);
		}

		::Proto::EraFlipperSnapshot* get_EraFlipper()
		{
			return ((::Proto::EraFlipperSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_ERAFLIPPER_OFFSET))(this);
		}

		::System::Void set_EraFlipper(::Proto::EraFlipperSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_ERAFLIPPER_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ServerGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ClientGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ServerLegacyGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERLEGACYGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ClientLegacyGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTLEGACYGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_FloorSavedValueList()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORSAVEDVALUELIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::Proto::FloorCustomValueSnapshot*>* get_FloorCustomValueList()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::Proto::FloorCustomValueSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORCUSTOMVALUELIST_OFFSET))(this);
		}

		::Proto::MapRotationSnapshot* get_MapRotation()
		{
			return ((::Proto::MapRotationSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_MAPROTATION_OFFSET))(this);
		}

		::System::Void set_MapRotation(::Proto::MapRotationSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MapRotationSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_MAPROTATION_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_WORLDID_OFFSET))(this, a1);
		}

		::Proto::DialogSnapshot* get_Dialog()
		{
			return ((::Proto::DialogSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIALOG_OFFSET))(this);
		}

		::System::Void set_Dialog(::Proto::DialogSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIALOG_OFFSET))(this, a1);
		}

		::System::UInt32 get_OwnerGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_OWNERGROUPID_OFFSET))(this);
		}

		::System::Void set_OwnerGroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_OWNERGROUPID_OFFSET))(this, a1);
		}

		::Proto::SwitchHandSnapshot* get_SwitchHand()
		{
			return ((::Proto::SwitchHandSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_SWITCHHAND_OFFSET))(this);
		}

		::System::Void set_SwitchHand(::Proto::SwitchHandSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_SWITCHHAND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::PerformanceStartSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PerformanceStartSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase.h"
#include "unitysdk/System/Object.h"
class FEIJPEJBDDH;
class FENFEHCCOCA;
class JMPNGBAILBG;
class MNGNLOCLNOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20219E60)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CCTOR_OFFSET UNITYSDK_OFFSET(0x2021A940)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLEARTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x20219430)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x202193D0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20218F00)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x20218EF0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202194A0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_OFFSET UNITYSDK_OFFSET(0x20219440)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20219970)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x20218E80)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x20219250)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETIMPLCASE_OFFSET UNITYSDK_OFFSET(0x20219420)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x202192D0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x202191D0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x20219350)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2021A590)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2021A0C0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20218EE0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x202192B0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x20219330)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x20219230)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x202193B0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20219B70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_WRITETO_OFFSET UNITYSDK_OFFSET(0x20219BD0)

namespace Proto
{
	inline static constexpr unsigned int RogueAdventureRoomGameplayWolfGunTarget_TypeDefinitionIndex = 33847;

	class RogueAdventureRoomGameplayWolfGunTarget : public ::System::Object
	{
	public:
		::System::Object* targetImpl_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase targetImplCase_; // 0x20
		static ::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>**)UnitySDK::FromName("Proto", "RogueAdventureRoomGameplayWolfGunTarget")->GetStaticField(0x4D4C0);
		}

		// static const ::System::Object TargetNoneFieldNumber; // 0x0
		// static const ::System::Object TargetCoinFieldNumber; // 0x0
		// static const ::System::Object TargetMiracleFieldNumber; // 0x0
		// static const ::System::Object TargetRuanmeiFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::RogueAdventureRoomGameplayWolfGunTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RogueAdventureRoomGameplayWolfGunTarget*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget* Clone()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET))(this);
		}

		::MNGNLOCLNOF* get_TargetNone()
		{
			return ((::MNGNLOCLNOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET))(this);
		}

		::System::Void set_TargetNone(::MNGNLOCLNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNGNLOCLNOF*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET))(this, a1);
		}

		::FEIJPEJBDDH* get_TargetCoin()
		{
			return ((::FEIJPEJBDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET))(this);
		}

		::System::Void set_TargetCoin(::FEIJPEJBDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEIJPEJBDDH*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET))(this, a1);
		}

		::JMPNGBAILBG* get_TargetMiracle()
		{
			return ((::JMPNGBAILBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET))(this);
		}

		::System::Void set_TargetMiracle(::JMPNGBAILBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPNGBAILBG*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET))(this, a1);
		}

		::FENFEHCCOCA* get_TargetRuanmei()
		{
			return ((::FENFEHCCOCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET))(this);
		}

		::System::Void set_TargetRuanmei(::FENFEHCCOCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FENFEHCCOCA*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET))(this, a1);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase get_TargetImplCase()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETIMPLCASE_OFFSET))(this);
		}

		::System::Void ClearTargetImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLEARTARGETIMPL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::RogueAdventureRoomGameplayWolfGunTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::RogueAdventureRoomGameplayWolfGunTarget*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::RogueAdventureRoomGameplayWolfGunTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RogueAdventureRoomGameplayWolfGunTarget*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}

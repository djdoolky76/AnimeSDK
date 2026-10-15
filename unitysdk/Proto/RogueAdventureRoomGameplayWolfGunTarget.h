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
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E00E5D0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00F0F0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLEARTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x1E00DBA0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x1E00DB40)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E00D6B0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00D6A0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E00DC10)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E00DBB0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E00E0E0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E00D630)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x1E00D9C0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETIMPLCASE_OFFSET UNITYSDK_OFFSET(0x1E00DB90)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x1E00DA40)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x1E00D940)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x1E00DAC0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E00ED30)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E00E830)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E00D690)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x1E00DA20)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x1E00DAA0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x1E00D9A0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x1E00DB20)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E00E2E0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E00E340)

namespace Proto
{
	inline static constexpr unsigned int RogueAdventureRoomGameplayWolfGunTarget_TypeDefinitionIndex = 32932;

	class RogueAdventureRoomGameplayWolfGunTarget : public ::System::Object
	{
	public:
		::System::Object* targetImpl_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase targetImplCase_; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "RogueAdventureRoomGameplayWolfGunTarget")->GetStaticField(0x3FEC0);
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

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_PARSER_OFFSET))();
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MotionInfoSnapshot; }
namespace Proto { class VectorSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_MOTIONINFOSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0071E0)
#define PROTO_MOTIONINFOSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E007420)
#define PROTO_MOTIONINFOSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFEE420)
#define PROTO_MOTIONINFOSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E006AE0)
#define PROTO_MOTIONINFOSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEF240)
#define PROTO_MOTIONINFOSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E006E70)
#define PROTO_MOTIONINFOSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E006C20)
#define PROTO_MOTIONINFOSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFEEA90)
#define PROTO_MOTIONINFOSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E006A70)
#define PROTO_MOTIONINFOSNAPSHOT_GET_POS_OFFSET UNITYSDK_OFFSET(0x1E006BE0)
#define PROTO_MOTIONINFOSNAPSHOT_GET_ROT_OFFSET UNITYSDK_OFFSET(0x1E006C00)
#define PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E007270)
#define PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFEF250)
#define PROTO_MOTIONINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E006AD0)
#define PROTO_MOTIONINFOSNAPSHOT_SET_POS_OFFSET UNITYSDK_OFFSET(0x1E006BF0)
#define PROTO_MOTIONINFOSNAPSHOT_SET_ROT_OFFSET UNITYSDK_OFFSET(0x1E006C10)
#define PROTO_MOTIONINFOSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0070A0)
#define PROTO_MOTIONINFOSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E007100)

namespace Proto
{
	inline static constexpr unsigned int MotionInfoSnapshot_TypeDefinitionIndex = 25815;

	class MotionInfoSnapshot : public ::System::Object
	{
	public:
		::Proto::VectorSnapshot* rot_; // 0x10
		::Proto::VectorSnapshot* pos_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "MotionInfoSnapshot")->GetStaticField(0x43E30);
		}

		// static const ::System::Object PosFieldNumber; // 0x0
		// static const ::System::Object RotFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MotionInfoSnapshot* Clone()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Proto::VectorSnapshot* get_Pos()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_SET_POS_OFFSET))(this, a1);
		}

		::Proto::VectorSnapshot* get_Rot()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GET_ROT_OFFSET))(this);
		}

		::System::Void set_Rot(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_SET_ROT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}

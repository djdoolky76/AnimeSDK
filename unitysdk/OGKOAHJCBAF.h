#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGKOAHJCBAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGKOAHJCBAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE581C0)
#define OGKOAHJCBAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE58420)
#define OGKOAHJCBAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE57DC0)
#define OGKOAHJCBAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE57D30)
#define OGKOAHJCBAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE57CE0)
#define OGKOAHJCBAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE57EF0)
#define OGKOAHJCBAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE57E00)
#define OGKOAHJCBAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE57FE0)
#define OGKOAHJCBAF_IEDOGJFAGIE_OFFSET UNITYSDK_OFFSET(0x1DE57DF0)
#define OGKOAHJCBAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE57CA0)
#define OGKOAHJCBAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE58280)
#define OGKOAHJCBAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE58230)
#define OGKOAHJCBAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE57CD0)
#define OGKOAHJCBAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE580E0)
#define OGKOAHJCBAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE58140)

inline static constexpr unsigned int OGKOAHJCBAF_TypeDefinitionIndex = 33758;

	class OGKOAHJCBAF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_FLJBJMDPFHH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OGKOAHJCBAF")->GetStaticField(0x19230);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OGKOAHJCBAF")->GetStaticField(0x19238);
		}

		// static const ::System::Object IICKCIKPOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGKOAHJCBAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGKOAHJCBAF*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OGKOAHJCBAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGKOAHJCBAF* Clone()
		{
			return ((::OGKOAHJCBAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEDOGJFAGIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_IEDOGJFAGIE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGKOAHJCBAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGKOAHJCBAF*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGKOAHJCBAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGKOAHJCBAF*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

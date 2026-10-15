#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFMGFPOKINH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFMGFPOKINH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF28920)
#define PFMGFPOKINH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF28B80)
#define PFMGFPOKINH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF28520)
#define PFMGFPOKINH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF28490)
#define PFMGFPOKINH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF28440)
#define PFMGFPOKINH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF28650)
#define PFMGFPOKINH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF28560)
#define PFMGFPOKINH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF28740)
#define PFMGFPOKINH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF28400)
#define PFMGFPOKINH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF289E0)
#define PFMGFPOKINH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF28990)
#define PFMGFPOKINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF28430)
#define PFMGFPOKINH_PJCGNIDNIID_OFFSET UNITYSDK_OFFSET(0x1DF28550)
#define PFMGFPOKINH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF28840)
#define PFMGFPOKINH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF288A0)

inline static constexpr unsigned int PFMGFPOKINH_TypeDefinitionIndex = 33978;

	class PFMGFPOKINH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PFMGFPOKINH")->GetStaticField(0x310E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HOEKGEEKEHI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PFMGFPOKINH")->GetStaticField(0x310E8);
		}

		// static const ::System::Object IPAMJEJOGBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFMGFPOKINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMGFPOKINH*))((::PBYTE)hIl2Cpp + PFMGFPOKINH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFMGFPOKINH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PFMGFPOKINH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFMGFPOKINH* Clone()
		{
			return ((::PFMGFPOKINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PJCGNIDNIID()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_PJCGNIDNIID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFMGFPOKINH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFMGFPOKINH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFMGFPOKINH*))((::PBYTE)hIl2Cpp + PFMGFPOKINH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFMGFPOKINH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFMGFPOKINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMGFPOKINH*))((::PBYTE)hIl2Cpp + PFMGFPOKINH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFMGFPOKINH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

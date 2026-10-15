#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFMGFPOKINH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFMGFPOKINH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEFB250)
#define PFMGFPOKINH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFB4B0)
#define PFMGFPOKINH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEFAE50)
#define PFMGFPOKINH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEFADC0)
#define PFMGFPOKINH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFAD70)
#define PFMGFPOKINH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEFAF80)
#define PFMGFPOKINH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEFAE90)
#define PFMGFPOKINH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEFB070)
#define PFMGFPOKINH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEFAD30)
#define PFMGFPOKINH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEFB310)
#define PFMGFPOKINH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEFB2C0)
#define PFMGFPOKINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEFAD60)
#define PFMGFPOKINH_PJCGNIDNIID_OFFSET UNITYSDK_OFFSET(0x1DEFAE80)
#define PFMGFPOKINH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEFB170)
#define PFMGFPOKINH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEFB1D0)

inline static constexpr unsigned int PFMGFPOKINH_TypeDefinitionIndex = 33978;

	class PFMGFPOKINH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOEKGEEKEHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PFMGFPOKINH")->GetStaticField(0x29FE0);
		}

		static ::Google::Protobuf::MessageParser_1<::PFMGFPOKINH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFMGFPOKINH*>**)UnitySDK::FromName("", "PFMGFPOKINH")->GetStaticField(0x29FE8);
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

		static ::Google::Protobuf::MessageParser_1<::PFMGFPOKINH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFMGFPOKINH*>*(*)())((::PBYTE)hIl2Cpp + PFMGFPOKINH_JJGHOBBFNJD_OFFSET))();
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

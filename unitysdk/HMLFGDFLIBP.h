#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNKDEHGIJMH;
class HMLFGDFLIBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMLFGDFLIBP_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E5D1980)
#define HMLFGDFLIBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D1D70)
#define HMLFGDFLIBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2070)
#define HMLFGDFLIBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D1950)
#define HMLFGDFLIBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D18A0)
#define HMLFGDFLIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D1850)
#define HMLFGDFLIBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D1AD0)
#define HMLFGDFLIBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D1990)
#define HMLFGDFLIBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D1BF0)
#define HMLFGDFLIBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D1810)
#define HMLFGDFLIBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D1EB0)
#define HMLFGDFLIBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D1E10)
#define HMLFGDFLIBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D1840)
#define HMLFGDFLIBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D1C60)
#define HMLFGDFLIBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D1CC0)

	class HMLFGDFLIBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BNKDEHGIJMH*>* BPJNCMFCKBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HMLFGDFLIBP")->GetStaticField(0x4A990);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HMLFGDFLIBP")->GetStaticField(0x4A998);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMLFGDFLIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HMLFGDFLIBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMLFGDFLIBP* Clone()
		{
			return ((::HMLFGDFLIBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BNKDEHGIJMH*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BNKDEHGIJMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMLFGDFLIBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMLFGDFLIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLDOIEGCNLD;
class GLLFJFJBIBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLLFJFJBIBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C4600)
#define GLLFJFJBIBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4900)
#define GLLFJFJBIBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C4180)
#define GLLFJFJBIBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C40D0)
#define GLLFJFJBIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4080)
#define GLLFJFJBIBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C4360)
#define GLLFJFJBIBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C41E0)
#define GLLFJFJBIBC_GCHFPCFEOFD_OFFSET UNITYSDK_OFFSET(0x1E4C41D0)
#define GLLFJFJBIBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C4480)
#define GLLFJFJBIBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C4010)
#define GLLFJFJBIBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C4740)
#define GLLFJFJBIBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C46A0)
#define GLLFJFJBIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4070)
#define GLLFJFJBIBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C44F0)
#define GLLFJFJBIBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C4550)

	class GLLFJFJBIBC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CLDOIEGCNLD*>* CKADIAMJOMP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLLFJFJBIBC")->GetStaticField(0x1FAB0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HKJALPMNEFD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GLLFJFJBIBC")->GetStaticField(0x1FAB8);
		}

		// static const ::System::Object FFBGMBAGEPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLLFJFJBIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLLFJFJBIBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLLFJFJBIBC* Clone()
		{
			return ((::GLLFJFJBIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CLDOIEGCNLD*>* GCHFPCFEOFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CLDOIEGCNLD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_GCHFPCFEOFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLLFJFJBIBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLLFJFJBIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

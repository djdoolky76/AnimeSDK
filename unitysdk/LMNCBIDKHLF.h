#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class LMNCBIDKHLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMNCBIDKHLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9AC5C0)
#define LMNCBIDKHLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC8A0)
#define LMNCBIDKHLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9AC1A0)
#define LMNCBIDKHLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9AC110)
#define LMNCBIDKHLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC0D0)
#define LMNCBIDKHLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9AC320)
#define LMNCBIDKHLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9AC1E0)
#define LMNCBIDKHLF_GDCNKDJDIAA_OFFSET UNITYSDK_OFFSET(0x1E9AC1D0)
#define LMNCBIDKHLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9AC440)
#define LMNCBIDKHLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9AC090)
#define LMNCBIDKHLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9AC700)
#define LMNCBIDKHLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9AC660)
#define LMNCBIDKHLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC0C0)
#define LMNCBIDKHLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9AC4B0)
#define LMNCBIDKHLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9AC510)

	class LMNCBIDKHLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BMCNDLNONMO*>* CLKJKJNDADK; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_NLIGEBFMEPP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LMNCBIDKHLF")->GetStaticField(0x4DDD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMNCBIDKHLF")->GetStaticField(0x4DDD8);
		}

		// static const ::System::Object ODBJLEBPADP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMNCBIDKHLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMNCBIDKHLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMNCBIDKHLF* Clone()
		{
			return ((::LMNCBIDKHLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMCNDLNONMO*>* GDCNKDJDIAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMCNDLNONMO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_GDCNKDJDIAA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMNCBIDKHLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMNCBIDKHLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

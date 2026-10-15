#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class NCHGLFJCGIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCHGLFJCGIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB0BB0)
#define NCHGLFJCGIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB0E90)
#define NCHGLFJCGIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB0790)
#define NCHGLFJCGIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB0700)
#define NCHGLFJCGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB06C0)
#define NCHGLFJCGIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB0910)
#define NCHGLFJCGIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB07D0)
#define NCHGLFJCGIJ_GDCNKDJDIAA_OFFSET UNITYSDK_OFFSET(0x1EAB07C0)
#define NCHGLFJCGIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB0A30)
#define NCHGLFJCGIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB0680)
#define NCHGLFJCGIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB0CF0)
#define NCHGLFJCGIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB0C50)
#define NCHGLFJCGIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB06B0)
#define NCHGLFJCGIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB0AA0)
#define NCHGLFJCGIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB0B00)

inline static constexpr unsigned int NCHGLFJCGIJ_TypeDefinitionIndex = 33398;

	class NCHGLFJCGIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BMCNDLNONMO*>* CLKJKJNDADK; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::BMCNDLNONMO*>** StaticGet_NLIGEBFMEPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMCNDLNONMO*>**)UnitySDK::FromName("", "NCHGLFJCGIJ")->GetStaticField(0x5EE30);
		}

		static ::Google::Protobuf::MessageParser_1<::NCHGLFJCGIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCHGLFJCGIJ*>**)UnitySDK::FromName("", "NCHGLFJCGIJ")->GetStaticField(0x5EE38);
		}

		// static const ::System::Object ODBJLEBPADP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCHGLFJCGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHGLFJCGIJ*))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCHGLFJCGIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCHGLFJCGIJ*>*(*)())((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCHGLFJCGIJ* Clone()
		{
			return ((::NCHGLFJCGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMCNDLNONMO*>* GDCNKDJDIAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMCNDLNONMO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_GDCNKDJDIAA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCHGLFJCGIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCHGLFJCGIJ*))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCHGLFJCGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHGLFJCGIJ*))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

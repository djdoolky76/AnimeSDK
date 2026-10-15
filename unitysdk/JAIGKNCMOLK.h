#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIGKNCMOLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JAIGKNCMOLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C0920)
#define JAIGKNCMOLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C0AE0)
#define JAIGKNCMOLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C0500)
#define JAIGKNCMOLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C04D0)
#define JAIGKNCMOLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C04C0)
#define JAIGKNCMOLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C0650)
#define JAIGKNCMOLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C0570)
#define JAIGKNCMOLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C07D0)
#define JAIGKNCMOLK_GGHGGIMPBFK_OFFSET UNITYSDK_OFFSET(0x1E6C0550)
#define JAIGKNCMOLK_HLMFDGJJOKN_OFFSET UNITYSDK_OFFSET(0x1E6C0560)
#define JAIGKNCMOLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C0480)
#define JAIGKNCMOLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C0980)
#define JAIGKNCMOLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C0950)
#define JAIGKNCMOLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C04B0)
#define JAIGKNCMOLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C0800)
#define JAIGKNCMOLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C0860)

inline static constexpr unsigned int JAIGKNCMOLK_TypeDefinitionIndex = 30659;

	class JAIGKNCMOLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OHLHEGBGEOH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JAIGKNCMOLK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JAIGKNCMOLK*>**)UnitySDK::FromName("", "JAIGKNCMOLK")->GetStaticField(0x574E0);
		}

		// static const ::System::Object NJBJCFLEIAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JAIGKNCMOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAIGKNCMOLK*))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAIGKNCMOLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JAIGKNCMOLK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JAIGKNCMOLK*>*(*)())((::PBYTE)hIl2Cpp + JAIGKNCMOLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JAIGKNCMOLK* Clone()
		{
			return ((::JAIGKNCMOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_CLONE_OFFSET))(this);
		}

		::System::Boolean GGHGGIMPBFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_GGHGGIMPBFK_OFFSET))(this);
		}

		::System::Void HLMFDGJJOKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_HLMFDGJJOKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JAIGKNCMOLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAIGKNCMOLK*))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JAIGKNCMOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAIGKNCMOLK*))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JAIGKNCMOLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

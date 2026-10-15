#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFOAHLEOOIK;
class EPADPABCFGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFOAHLEOOIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AA0A0)
#define DFOAHLEOOIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA3A0)
#define DFOAHLEOOIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A9C80)
#define DFOAHLEOOIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A9BD0)
#define DFOAHLEOOIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9B80)
#define DFOAHLEOOIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A9E00)
#define DFOAHLEOOIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A9CC0)
#define DFOAHLEOOIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A9F20)
#define DFOAHLEOOIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A9B40)
#define DFOAHLEOOIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AA1E0)
#define DFOAHLEOOIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AA140)
#define DFOAHLEOOIK_OKJCINLOKCP_OFFSET UNITYSDK_OFFSET(0x1E1A9CB0)
#define DFOAHLEOOIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9B70)
#define DFOAHLEOOIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A9F90)
#define DFOAHLEOOIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A9FF0)

inline static constexpr unsigned int DFOAHLEOOIK_TypeDefinitionIndex = 31654;

	class DFOAHLEOOIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPADPABCFGH*>* PHCJLANBIDL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DFOAHLEOOIK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFOAHLEOOIK*>**)UnitySDK::FromName("", "DFOAHLEOOIK")->GetStaticField(0x337C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPADPABCFGH*>** StaticGet_POFDGCBHONB()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPADPABCFGH*>**)UnitySDK::FromName("", "DFOAHLEOOIK")->GetStaticField(0x337C8);
		}

		// static const ::System::Object HBCIMHILPDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFOAHLEOOIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFOAHLEOOIK*))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOAHLEOOIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFOAHLEOOIK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFOAHLEOOIK*>*(*)())((::PBYTE)hIl2Cpp + DFOAHLEOOIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFOAHLEOOIK* Clone()
		{
			return ((::DFOAHLEOOIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPADPABCFGH*>* OKJCINLOKCP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPADPABCFGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_OKJCINLOKCP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFOAHLEOOIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFOAHLEOOIK*))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFOAHLEOOIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFOAHLEOOIK*))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFOAHLEOOIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

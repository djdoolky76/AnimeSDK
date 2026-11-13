#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNIPIIKMAHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNIPIIKMAHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205F15E0)
#define CNIPIIKMAHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x205F1840)
#define CNIPIIKMAHN_CLONE_OFFSET UNITYSDK_OFFSET(0x205F11E0)
#define CNIPIIKMAHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205F1150)
#define CNIPIIKMAHN_CTOR_OFFSET UNITYSDK_OFFSET(0x205F1100)
#define CNIPIIKMAHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205F1310)
#define CNIPIIKMAHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x205F1220)
#define CNIPIIKMAHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205F1400)
#define CNIPIIKMAHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205F10C0)
#define CNIPIIKMAHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205F16A0)
#define CNIPIIKMAHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205F1650)
#define CNIPIIKMAHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205F10F0)
#define CNIPIIKMAHN_PINHJOEOEIM_OFFSET UNITYSDK_OFFSET(0x205F1210)
#define CNIPIIKMAHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205F1500)
#define CNIPIIKMAHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x205F1560)

inline static constexpr unsigned int CNIPIIKMAHN_TypeDefinitionIndex = 35115;

	class CNIPIIKMAHN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MIHBAIOCAJP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MCOMEAJLOLP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CNIPIIKMAHN")->GetStaticField(0x16840);
		}

		static ::Google::Protobuf::MessageParser_1<::CNIPIIKMAHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNIPIIKMAHN*>**)UnitySDK::FromName("", "CNIPIIKMAHN")->GetStaticField(0x16848);
		}

		// static const ::System::Object BEELMFHINGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNIPIIKMAHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNIPIIKMAHN*))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNIPIIKMAHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNIPIIKMAHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNIPIIKMAHN*>*(*)())((::PBYTE)hIl2Cpp + CNIPIIKMAHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNIPIIKMAHN* Clone()
		{
			return ((::CNIPIIKMAHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PINHJOEOEIM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_PINHJOEOEIM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNIPIIKMAHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNIPIIKMAHN*))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNIPIIKMAHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNIPIIKMAHN*))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNIPIIKMAHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

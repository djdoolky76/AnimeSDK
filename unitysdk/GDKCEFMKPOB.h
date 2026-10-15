#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDKCEFMKPOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDKCEFMKPOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44C940)
#define GDKCEFMKPOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44CBA0)
#define GDKCEFMKPOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E44C540)
#define GDKCEFMKPOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E44C4B0)
#define GDKCEFMKPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44C460)
#define GDKCEFMKPOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E44C670)
#define GDKCEFMKPOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E44C580)
#define GDKCEFMKPOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E44C760)
#define GDKCEFMKPOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E44C420)
#define GDKCEFMKPOB_KCFNFPAKGEL_OFFSET UNITYSDK_OFFSET(0x1E44C570)
#define GDKCEFMKPOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44CA00)
#define GDKCEFMKPOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E44C9B0)
#define GDKCEFMKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E44C450)
#define GDKCEFMKPOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44C860)
#define GDKCEFMKPOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44C8C0)

inline static constexpr unsigned int GDKCEFMKPOB_TypeDefinitionIndex = 31436;

	class GDKCEFMKPOB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GOMJCIPLBGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_KKOONGOBGCI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GDKCEFMKPOB")->GetStaticField(0x11050);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GDKCEFMKPOB")->GetStaticField(0x11058);
		}

		// static const ::System::Object JCFIILPCHLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDKCEFMKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKCEFMKPOB*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GDKCEFMKPOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDKCEFMKPOB* Clone()
		{
			return ((::GDKCEFMKPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCFNFPAKGEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_KCFNFPAKGEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDKCEFMKPOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDKCEFMKPOB*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDKCEFMKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKCEFMKPOB*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

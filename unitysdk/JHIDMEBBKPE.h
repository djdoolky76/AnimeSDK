#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHIDMEBBKPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHIDMEBBKPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E747240)
#define JHIDMEBBKPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7474A0)
#define JHIDMEBBKPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E746E40)
#define JHIDMEBBKPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E746DB0)
#define JHIDMEBBKPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E746D60)
#define JHIDMEBBKPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E746F70)
#define JHIDMEBBKPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E746E80)
#define JHIDMEBBKPE_FBOGBLMENOG_OFFSET UNITYSDK_OFFSET(0x1E746E70)
#define JHIDMEBBKPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E747060)
#define JHIDMEBBKPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E746D20)
#define JHIDMEBBKPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E747300)
#define JHIDMEBBKPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7472B0)
#define JHIDMEBBKPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E746D50)
#define JHIDMEBBKPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E747160)
#define JHIDMEBBKPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7471C0)

inline static constexpr unsigned int JHIDMEBBKPE_TypeDefinitionIndex = 31209;

	class JHIDMEBBKPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* APHIOEFFLFK; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_CKELHPCLDIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JHIDMEBBKPE")->GetStaticField(0x61280);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JHIDMEBBKPE")->GetStaticField(0x61288);
		}

		// static const ::System::Object ODGCPIHMKGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHIDMEBBKPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHIDMEBBKPE*))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHIDMEBBKPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JHIDMEBBKPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHIDMEBBKPE* Clone()
		{
			return ((::JHIDMEBBKPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FBOGBLMENOG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_FBOGBLMENOG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHIDMEBBKPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHIDMEBBKPE*))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHIDMEBBKPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHIDMEBBKPE*))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHIDMEBBKPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

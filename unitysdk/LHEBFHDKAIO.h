#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHEBFHDKAIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHEBFHDKAIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E931260)
#define LHEBFHDKAIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E931520)
#define LHEBFHDKAIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E930DE0)
#define LHEBFHDKAIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E930D50)
#define LHEBFHDKAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E930D00)
#define LHEBFHDKAIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E930F60)
#define LHEBFHDKAIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E930E40)
#define LHEBFHDKAIO_FDMBGKILHHK_OFFSET UNITYSDK_OFFSET(0x1E930E30)
#define LHEBFHDKAIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E931050)
#define LHEBFHDKAIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E930C90)
#define LHEBFHDKAIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E931350)
#define LHEBFHDKAIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E931300)
#define LHEBFHDKAIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E930CF0)
#define LHEBFHDKAIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E931150)
#define LHEBFHDKAIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9311B0)

inline static constexpr unsigned int LHEBFHDKAIO_TypeDefinitionIndex = 28558;

	class LHEBFHDKAIO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PDEJMKPHCJB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LHEBFHDKAIO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHEBFHDKAIO*>**)UnitySDK::FromName("", "LHEBFHDKAIO")->GetStaticField(0x10FF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NOBKKEDGAKD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LHEBFHDKAIO")->GetStaticField(0x10FF8);
		}

		// static const ::System::Object JICACLPABCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHEBFHDKAIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHEBFHDKAIO*))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHEBFHDKAIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHEBFHDKAIO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHEBFHDKAIO*>*(*)())((::PBYTE)hIl2Cpp + LHEBFHDKAIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHEBFHDKAIO* Clone()
		{
			return ((::LHEBFHDKAIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FDMBGKILHHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_FDMBGKILHHK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHEBFHDKAIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHEBFHDKAIO*))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHEBFHDKAIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHEBFHDKAIO*))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHEBFHDKAIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

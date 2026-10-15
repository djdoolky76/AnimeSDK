#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKLDDAAECLN;
class KKFMGCNDHGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKFMGCNDHGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E84A910)
#define KKFMGCNDHGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84AC10)
#define KKFMGCNDHGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E84A490)
#define KKFMGCNDHGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84A3E0)
#define KKFMGCNDHGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84A390)
#define KKFMGCNDHGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E84A670)
#define KKFMGCNDHGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E84A4F0)
#define KKFMGCNDHGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E84A790)
#define KKFMGCNDHGH_HLOLIKLLKCD_OFFSET UNITYSDK_OFFSET(0x1E84A4E0)
#define KKFMGCNDHGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E84A320)
#define KKFMGCNDHGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E84AA50)
#define KKFMGCNDHGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E84A9B0)
#define KKFMGCNDHGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E84A380)
#define KKFMGCNDHGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E84A800)
#define KKFMGCNDHGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E84A860)

inline static constexpr unsigned int KKFMGCNDHGH_TypeDefinitionIndex = 28107;

	class KKFMGCNDHGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HKLDDAAECLN*>* GPOJOOBEKGO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::HKLDDAAECLN*>** StaticGet_LPMCNHKMMAJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::HKLDDAAECLN*>**)UnitySDK::FromName("", "KKFMGCNDHGH")->GetStaticField(0x1BDA0);
		}

		static ::Google::Protobuf::MessageParser_1<::KKFMGCNDHGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KKFMGCNDHGH*>**)UnitySDK::FromName("", "KKFMGCNDHGH")->GetStaticField(0x1BDA8);
		}

		// static const ::System::Object OJAPHEJDAMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKFMGCNDHGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KKFMGCNDHGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KKFMGCNDHGH*>*(*)())((::PBYTE)hIl2Cpp + KKFMGCNDHGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKFMGCNDHGH* Clone()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HKLDDAAECLN*>* HLOLIKLLKCD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HKLDDAAECLN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_HLOLIKLLKCD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKFMGCNDHGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKFMGCNDHGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNOPJJFKMDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNOPJJFKMDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98A050)
#define LNOPJJFKMDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98A310)
#define LNOPJJFKMDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E989BD0)
#define LNOPJJFKMDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E989B40)
#define LNOPJJFKMDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E989AF0)
#define LNOPJJFKMDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E989D50)
#define LNOPJJFKMDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E989C30)
#define LNOPJJFKMDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E989E40)
#define LNOPJJFKMDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E989A80)
#define LNOPJJFKMDL_KNHEGINIPNI_OFFSET UNITYSDK_OFFSET(0x1E989C20)
#define LNOPJJFKMDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98A140)
#define LNOPJJFKMDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98A0F0)
#define LNOPJJFKMDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E989AE0)
#define LNOPJJFKMDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E989F40)
#define LNOPJJFKMDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E989FA0)

inline static constexpr unsigned int LNOPJJFKMDL_TypeDefinitionIndex = 33348;

	class LNOPJJFKMDL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEDGFNCACIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKJDLOEGOKP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LNOPJJFKMDL")->GetStaticField(0x40880);
		}

		static ::Google::Protobuf::MessageParser_1<::LNOPJJFKMDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LNOPJJFKMDL*>**)UnitySDK::FromName("", "LNOPJJFKMDL")->GetStaticField(0x40888);
		}

		// static const ::System::Object EBMBOKMOPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNOPJJFKMDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNOPJJFKMDL*))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNOPJJFKMDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LNOPJJFKMDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LNOPJJFKMDL*>*(*)())((::PBYTE)hIl2Cpp + LNOPJJFKMDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNOPJJFKMDL* Clone()
		{
			return ((::LNOPJJFKMDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KNHEGINIPNI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_KNHEGINIPNI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNOPJJFKMDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNOPJJFKMDL*))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNOPJJFKMDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNOPJJFKMDL*))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNOPJJFKMDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

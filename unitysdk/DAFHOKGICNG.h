#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAFHOKGICNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAFHOKGICNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202A5410)
#define DAFHOKGICNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x202A56D0)
#define DAFHOKGICNG_CLONE_OFFSET UNITYSDK_OFFSET(0x202A4F90)
#define DAFHOKGICNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202A4F00)
#define DAFHOKGICNG_CTOR_OFFSET UNITYSDK_OFFSET(0x202A4EB0)
#define DAFHOKGICNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202A5110)
#define DAFHOKGICNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x202A4FF0)
#define DAFHOKGICNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202A5200)
#define DAFHOKGICNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202A4E40)
#define DAFHOKGICNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202A5500)
#define DAFHOKGICNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202A54B0)
#define DAFHOKGICNG_MMJAKBPAMKI_OFFSET UNITYSDK_OFFSET(0x202A4FE0)
#define DAFHOKGICNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202A4EA0)
#define DAFHOKGICNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202A5300)
#define DAFHOKGICNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x202A5360)

inline static constexpr unsigned int DAFHOKGICNG_TypeDefinitionIndex = 28952;

	class DAFHOKGICNG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LIEKGJAFJIG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DAFHOKGICNG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAFHOKGICNG*>**)UnitySDK::FromName("", "DAFHOKGICNG")->GetStaticField(0x1B4A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EBKKCDANBPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DAFHOKGICNG")->GetStaticField(0x1B4A8);
		}

		// static const ::System::Object CPMEHPBMMDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAFHOKGICNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAFHOKGICNG*))((::PBYTE)hIl2Cpp + DAFHOKGICNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFHOKGICNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAFHOKGICNG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAFHOKGICNG*>*(*)())((::PBYTE)hIl2Cpp + DAFHOKGICNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAFHOKGICNG* Clone()
		{
			return ((::DAFHOKGICNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMJAKBPAMKI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_MMJAKBPAMKI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAFHOKGICNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAFHOKGICNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAFHOKGICNG*))((::PBYTE)hIl2Cpp + DAFHOKGICNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAFHOKGICNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAFHOKGICNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAFHOKGICNG*))((::PBYTE)hIl2Cpp + DAFHOKGICNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAFHOKGICNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

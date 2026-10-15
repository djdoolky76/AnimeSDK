#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAFHOKGICNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAFHOKGICNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E14FA20)
#define DAFHOKGICNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14FCE0)
#define DAFHOKGICNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E14F5A0)
#define DAFHOKGICNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E14F510)
#define DAFHOKGICNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14F4C0)
#define DAFHOKGICNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E14F720)
#define DAFHOKGICNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E14F600)
#define DAFHOKGICNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E14F810)
#define DAFHOKGICNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E14F450)
#define DAFHOKGICNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E14FB10)
#define DAFHOKGICNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E14FAC0)
#define DAFHOKGICNG_MMJAKBPAMKI_OFFSET UNITYSDK_OFFSET(0x1E14F5F0)
#define DAFHOKGICNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E14F4B0)
#define DAFHOKGICNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E14F910)
#define DAFHOKGICNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E14F970)

inline static constexpr unsigned int DAFHOKGICNG_TypeDefinitionIndex = 28362;

	class DAFHOKGICNG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LIEKGJAFJIG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DAFHOKGICNG")->GetStaticField(0x24530);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EBKKCDANBPA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DAFHOKGICNG")->GetStaticField(0x24538);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DAFHOKGICNG_JJGHOBBFNJD_OFFSET))();
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

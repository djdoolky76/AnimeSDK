#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEDHMLJKIOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEDHMLJKIOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC4210)
#define NEDHMLJKIOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4430)
#define NEDHMLJKIOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC3CE0)
#define NEDHMLJKIOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC3BF0)
#define NEDHMLJKIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC3B60)
#define NEDHMLJKIOA_DOACIJFKANH_OFFSET UNITYSDK_OFFSET(0x1EAC3D20)
#define NEDHMLJKIOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC3E40)
#define NEDHMLJKIOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC3D30)
#define NEDHMLJKIOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC3F50)
#define NEDHMLJKIOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC3B20)
#define NEDHMLJKIOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC4300)
#define NEDHMLJKIOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC42A0)
#define NEDHMLJKIOA_OMNEDGMJNBC_OFFSET UNITYSDK_OFFSET(0x1EAC3D10)
#define NEDHMLJKIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC3B50)
#define NEDHMLJKIOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC4110)
#define NEDHMLJKIOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC4170)

inline static constexpr unsigned int NEDHMLJKIOA_TypeDefinitionIndex = 29669;

	class NEDHMLJKIOA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CHJJBLBOJGE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIDKKHNBCEB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NEDHMLJKIOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEDHMLJKIOA*>**)UnitySDK::FromName("", "NEDHMLJKIOA")->GetStaticField(0x60450);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_APOBAOHBODL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NEDHMLJKIOA")->GetStaticField(0x60458);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AODFPICJDAB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NEDHMLJKIOA")->GetStaticField(0x60460);
		}

		// static const ::System::Object OHLGNKMFIDC; // 0x0
		// static const ::System::Object OCDDIBBCEDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEDHMLJKIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEDHMLJKIOA*))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDHMLJKIOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEDHMLJKIOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEDHMLJKIOA*>*(*)())((::PBYTE)hIl2Cpp + NEDHMLJKIOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEDHMLJKIOA* Clone()
		{
			return ((::NEDHMLJKIOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OMNEDGMJNBC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_OMNEDGMJNBC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DOACIJFKANH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_DOACIJFKANH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEDHMLJKIOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEDHMLJKIOA*))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEDHMLJKIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEDHMLJKIOA*))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEDHMLJKIOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

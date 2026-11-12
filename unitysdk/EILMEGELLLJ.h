#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILMEGELLLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EILMEGELLLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F58F240)
#define EILMEGELLLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F58F4A0)
#define EILMEGELLLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F58EE40)
#define EILMEGELLLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F58EDB0)
#define EILMEGELLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F58ED60)
#define EILMEGELLLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F58EF70)
#define EILMEGELLLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F58EE80)
#define EILMEGELLLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F58F060)
#define EILMEGELLLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F58ED20)
#define EILMEGELLLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F58F300)
#define EILMEGELLLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F58F2B0)
#define EILMEGELLLJ_MMJAKBPAMKI_OFFSET UNITYSDK_OFFSET(0x1F58EE70)
#define EILMEGELLLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F58ED50)
#define EILMEGELLLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F58F160)
#define EILMEGELLLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F58F1C0)

inline static constexpr unsigned int EILMEGELLLJ_TypeDefinitionIndex = 29049;

	class EILMEGELLLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LIEKGJAFJIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EILMEGELLLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EILMEGELLLJ*>**)UnitySDK::FromName("", "EILMEGELLLJ")->GetStaticField(0x431D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EBKKCDANBPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EILMEGELLLJ")->GetStaticField(0x431D8);
		}

		// static const ::System::Object CPMEHPBMMDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EILMEGELLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + EILMEGELLLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILMEGELLLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EILMEGELLLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EILMEGELLLJ*>*(*)())((::PBYTE)hIl2Cpp + EILMEGELLLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EILMEGELLLJ* Clone()
		{
			return ((::EILMEGELLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMJAKBPAMKI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_MMJAKBPAMKI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILMEGELLLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EILMEGELLLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + EILMEGELLLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EILMEGELLLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EILMEGELLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + EILMEGELLLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EILMEGELLLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

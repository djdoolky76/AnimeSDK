#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOKOIADHFCN;
class LKIOMEBIICO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKIOMEBIICO_ALHILDEGLDO_OFFSET UNITYSDK_OFFSET(0x1FCB23A0)
#define LKIOMEBIICO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCB2860)
#define LKIOMEBIICO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCB2C00)
#define LKIOMEBIICO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCB2350)
#define LKIOMEBIICO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCB2290)
#define LKIOMEBIICO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB2240)
#define LKIOMEBIICO_EHOGKGJGHFI_OFFSET UNITYSDK_OFFSET(0x1FCB23C0)
#define LKIOMEBIICO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCB2560)
#define LKIOMEBIICO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCB23D0)
#define LKIOMEBIICO_GEDFKJOCFCB_OFFSET UNITYSDK_OFFSET(0x1FCB23B0)
#define LKIOMEBIICO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCB2680)
#define LKIOMEBIICO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCB21D0)
#define LKIOMEBIICO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCB2A30)
#define LKIOMEBIICO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCB2990)
#define LKIOMEBIICO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCB2230)
#define LKIOMEBIICO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCB26F0)
#define LKIOMEBIICO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCB2750)

inline static constexpr unsigned int LKIOMEBIICO_TypeDefinitionIndex = 35724;

	class LKIOMEBIICO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GOKOIADHFCN*>* MHPJJKIOAPA; // 0x18
		::System::UInt32 JLDFJJGIAHG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LKIOMEBIICO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LKIOMEBIICO*>**)UnitySDK::FromName("", "LKIOMEBIICO")->GetStaticField(0x3B500);
		}

		static ::Google::Protobuf::FieldCodec_1<::GOKOIADHFCN*>** StaticGet_MFLCHECLMIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::GOKOIADHFCN*>**)UnitySDK::FromName("", "LKIOMEBIICO")->GetStaticField(0x3B508);
		}

		// static const ::System::Object JPIIPOHNKNC; // 0x0
		// static const ::System::Object LGMBBNKHEGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKIOMEBIICO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKIOMEBIICO*))((::PBYTE)hIl2Cpp + LKIOMEBIICO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKIOMEBIICO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LKIOMEBIICO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LKIOMEBIICO*>*(*)())((::PBYTE)hIl2Cpp + LKIOMEBIICO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKIOMEBIICO* Clone()
		{
			return ((::LKIOMEBIICO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GOKOIADHFCN*>* ALHILDEGLDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GOKOIADHFCN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_ALHILDEGLDO_OFFSET))(this);
		}

		::System::UInt32 GEDFKJOCFCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_GEDFKJOCFCB_OFFSET))(this);
		}

		::System::Void EHOGKGJGHFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKIOMEBIICO_EHOGKGJGHFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKIOMEBIICO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKIOMEBIICO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKIOMEBIICO*))((::PBYTE)hIl2Cpp + LKIOMEBIICO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKIOMEBIICO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKIOMEBIICO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKIOMEBIICO*))((::PBYTE)hIl2Cpp + LKIOMEBIICO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKIOMEBIICO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

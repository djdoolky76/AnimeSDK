#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJLCDCKIMON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJLCDCKIMON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE89800)
#define OJLCDCKIMON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE89AF0)
#define OJLCDCKIMON_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE89370)
#define OJLCDCKIMON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE892E0)
#define OJLCDCKIMON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE89290)
#define OJLCDCKIMON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE894D0)
#define OJLCDCKIMON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE893D0)
#define OJLCDCKIMON_FKFCAKCECHL_OFFSET UNITYSDK_OFFSET(0x1DE893C0)
#define OJLCDCKIMON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE895C0)
#define OJLCDCKIMON_HBGBMKONGFE_OFFSET UNITYSDK_OFFSET(0x1DE893A0)
#define OJLCDCKIMON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE89250)
#define OJLCDCKIMON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE89930)
#define OJLCDCKIMON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE898E0)
#define OJLCDCKIMON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE89280)
#define OJLCDCKIMON_PMBJGINOGFP_OFFSET UNITYSDK_OFFSET(0x1DE893B0)
#define OJLCDCKIMON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE896C0)
#define OJLCDCKIMON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE89720)

	class OJLCDCKIMON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPMHBGMIOKK; // 0x18
		::System::UInt32 MNFEMCJGAOD; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_JJGEFLHOIMG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OJLCDCKIMON")->GetStaticField(0x1FD30);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OJLCDCKIMON")->GetStaticField(0x1FD38);
		}

		// static const ::System::Object AJLMKACOOAG; // 0x0
		// static const ::System::Object LFHDOINBFLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJLCDCKIMON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLCDCKIMON*))((::PBYTE)hIl2Cpp + OJLCDCKIMON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLCDCKIMON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OJLCDCKIMON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJLCDCKIMON* Clone()
		{
			return ((::OJLCDCKIMON*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_CLONE_OFFSET))(this);
		}

		::System::UInt32 HBGBMKONGFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_HBGBMKONGFE_OFFSET))(this);
		}

		::System::Void PMBJGINOGFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJLCDCKIMON_PMBJGINOGFP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFCAKCECHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_FKFCAKCECHL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJLCDCKIMON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJLCDCKIMON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJLCDCKIMON*))((::PBYTE)hIl2Cpp + OJLCDCKIMON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJLCDCKIMON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJLCDCKIMON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLCDCKIMON*))((::PBYTE)hIl2Cpp + OJLCDCKIMON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJLCDCKIMON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

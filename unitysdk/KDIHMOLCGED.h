#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDIHMOLCGED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDIHMOLCGED_BAMLOLEEIML_OFFSET UNITYSDK_OFFSET(0x203CADB0)
#define KDIHMOLCGED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203CB200)
#define KDIHMOLCGED_CCTOR_OFFSET UNITYSDK_OFFSET(0x203CB4E0)
#define KDIHMOLCGED_CLONE_OFFSET UNITYSDK_OFFSET(0x203CAD70)
#define KDIHMOLCGED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203CACE0)
#define KDIHMOLCGED_CTOR_OFFSET UNITYSDK_OFFSET(0x203CAC90)
#define KDIHMOLCGED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203CAED0)
#define KDIHMOLCGED_EQUALS_OFFSET UNITYSDK_OFFSET(0x203CADD0)
#define KDIHMOLCGED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203CAFC0)
#define KDIHMOLCGED_HIAKKENIAFA_OFFSET UNITYSDK_OFFSET(0x203CADC0)
#define KDIHMOLCGED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203CAC50)
#define KDIHMOLCGED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203CB330)
#define KDIHMOLCGED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203CB2E0)
#define KDIHMOLCGED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203CAC80)
#define KDIHMOLCGED_PNKNFPCPAAI_OFFSET UNITYSDK_OFFSET(0x203CADA0)
#define KDIHMOLCGED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203CB0C0)
#define KDIHMOLCGED_WRITETO_OFFSET UNITYSDK_OFFSET(0x203CB120)

inline static constexpr unsigned int KDIHMOLCGED_TypeDefinitionIndex = 29037;

	class KDIHMOLCGED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HCDJLIGOKJI; // 0x18
		::System::UInt32 FKHIFCDFCKJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PBPHCIKJINI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDIHMOLCGED")->GetStaticField(0x6EF80);
		}

		static ::Google::Protobuf::MessageParser_1<::KDIHMOLCGED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDIHMOLCGED*>**)UnitySDK::FromName("", "KDIHMOLCGED")->GetStaticField(0x6EF88);
		}

		// static const ::System::Object LCICMEPLFGE; // 0x0
		// static const ::System::Object EPJCGCAMFDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDIHMOLCGED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDIHMOLCGED*))((::PBYTE)hIl2Cpp + KDIHMOLCGED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDIHMOLCGED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDIHMOLCGED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDIHMOLCGED*>*(*)())((::PBYTE)hIl2Cpp + KDIHMOLCGED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDIHMOLCGED* Clone()
		{
			return ((::KDIHMOLCGED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNKNFPCPAAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_PNKNFPCPAAI_OFFSET))(this);
		}

		::System::Void BAMLOLEEIML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDIHMOLCGED_BAMLOLEEIML_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIAKKENIAFA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_HIAKKENIAFA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDIHMOLCGED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDIHMOLCGED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDIHMOLCGED*))((::PBYTE)hIl2Cpp + KDIHMOLCGED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDIHMOLCGED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDIHMOLCGED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDIHMOLCGED*))((::PBYTE)hIl2Cpp + KDIHMOLCGED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDIHMOLCGED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

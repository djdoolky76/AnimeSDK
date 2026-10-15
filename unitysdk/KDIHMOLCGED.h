#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDIHMOLCGED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDIHMOLCGED_BAMLOLEEIML_OFFSET UNITYSDK_OFFSET(0x1E8013A0)
#define KDIHMOLCGED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8017E0)
#define KDIHMOLCGED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E801AD0)
#define KDIHMOLCGED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E801350)
#define KDIHMOLCGED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8012C0)
#define KDIHMOLCGED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E801270)
#define KDIHMOLCGED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8014B0)
#define KDIHMOLCGED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8013B0)
#define KDIHMOLCGED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8015A0)
#define KDIHMOLCGED_HIAKKENIAFA_OFFSET UNITYSDK_OFFSET(0x1E801380)
#define KDIHMOLCGED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E801230)
#define KDIHMOLCGED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E801920)
#define KDIHMOLCGED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8018D0)
#define KDIHMOLCGED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E801260)
#define KDIHMOLCGED_PNKNFPCPAAI_OFFSET UNITYSDK_OFFSET(0x1E801390)
#define KDIHMOLCGED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8016A0)
#define KDIHMOLCGED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E801700)

inline static constexpr unsigned int KDIHMOLCGED_TypeDefinitionIndex = 28447;

	class KDIHMOLCGED : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HCDJLIGOKJI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FKHIFCDFCKJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KDIHMOLCGED")->GetStaticField(0x11090);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PBPHCIKJINI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KDIHMOLCGED")->GetStaticField(0x11098);
		}

		// static const ::System::Object EPJCGCAMFDP; // 0x0
		// static const ::System::Object LCICMEPLFGE; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KDIHMOLCGED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDIHMOLCGED* Clone()
		{
			return ((::KDIHMOLCGED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIAKKENIAFA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_HIAKKENIAFA_OFFSET))(this);
		}

		::System::UInt32 PNKNFPCPAAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED_PNKNFPCPAAI_OFFSET))(this);
		}

		::System::Void BAMLOLEEIML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDIHMOLCGED_BAMLOLEEIML_OFFSET))(this, a1);
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

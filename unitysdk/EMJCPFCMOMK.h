#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMJCPFCMOMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMJCPFCMOMK_ACMJOLCDKMC_OFFSET UNITYSDK_OFFSET(0x1E2E30D0)
#define EMJCPFCMOMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E3500)
#define EMJCPFCMOMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E37C0)
#define EMJCPFCMOMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E3080)
#define EMJCPFCMOMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E2FF0)
#define EMJCPFCMOMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2FA0)
#define EMJCPFCMOMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E3200)
#define EMJCPFCMOMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E30E0)
#define EMJCPFCMOMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E32F0)
#define EMJCPFCMOMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E2F30)
#define EMJCPFCMOMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E35F0)
#define EMJCPFCMOMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E35A0)
#define EMJCPFCMOMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2F90)
#define EMJCPFCMOMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E33F0)
#define EMJCPFCMOMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E3450)

inline static constexpr unsigned int EMJCPFCMOMK_TypeDefinitionIndex = 26742;

	class EMJCPFCMOMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KDKCGFGBJNE; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PGABLILFKNH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EMJCPFCMOMK")->GetStaticField(0x53970);
		}

		static ::Google::Protobuf::MessageParser_1<::EMJCPFCMOMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMJCPFCMOMK*>**)UnitySDK::FromName("", "EMJCPFCMOMK")->GetStaticField(0x53978);
		}

		// static const ::System::Object EDCOLDPLGAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMJCPFCMOMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMJCPFCMOMK*))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMJCPFCMOMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMJCPFCMOMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMJCPFCMOMK*>*(*)())((::PBYTE)hIl2Cpp + EMJCPFCMOMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMJCPFCMOMK* Clone()
		{
			return ((::EMJCPFCMOMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ACMJOLCDKMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_ACMJOLCDKMC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMJCPFCMOMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMJCPFCMOMK*))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMJCPFCMOMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMJCPFCMOMK*))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMJCPFCMOMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

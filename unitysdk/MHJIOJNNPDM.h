#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHJIOJNNPDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHJIOJNNPDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA05C40)
#define MHJIOJNNPDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA05F00)
#define MHJIOJNNPDM_CKCIFOBGMKD_OFFSET UNITYSDK_OFFSET(0x1EA05810)
#define MHJIOJNNPDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA057C0)
#define MHJIOJNNPDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA05730)
#define MHJIOJNNPDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA056E0)
#define MHJIOJNNPDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA05940)
#define MHJIOJNNPDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA05820)
#define MHJIOJNNPDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA05A30)
#define MHJIOJNNPDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA05670)
#define MHJIOJNNPDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA05D30)
#define MHJIOJNNPDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA05CE0)
#define MHJIOJNNPDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA056D0)
#define MHJIOJNNPDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA05B30)
#define MHJIOJNNPDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA05B90)

inline static constexpr unsigned int MHJIOJNNPDM_TypeDefinitionIndex = 29484;

	class MHJIOJNNPDM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJIOBHPOEIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GOKCHGKCBMD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MHJIOJNNPDM")->GetStaticField(0x51EA0);
		}

		static ::Google::Protobuf::MessageParser_1<::MHJIOJNNPDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHJIOJNNPDM*>**)UnitySDK::FromName("", "MHJIOJNNPDM")->GetStaticField(0x51EA8);
		}

		// static const ::System::Object CFNLKMMLIIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHJIOJNNPDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHJIOJNNPDM*))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHJIOJNNPDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHJIOJNNPDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHJIOJNNPDM*>*(*)())((::PBYTE)hIl2Cpp + MHJIOJNNPDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHJIOJNNPDM* Clone()
		{
			return ((::MHJIOJNNPDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKCIFOBGMKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_CKCIFOBGMKD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHJIOJNNPDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHJIOJNNPDM*))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHJIOJNNPDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHJIOJNNPDM*))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHJIOJNNPDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

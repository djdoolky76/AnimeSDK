#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFAGCMDGHPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFAGCMDGHPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA14290)
#define MFAGCMDGHPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA14330)
#define MFAGCMDGHPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA13F80)
#define MFAGCMDGHPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA13F50)
#define MFAGCMDGHPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA13F40)
#define MFAGCMDGHPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA14090)
#define MFAGCMDGHPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA13FC0)
#define MFAGCMDGHPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA141F0)
#define MFAGCMDGHPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA13F00)
#define MFAGCMDGHPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA142E0)
#define MFAGCMDGHPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA142B0)
#define MFAGCMDGHPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA13F30)
#define MFAGCMDGHPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA14220)
#define MFAGCMDGHPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA14280)

inline static constexpr unsigned int MFAGCMDGHPJ_TypeDefinitionIndex = 28376;

	class MFAGCMDGHPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MFAGCMDGHPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFAGCMDGHPJ*>**)UnitySDK::FromName("", "MFAGCMDGHPJ")->GetStaticField(0x4BBF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFAGCMDGHPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFAGCMDGHPJ*))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MFAGCMDGHPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFAGCMDGHPJ*>*(*)())((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFAGCMDGHPJ* Clone()
		{
			return ((::MFAGCMDGHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFAGCMDGHPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFAGCMDGHPJ*))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFAGCMDGHPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFAGCMDGHPJ*))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

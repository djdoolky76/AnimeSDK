#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGNJEEKBNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAGNJEEKBNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E02D5C0)
#define CAGNJEEKBNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02D660)
#define CAGNJEEKBNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E02D2B0)
#define CAGNJEEKBNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E02D280)
#define CAGNJEEKBNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02D270)
#define CAGNJEEKBNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E02D3C0)
#define CAGNJEEKBNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E02D2F0)
#define CAGNJEEKBNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E02D520)
#define CAGNJEEKBNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E02D230)
#define CAGNJEEKBNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E02D610)
#define CAGNJEEKBNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E02D5E0)
#define CAGNJEEKBNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E02D260)
#define CAGNJEEKBNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E02D550)
#define CAGNJEEKBNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E02D5B0)

inline static constexpr unsigned int CAGNJEEKBNN_TypeDefinitionIndex = 32708;

	class CAGNJEEKBNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CAGNJEEKBNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CAGNJEEKBNN*>**)UnitySDK::FromName("", "CAGNJEEKBNN")->GetStaticField(0x1A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAGNJEEKBNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGNJEEKBNN*))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAGNJEEKBNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CAGNJEEKBNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CAGNJEEKBNN*>*(*)())((::PBYTE)hIl2Cpp + CAGNJEEKBNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAGNJEEKBNN* Clone()
		{
			return ((::CAGNJEEKBNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAGNJEEKBNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAGNJEEKBNN*))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAGNJEEKBNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGNJEEKBNN*))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAGNJEEKBNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGCJKEEOPEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGCJKEEOPEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD715D0)
#define MGCJKEEOPEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD71670)
#define MGCJKEEOPEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD712C0)
#define MGCJKEEOPEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD71290)
#define MGCJKEEOPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD71280)
#define MGCJKEEOPEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD713D0)
#define MGCJKEEOPEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD71300)
#define MGCJKEEOPEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD71530)
#define MGCJKEEOPEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD71240)
#define MGCJKEEOPEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD71620)
#define MGCJKEEOPEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD715F0)
#define MGCJKEEOPEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD71270)
#define MGCJKEEOPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD71560)
#define MGCJKEEOPEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD715C0)

inline static constexpr unsigned int MGCJKEEOPEC_TypeDefinitionIndex = 28321;

	class MGCJKEEOPEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MGCJKEEOPEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGCJKEEOPEC*>**)UnitySDK::FromName("", "MGCJKEEOPEC")->GetStaticField(0x54350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGCJKEEOPEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGCJKEEOPEC*))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGCJKEEOPEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGCJKEEOPEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGCJKEEOPEC*>*(*)())((::PBYTE)hIl2Cpp + MGCJKEEOPEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGCJKEEOPEC* Clone()
		{
			return ((::MGCJKEEOPEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGCJKEEOPEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGCJKEEOPEC*))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGCJKEEOPEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGCJKEEOPEC*))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGCJKEEOPEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

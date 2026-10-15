#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCFHMPGKDBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCFHMPGKDBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF07B40)
#define PCFHMPGKDBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF07BE0)
#define PCFHMPGKDBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF07830)
#define PCFHMPGKDBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF07800)
#define PCFHMPGKDBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF077F0)
#define PCFHMPGKDBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF07940)
#define PCFHMPGKDBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF07870)
#define PCFHMPGKDBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF07AA0)
#define PCFHMPGKDBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF077B0)
#define PCFHMPGKDBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF07B90)
#define PCFHMPGKDBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF07B60)
#define PCFHMPGKDBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF077E0)
#define PCFHMPGKDBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF07AD0)
#define PCFHMPGKDBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF07B30)

inline static constexpr unsigned int PCFHMPGKDBD_TypeDefinitionIndex = 27457;

	class PCFHMPGKDBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PCFHMPGKDBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCFHMPGKDBD*>**)UnitySDK::FromName("", "PCFHMPGKDBD")->GetStaticField(0x35C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCFHMPGKDBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCFHMPGKDBD*))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCFHMPGKDBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCFHMPGKDBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCFHMPGKDBD*>*(*)())((::PBYTE)hIl2Cpp + PCFHMPGKDBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCFHMPGKDBD* Clone()
		{
			return ((::PCFHMPGKDBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCFHMPGKDBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCFHMPGKDBD*))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCFHMPGKDBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCFHMPGKDBD*))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCFHMPGKDBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

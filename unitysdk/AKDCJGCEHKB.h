#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDCJGCEHKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKDCJGCEHKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C8BD0)
#define AKDCJGCEHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8C70)
#define AKDCJGCEHKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C88C0)
#define AKDCJGCEHKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C8890)
#define AKDCJGCEHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8880)
#define AKDCJGCEHKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C89D0)
#define AKDCJGCEHKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C8900)
#define AKDCJGCEHKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C8B30)
#define AKDCJGCEHKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C8840)
#define AKDCJGCEHKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C8C20)
#define AKDCJGCEHKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C8BF0)
#define AKDCJGCEHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8870)
#define AKDCJGCEHKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C8B60)
#define AKDCJGCEHKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C8BC0)

inline static constexpr unsigned int AKDCJGCEHKB_TypeDefinitionIndex = 34481;

	class AKDCJGCEHKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AKDCJGCEHKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKDCJGCEHKB*>**)UnitySDK::FromName("", "AKDCJGCEHKB")->GetStaticField(0x36590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKDCJGCEHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDCJGCEHKB*))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDCJGCEHKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKDCJGCEHKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKDCJGCEHKB*>*(*)())((::PBYTE)hIl2Cpp + AKDCJGCEHKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKDCJGCEHKB* Clone()
		{
			return ((::AKDCJGCEHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKDCJGCEHKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKDCJGCEHKB*))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKDCJGCEHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDCJGCEHKB*))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKDCJGCEHKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

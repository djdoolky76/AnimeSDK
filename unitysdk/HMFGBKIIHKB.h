#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMFGBKIIHKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMFGBKIIHKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59FD70)
#define HMFGBKIIHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59FE10)
#define HMFGBKIIHKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59FA60)
#define HMFGBKIIHKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59FA30)
#define HMFGBKIIHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59FA20)
#define HMFGBKIIHKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59FB70)
#define HMFGBKIIHKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59FAA0)
#define HMFGBKIIHKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59FCD0)
#define HMFGBKIIHKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59F9E0)
#define HMFGBKIIHKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59FDC0)
#define HMFGBKIIHKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59FD90)
#define HMFGBKIIHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59FA10)
#define HMFGBKIIHKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59FD00)
#define HMFGBKIIHKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59FD60)

inline static constexpr unsigned int HMFGBKIIHKB_TypeDefinitionIndex = 32122;

	class HMFGBKIIHKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HMFGBKIIHKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMFGBKIIHKB*>**)UnitySDK::FromName("", "HMFGBKIIHKB")->GetStaticField(0x398E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMFGBKIIHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMFGBKIIHKB*))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFGBKIIHKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMFGBKIIHKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMFGBKIIHKB*>*(*)())((::PBYTE)hIl2Cpp + HMFGBKIIHKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMFGBKIIHKB* Clone()
		{
			return ((::HMFGBKIIHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMFGBKIIHKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMFGBKIIHKB*))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMFGBKIIHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMFGBKIIHKB*))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMFGBKIIHKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

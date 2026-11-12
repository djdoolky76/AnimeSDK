#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHLAKBNPCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNHLAKBNPCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBDF900)
#define KNHLAKBNPCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBDF9A0)
#define KNHLAKBNPCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBDF5F0)
#define KNHLAKBNPCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBDF5C0)
#define KNHLAKBNPCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDF5B0)
#define KNHLAKBNPCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBDF700)
#define KNHLAKBNPCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBDF630)
#define KNHLAKBNPCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBDF860)
#define KNHLAKBNPCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBDF570)
#define KNHLAKBNPCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBDF950)
#define KNHLAKBNPCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBDF920)
#define KNHLAKBNPCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBDF5A0)
#define KNHLAKBNPCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBDF890)
#define KNHLAKBNPCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBDF8F0)

inline static constexpr unsigned int KNHLAKBNPCB_TypeDefinitionIndex = 35606;

	class KNHLAKBNPCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KNHLAKBNPCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNHLAKBNPCB*>**)UnitySDK::FromName("", "KNHLAKBNPCB")->GetStaticField(0x1CDE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNHLAKBNPCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHLAKBNPCB*))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHLAKBNPCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNHLAKBNPCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNHLAKBNPCB*>*(*)())((::PBYTE)hIl2Cpp + KNHLAKBNPCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNHLAKBNPCB* Clone()
		{
			return ((::KNHLAKBNPCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNHLAKBNPCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNHLAKBNPCB*))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNHLAKBNPCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHLAKBNPCB*))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNHLAKBNPCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

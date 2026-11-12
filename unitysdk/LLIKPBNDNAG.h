#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLIKPBNDNAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLIKPBNDNAG_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1FCBE8A0)
#define LLIKPBNDNAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCBEC10)
#define LLIKPBNDNAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCBEE30)
#define LLIKPBNDNAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCBE860)
#define LLIKPBNDNAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCBE830)
#define LLIKPBNDNAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCBE820)
#define LLIKPBNDNAG_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1FCBE8B0)
#define LLIKPBNDNAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCBE990)
#define LLIKPBNDNAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCBE8C0)
#define LLIKPBNDNAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCBEB00)
#define LLIKPBNDNAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCBE7E0)
#define LLIKPBNDNAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCBECD0)
#define LLIKPBNDNAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCBECA0)
#define LLIKPBNDNAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCBE810)
#define LLIKPBNDNAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCBEB30)
#define LLIKPBNDNAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCBEB90)

inline static constexpr unsigned int LLIKPBNDNAG_TypeDefinitionIndex = 30606;

	class LLIKPBNDNAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LLIKPBNDNAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLIKPBNDNAG*>**)UnitySDK::FromName("", "LLIKPBNDNAG")->GetStaticField(0x3EBD0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLIKPBNDNAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLIKPBNDNAG*))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLIKPBNDNAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLIKPBNDNAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLIKPBNDNAG*>*(*)())((::PBYTE)hIl2Cpp + LLIKPBNDNAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLIKPBNDNAG* Clone()
		{
			return ((::LLIKPBNDNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLIKPBNDNAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLIKPBNDNAG*))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLIKPBNDNAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLIKPBNDNAG*))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLIKPBNDNAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

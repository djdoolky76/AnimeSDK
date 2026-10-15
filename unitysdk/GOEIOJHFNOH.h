#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOEIOJHFNOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOEIOJHFNOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EE270)
#define GOEIOJHFNOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EE490)
#define GOEIOJHFNOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EDEC0)
#define GOEIOJHFNOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EDE90)
#define GOEIOJHFNOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EDE80)
#define GOEIOJHFNOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EDFF0)
#define GOEIOJHFNOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EDF20)
#define GOEIOJHFNOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EE160)
#define GOEIOJHFNOH_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E4EDF10)
#define GOEIOJHFNOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EDE40)
#define GOEIOJHFNOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4EE330)
#define GOEIOJHFNOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4EE300)
#define GOEIOJHFNOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EDE70)
#define GOEIOJHFNOH_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E4EDF00)
#define GOEIOJHFNOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EE190)
#define GOEIOJHFNOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EE1F0)

inline static constexpr unsigned int GOEIOJHFNOH_TypeDefinitionIndex = 30384;

	class GOEIOJHFNOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOEIOJHFNOH")->GetStaticField(0x2B0A0);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOEIOJHFNOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOEIOJHFNOH*))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOEIOJHFNOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOEIOJHFNOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOEIOJHFNOH* Clone()
		{
			return ((::GOEIOJHFNOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOEIOJHFNOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOEIOJHFNOH*))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOEIOJHFNOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOEIOJHFNOH*))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOEIOJHFNOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

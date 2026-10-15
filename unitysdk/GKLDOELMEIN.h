#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKLDOELMEIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKLDOELMEIN_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E48C030)
#define GKLDOELMEIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48C3D0)
#define GKLDOELMEIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48C5F0)
#define GKLDOELMEIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48BFC0)
#define GKLDOELMEIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48BF90)
#define GKLDOELMEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48BF80)
#define GKLDOELMEIN_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E48C040)
#define GKLDOELMEIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48C150)
#define GKLDOELMEIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48C050)
#define GKLDOELMEIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48C2C0)
#define GKLDOELMEIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48BF10)
#define GKLDOELMEIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48C490)
#define GKLDOELMEIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48C460)
#define GKLDOELMEIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48BF70)
#define GKLDOELMEIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48C2F0)
#define GKLDOELMEIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48C350)

inline static constexpr unsigned int GKLDOELMEIN_TypeDefinitionIndex = 29511;

	class GKLDOELMEIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GKLDOELMEIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKLDOELMEIN*>**)UnitySDK::FromName("", "GKLDOELMEIN")->GetStaticField(0x1C0C0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKLDOELMEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKLDOELMEIN*))((::PBYTE)hIl2Cpp + GKLDOELMEIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKLDOELMEIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKLDOELMEIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKLDOELMEIN*>*(*)())((::PBYTE)hIl2Cpp + GKLDOELMEIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKLDOELMEIN* Clone()
		{
			return ((::GKLDOELMEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKLDOELMEIN_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKLDOELMEIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKLDOELMEIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKLDOELMEIN*))((::PBYTE)hIl2Cpp + GKLDOELMEIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKLDOELMEIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKLDOELMEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKLDOELMEIN*))((::PBYTE)hIl2Cpp + GKLDOELMEIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKLDOELMEIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

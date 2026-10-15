#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBJCCOCANEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBJCCOCANEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B84A0)
#define MBJCCOCANEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B86C0)
#define MBJCCOCANEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B80F0)
#define MBJCCOCANEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B80C0)
#define MBJCCOCANEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B80B0)
#define MBJCCOCANEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B8220)
#define MBJCCOCANEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B8150)
#define MBJCCOCANEJ_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E9B8140)
#define MBJCCOCANEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B8390)
#define MBJCCOCANEJ_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E9B8130)
#define MBJCCOCANEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B8070)
#define MBJCCOCANEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B8560)
#define MBJCCOCANEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B8530)
#define MBJCCOCANEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B80A0)
#define MBJCCOCANEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B83C0)
#define MBJCCOCANEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B8420)

inline static constexpr unsigned int MBJCCOCANEJ_TypeDefinitionIndex = 27361;

	class MBJCCOCANEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MBJCCOCANEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBJCCOCANEJ*>**)UnitySDK::FromName("", "MBJCCOCANEJ")->GetStaticField(0x47950);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBJCCOCANEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBJCCOCANEJ*))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBJCCOCANEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBJCCOCANEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBJCCOCANEJ*>*(*)())((::PBYTE)hIl2Cpp + MBJCCOCANEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBJCCOCANEJ* Clone()
		{
			return ((::MBJCCOCANEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBJCCOCANEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBJCCOCANEJ*))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBJCCOCANEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBJCCOCANEJ*))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBJCCOCANEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

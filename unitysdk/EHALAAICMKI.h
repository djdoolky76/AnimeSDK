#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHALAAICMKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHALAAICMKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF84E00)
#define EHALAAICMKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF85020)
#define EHALAAICMKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF849F0)
#define EHALAAICMKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF849C0)
#define EHALAAICMKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF849B0)
#define EHALAAICMKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF84B80)
#define EHALAAICMKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF84A80)
#define EHALAAICMKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF84CF0)
#define EHALAAICMKI_HBIIAFIBINB_OFFSET UNITYSDK_OFFSET(0x1FF84A70)
#define EHALAAICMKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF84940)
#define EHALAAICMKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF84EC0)
#define EHALAAICMKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF84E90)
#define EHALAAICMKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF849A0)
#define EHALAAICMKI_PMBIFIHANOI_OFFSET UNITYSDK_OFFSET(0x1FF84A60)
#define EHALAAICMKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF84D20)
#define EHALAAICMKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF84D80)

inline static constexpr unsigned int EHALAAICMKI_TypeDefinitionIndex = 30035;

	class EHALAAICMKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNBAANFEAGG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EHALAAICMKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EHALAAICMKI*>**)UnitySDK::FromName("", "EHALAAICMKI")->GetStaticField(0x3BE60);
		}

		// static const ::System::Object MJGCDMOFALP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHALAAICMKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHALAAICMKI*))((::PBYTE)hIl2Cpp + EHALAAICMKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHALAAICMKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EHALAAICMKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EHALAAICMKI*>*(*)())((::PBYTE)hIl2Cpp + EHALAAICMKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHALAAICMKI* Clone()
		{
			return ((::EHALAAICMKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBIFIHANOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_PMBIFIHANOI_OFFSET))(this);
		}

		::System::Void HBIIAFIBINB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHALAAICMKI_HBIIAFIBINB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHALAAICMKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHALAAICMKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHALAAICMKI*))((::PBYTE)hIl2Cpp + EHALAAICMKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHALAAICMKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHALAAICMKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHALAAICMKI*))((::PBYTE)hIl2Cpp + EHALAAICMKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHALAAICMKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOAKCDKAAFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOAKCDKAAFB_AFKIOFMMBCI_OFFSET UNITYSDK_OFFSET(0x1EB5A8C0)
#define NOAKCDKAAFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5AC70)
#define NOAKCDKAAFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5AED0)
#define NOAKCDKAAFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5A820)
#define NOAKCDKAAFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5A7E0)
#define NOAKCDKAAFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5A7D0)
#define NOAKCDKAAFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5A9F0)
#define NOAKCDKAAFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5A8E0)
#define NOAKCDKAAFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5AAD0)
#define NOAKCDKAAFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5A760)
#define NOAKCDKAAFB_LFMEOHCIPNA_OFFSET UNITYSDK_OFFSET(0x1EB5A8D0)
#define NOAKCDKAAFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5AD50)
#define NOAKCDKAAFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5AD10)
#define NOAKCDKAAFB_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1EB5A8A0)
#define NOAKCDKAAFB_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1EB5A8B0)
#define NOAKCDKAAFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5A7C0)
#define NOAKCDKAAFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5AB00)
#define NOAKCDKAAFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5AB60)

inline static constexpr unsigned int NOAKCDKAAFB_TypeDefinitionIndex = 33519;

	class NOAKCDKAAFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GLKOGIDPGAD; // 0x18
		::System::Boolean LOEPIAFBCIJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NOAKCDKAAFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOAKCDKAAFB*>**)UnitySDK::FromName("", "NOAKCDKAAFB")->GetStaticField(0xAC70);
		}

		// static const ::System::Object OPKLCINAFJC; // 0x0
		// static const ::System::Object CJEFLOJMNCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOAKCDKAAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOAKCDKAAFB*))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOAKCDKAAFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOAKCDKAAFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOAKCDKAAFB*>*(*)())((::PBYTE)hIl2Cpp + NOAKCDKAAFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOAKCDKAAFB* Clone()
		{
			return ((::NOAKCDKAAFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_CLONE_OFFSET))(this);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::UInt32 AFKIOFMMBCI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_AFKIOFMMBCI_OFFSET))(this);
		}

		::System::Void LFMEOHCIPNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_LFMEOHCIPNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOAKCDKAAFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOAKCDKAAFB*))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOAKCDKAAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOAKCDKAAFB*))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOAKCDKAAFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

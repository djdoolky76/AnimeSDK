#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDLACKBINMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDLACKBINMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2013C370)
#define IDLACKBINMC_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0x2013BD90)
#define IDLACKBINMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x2013C660)
#define IDLACKBINMC_CLONE_OFFSET UNITYSDK_OFFSET(0x2013BD10)
#define IDLACKBINMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2013BCC0)
#define IDLACKBINMC_CTOR_OFFSET UNITYSDK_OFFSET(0x2013BCA0)
#define IDLACKBINMC_DEFKBKNBFGI_OFFSET UNITYSDK_OFFSET(0x2013BE00)
#define IDLACKBINMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2013BFA0)
#define IDLACKBINMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x2013BE50)
#define IDLACKBINMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2013C0D0)
#define IDLACKBINMC_HAGOCIKDPCD_OFFSET UNITYSDK_OFFSET(0x2013BDF0)
#define IDLACKBINMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2013BC30)
#define IDLACKBINMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2013C470)
#define IDLACKBINMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2013C410)
#define IDLACKBINMC_OGLMLLBICMH_OFFSET UNITYSDK_OFFSET(0x2013BDA0)
#define IDLACKBINMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2013BC90)
#define IDLACKBINMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2013C210)
#define IDLACKBINMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x2013C270)

inline static constexpr unsigned int IDLACKBINMC_TypeDefinitionIndex = 25715;

	class IDLACKBINMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* MDPFLIGGADI; // 0x18
		::System::String* MEODIHMCOPP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IDLACKBINMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDLACKBINMC*>**)UnitySDK::FromName("", "IDLACKBINMC")->GetStaticField(0x4B420);
		}

		// static const ::System::Object PBBIACCKPME; // 0x0
		// static const ::System::Object FAHFDBHFHEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDLACKBINMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDLACKBINMC*))((::PBYTE)hIl2Cpp + IDLACKBINMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDLACKBINMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDLACKBINMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDLACKBINMC*>*(*)())((::PBYTE)hIl2Cpp + IDLACKBINMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDLACKBINMC* Clone()
		{
			return ((::IDLACKBINMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_CLONE_OFFSET))(this);
		}

		::System::String* CBJLPOGLLOG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_CBJLPOGLLOG_OFFSET))(this);
		}

		::System::Void OGLMLLBICMH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDLACKBINMC_OGLMLLBICMH_OFFSET))(this, a1);
		}

		::System::String* HAGOCIKDPCD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_HAGOCIKDPCD_OFFSET))(this);
		}

		::System::Void DEFKBKNBFGI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDLACKBINMC_DEFKBKNBFGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDLACKBINMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDLACKBINMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDLACKBINMC*))((::PBYTE)hIl2Cpp + IDLACKBINMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDLACKBINMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDLACKBINMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDLACKBINMC*))((::PBYTE)hIl2Cpp + IDLACKBINMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDLACKBINMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

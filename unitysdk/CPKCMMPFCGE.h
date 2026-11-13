#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDGGEHGLFAC;
class CPKCMMPFCGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPKCMMPFCGE_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x204E9420)
#define CPKCMMPFCGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204E9940)
#define CPKCMMPFCGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E9D60)
#define CPKCMMPFCGE_CLONE_OFFSET UNITYSDK_OFFSET(0x204E93B0)
#define CPKCMMPFCGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204E92F0)
#define CPKCMMPFCGE_CTOR_OFFSET UNITYSDK_OFFSET(0x204E92A0)
#define CPKCMMPFCGE_EAKHLAHHFIK_OFFSET UNITYSDK_OFFSET(0x204E9400)
#define CPKCMMPFCGE_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x204E9430)
#define CPKCMMPFCGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204E95E0)
#define CPKCMMPFCGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x204E9450)
#define CPKCMMPFCGE_FAMIJKHGIKL_OFFSET UNITYSDK_OFFSET(0x204E9410)
#define CPKCMMPFCGE_FLAHAHNGBGI_OFFSET UNITYSDK_OFFSET(0x204E9440)
#define CPKCMMPFCGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204E9710)
#define CPKCMMPFCGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204E9230)
#define CPKCMMPFCGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204E9B70)
#define CPKCMMPFCGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204E9AC0)
#define CPKCMMPFCGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204E9290)
#define CPKCMMPFCGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204E9780)
#define CPKCMMPFCGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x204E97E0)

inline static constexpr unsigned int CPKCMMPFCGE_TypeDefinitionIndex = 35740;

	class CPKCMMPFCGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BDGGEHGLFAC*>* DLMMPIOEEGC; // 0x18
		::System::UInt32 LIDFELPFAAE; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CPKCMMPFCGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPKCMMPFCGE*>**)UnitySDK::FromName("", "CPKCMMPFCGE")->GetStaticField(0x19530);
		}

		static ::Google::Protobuf::FieldCodec_1<::BDGGEHGLFAC*>** StaticGet_MIMEENFDPGI()
		{
			return (::Google::Protobuf::FieldCodec_1<::BDGGEHGLFAC*>**)UnitySDK::FromName("", "CPKCMMPFCGE")->GetStaticField(0x19538);
		}

		// static const ::System::Object IGLNBOAGENJ; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object CEBJBEGDHAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPKCMMPFCGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPKCMMPFCGE*))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKCMMPFCGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPKCMMPFCGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPKCMMPFCGE*>*(*)())((::PBYTE)hIl2Cpp + CPKCMMPFCGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPKCMMPFCGE* Clone()
		{
			return ((::CPKCMMPFCGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 EAKHLAHHFIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_EAKHLAHHFIK_OFFSET))(this);
		}

		::System::Void FAMIJKHGIKL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_FAMIJKHGIKL_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BDGGEHGLFAC*>* FLAHAHNGBGI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BDGGEHGLFAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_FLAHAHNGBGI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPKCMMPFCGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPKCMMPFCGE*))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPKCMMPFCGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPKCMMPFCGE*))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPKCMMPFCGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

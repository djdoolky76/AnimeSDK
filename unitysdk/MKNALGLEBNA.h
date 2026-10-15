#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJFIEPMMGG;
class MKNALGLEBNA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKNALGLEBNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2E4F0)
#define MKNALGLEBNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2E790)
#define MKNALGLEBNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2DE80)
#define MKNALGLEBNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2DE10)
#define MKNALGLEBNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DE00)
#define MKNALGLEBNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2E090)
#define MKNALGLEBNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2DF20)
#define MKNALGLEBNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2E360)
#define MKNALGLEBNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2DDC0)
#define MKNALGLEBNA_KECIECOKPEE_OFFSET UNITYSDK_OFFSET(0x1EA2DF10)
#define MKNALGLEBNA_LOPBOHCNNDN_OFFSET UNITYSDK_OFFSET(0x1EA2DF00)
#define MKNALGLEBNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2E5E0)
#define MKNALGLEBNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2E550)
#define MKNALGLEBNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DDF0)
#define MKNALGLEBNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2E400)
#define MKNALGLEBNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2E460)

inline static constexpr unsigned int MKNALGLEBNA_TypeDefinitionIndex = 33018;

	class MKNALGLEBNA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LEJFIEPMMGG* GPBPLBBDMKA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKNALGLEBNA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKNALGLEBNA*>**)UnitySDK::FromName("", "MKNALGLEBNA")->GetStaticField(0x55330);
		}

		// static const ::System::Object FAOPLNDAAOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKNALGLEBNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNALGLEBNA*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKNALGLEBNA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKNALGLEBNA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKNALGLEBNA*>*(*)())((::PBYTE)hIl2Cpp + MKNALGLEBNA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKNALGLEBNA* Clone()
		{
			return ((::MKNALGLEBNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_CLONE_OFFSET))(this);
		}

		::LEJFIEPMMGG* LOPBOHCNNDN()
		{
			return ((::LEJFIEPMMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_LOPBOHCNNDN_OFFSET))(this);
		}

		::System::Void KECIECOKPEE(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_KECIECOKPEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKNALGLEBNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKNALGLEBNA*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKNALGLEBNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNALGLEBNA*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKNALGLEBNA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

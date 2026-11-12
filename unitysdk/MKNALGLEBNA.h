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

#define MKNALGLEBNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDAE3B0)
#define MKNALGLEBNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDAE650)
#define MKNALGLEBNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDADD40)
#define MKNALGLEBNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDADCD0)
#define MKNALGLEBNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDADCC0)
#define MKNALGLEBNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDADF50)
#define MKNALGLEBNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDADDE0)
#define MKNALGLEBNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDAE220)
#define MKNALGLEBNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDADC80)
#define MKNALGLEBNA_KECIECOKPEE_OFFSET UNITYSDK_OFFSET(0x1FDADDD0)
#define MKNALGLEBNA_LOPBOHCNNDN_OFFSET UNITYSDK_OFFSET(0x1FDADDC0)
#define MKNALGLEBNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDAE4A0)
#define MKNALGLEBNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDAE410)
#define MKNALGLEBNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDADCB0)
#define MKNALGLEBNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDAE2C0)
#define MKNALGLEBNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDAE320)

inline static constexpr unsigned int MKNALGLEBNA_TypeDefinitionIndex = 33933;

	class MKNALGLEBNA : public ::System::Object
	{
	public:
		::LEJFIEPMMGG* GPBPLBBDMKA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKNALGLEBNA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKNALGLEBNA*>**)UnitySDK::FromName("", "MKNALGLEBNA")->GetStaticField(0x5C100);
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

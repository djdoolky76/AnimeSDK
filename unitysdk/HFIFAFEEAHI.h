#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFIFAFEEAHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFIFAFEEAHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53EDF0)
#define HFIFAFEEAHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53F010)
#define HFIFAFEEAHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53EA40)
#define HFIFAFEEAHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53EA10)
#define HFIFAFEEAHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53EA00)
#define HFIFAFEEAHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53EB70)
#define HFIFAFEEAHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53EAA0)
#define HFIFAFEEAHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53ECE0)
#define HFIFAFEEAHI_JCEFDMEHDJF_OFFSET UNITYSDK_OFFSET(0x1E53EA80)
#define HFIFAFEEAHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53E9C0)
#define HFIFAFEEAHI_LDMMPLGGLMD_OFFSET UNITYSDK_OFFSET(0x1E53EA90)
#define HFIFAFEEAHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53EEB0)
#define HFIFAFEEAHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53EE80)
#define HFIFAFEEAHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53E9F0)
#define HFIFAFEEAHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53ED10)
#define HFIFAFEEAHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53ED70)

inline static constexpr unsigned int HFIFAFEEAHI_TypeDefinitionIndex = 31366;

	class HFIFAFEEAHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LLBCGALCHAK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFIFAFEEAHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFIFAFEEAHI*>**)UnitySDK::FromName("", "HFIFAFEEAHI")->GetStaticField(0x2F870);
		}

		// static const ::System::Object CCDELIKLFKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFIFAFEEAHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFIFAFEEAHI*))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFIFAFEEAHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFIFAFEEAHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFIFAFEEAHI*>*(*)())((::PBYTE)hIl2Cpp + HFIFAFEEAHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFIFAFEEAHI* Clone()
		{
			return ((::HFIFAFEEAHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 JCEFDMEHDJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_JCEFDMEHDJF_OFFSET))(this);
		}

		::System::Void LDMMPLGGLMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_LDMMPLGGLMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFIFAFEEAHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFIFAFEEAHI*))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFIFAFEEAHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFIFAFEEAHI*))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFIFAFEEAHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

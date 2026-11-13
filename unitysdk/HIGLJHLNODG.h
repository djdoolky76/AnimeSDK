#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIGLJHLNODG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIGLJHLNODG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2051F7B0)
#define HIGLJHLNODG_CCTOR_OFFSET UNITYSDK_OFFSET(0x2051F9D0)
#define HIGLJHLNODG_CLONE_OFFSET UNITYSDK_OFFSET(0x2051F400)
#define HIGLJHLNODG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2051F3D0)
#define HIGLJHLNODG_CTOR_OFFSET UNITYSDK_OFFSET(0x2051F3C0)
#define HIGLJHLNODG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2051F530)
#define HIGLJHLNODG_EQUALS_OFFSET UNITYSDK_OFFSET(0x2051F460)
#define HIGLJHLNODG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2051F6A0)
#define HIGLJHLNODG_GKCAGCABLNO_OFFSET UNITYSDK_OFFSET(0x2051F440)
#define HIGLJHLNODG_IHEDLHGKALF_OFFSET UNITYSDK_OFFSET(0x2051F450)
#define HIGLJHLNODG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2051F380)
#define HIGLJHLNODG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2051F870)
#define HIGLJHLNODG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2051F840)
#define HIGLJHLNODG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2051F3B0)
#define HIGLJHLNODG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2051F6D0)
#define HIGLJHLNODG_WRITETO_OFFSET UNITYSDK_OFFSET(0x2051F730)

inline static constexpr unsigned int HIGLJHLNODG_TypeDefinitionIndex = 26945;

	class HIGLJHLNODG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EGLJOMKELGA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HIGLJHLNODG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIGLJHLNODG*>**)UnitySDK::FromName("", "HIGLJHLNODG")->GetStaticField(0x2F6F0);
		}

		// static const ::System::Object PCKHPMIGAEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIGLJHLNODG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIGLJHLNODG*))((::PBYTE)hIl2Cpp + HIGLJHLNODG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGLJHLNODG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIGLJHLNODG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIGLJHLNODG*>*(*)())((::PBYTE)hIl2Cpp + HIGLJHLNODG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIGLJHLNODG* Clone()
		{
			return ((::HIGLJHLNODG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GKCAGCABLNO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_GKCAGCABLNO_OFFSET))(this);
		}

		::System::Void IHEDLHGKALF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIGLJHLNODG_IHEDLHGKALF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIGLJHLNODG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIGLJHLNODG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIGLJHLNODG*))((::PBYTE)hIl2Cpp + HIGLJHLNODG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIGLJHLNODG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIGLJHLNODG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIGLJHLNODG*))((::PBYTE)hIl2Cpp + HIGLJHLNODG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIGLJHLNODG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

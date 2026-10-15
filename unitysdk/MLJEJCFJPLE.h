#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLJEJCFJPLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLJEJCFJPLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA565A0)
#define MLJEJCFJPLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA56640)
#define MLJEJCFJPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA56290)
#define MLJEJCFJPLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA56260)
#define MLJEJCFJPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56250)
#define MLJEJCFJPLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA563A0)
#define MLJEJCFJPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA562D0)
#define MLJEJCFJPLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA56500)
#define MLJEJCFJPLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA56210)
#define MLJEJCFJPLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA565F0)
#define MLJEJCFJPLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA565C0)
#define MLJEJCFJPLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA56240)
#define MLJEJCFJPLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA56530)
#define MLJEJCFJPLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA56590)

inline static constexpr unsigned int MLJEJCFJPLE_TypeDefinitionIndex = 27069;

	class MLJEJCFJPLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MLJEJCFJPLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLJEJCFJPLE*>**)UnitySDK::FromName("", "MLJEJCFJPLE")->GetStaticField(0x56990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLJEJCFJPLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLJEJCFJPLE*))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLJEJCFJPLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLJEJCFJPLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLJEJCFJPLE*>*(*)())((::PBYTE)hIl2Cpp + MLJEJCFJPLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLJEJCFJPLE* Clone()
		{
			return ((::MLJEJCFJPLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLJEJCFJPLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLJEJCFJPLE*))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLJEJCFJPLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLJEJCFJPLE*))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLJEJCFJPLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class OEJBBPEEEGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEJBBPEEEGI_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DDFF870)
#define OEJBBPEEEGI_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DDFF880)
#define OEJBBPEEEGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFFC00)
#define OEJBBPEEEGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFFE60)
#define OEJBBPEEEGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFF830)
#define OEJBBPEEEGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFF800)
#define OEJBBPEEEGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF7F0)
#define OEJBBPEEEGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFF960)
#define OEJBBPEEEGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFF890)
#define OEJBBPEEEGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFFAD0)
#define OEJBBPEEEGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFF7B0)
#define OEJBBPEEEGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFFD00)
#define OEJBBPEEEGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFFCD0)
#define OEJBBPEEEGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF7E0)
#define OEJBBPEEEGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFFB00)
#define OEJBBPEEEGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFFB60)

inline static constexpr unsigned int OEJBBPEEEGI_TypeDefinitionIndex = 26404;

	class OEJBBPEEEGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HNOHHOEPFHC LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OEJBBPEEEGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEJBBPEEEGI*>**)UnitySDK::FromName("", "OEJBBPEEEGI")->GetStaticField(0x13D10);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEJBBPEEEGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJBBPEEEGI*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEJBBPEEEGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEJBBPEEEGI*>*(*)())((::PBYTE)hIl2Cpp + OEJBBPEEEGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEJBBPEEEGI* Clone()
		{
			return ((::OEJBBPEEEGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CLONE_OFFSET))(this);
		}

		::HNOHHOEPFHC AENLBGLIBJL()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEJBBPEEEGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEJBBPEEEGI*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEJBBPEEEGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJBBPEEEGI*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

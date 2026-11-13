#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCLIGKFAHJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCLIGKFAHJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEBA5C0)
#define CCLIGKFAHJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA660)
#define CCLIGKFAHJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEBA2B0)
#define CCLIGKFAHJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEBA280)
#define CCLIGKFAHJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA270)
#define CCLIGKFAHJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEBA3C0)
#define CCLIGKFAHJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEBA2F0)
#define CCLIGKFAHJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEBA520)
#define CCLIGKFAHJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEBA230)
#define CCLIGKFAHJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEBA610)
#define CCLIGKFAHJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEBA5E0)
#define CCLIGKFAHJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA260)
#define CCLIGKFAHJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEBA550)
#define CCLIGKFAHJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEBA5B0)

inline static constexpr unsigned int CCLIGKFAHJI_TypeDefinitionIndex = 27196;

	class CCLIGKFAHJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CCLIGKFAHJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCLIGKFAHJI*>**)UnitySDK::FromName("", "CCLIGKFAHJI")->GetStaticField(0x611C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCLIGKFAHJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCLIGKFAHJI*))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCLIGKFAHJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCLIGKFAHJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCLIGKFAHJI*>*(*)())((::PBYTE)hIl2Cpp + CCLIGKFAHJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCLIGKFAHJI* Clone()
		{
			return ((::CCLIGKFAHJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCLIGKFAHJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCLIGKFAHJI*))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCLIGKFAHJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCLIGKFAHJI*))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCLIGKFAHJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

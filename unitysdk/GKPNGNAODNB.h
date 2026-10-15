#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPNGNAODNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKPNGNAODNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BD8E0)
#define GKPNGNAODNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BD980)
#define GKPNGNAODNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BD5D0)
#define GKPNGNAODNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BD5A0)
#define GKPNGNAODNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BD590)
#define GKPNGNAODNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BD6E0)
#define GKPNGNAODNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BD610)
#define GKPNGNAODNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BD840)
#define GKPNGNAODNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4BD550)
#define GKPNGNAODNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BD930)
#define GKPNGNAODNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BD900)
#define GKPNGNAODNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BD580)
#define GKPNGNAODNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BD870)
#define GKPNGNAODNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BD8D0)

inline static constexpr unsigned int GKPNGNAODNB_TypeDefinitionIndex = 26438;

	class GKPNGNAODNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GKPNGNAODNB")->GetStaticField(0x1E900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKPNGNAODNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKPNGNAODNB*))((::PBYTE)hIl2Cpp + GKPNGNAODNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKPNGNAODNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GKPNGNAODNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKPNGNAODNB* Clone()
		{
			return ((::GKPNGNAODNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKPNGNAODNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKPNGNAODNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPNGNAODNB*))((::PBYTE)hIl2Cpp + GKPNGNAODNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKPNGNAODNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKPNGNAODNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKPNGNAODNB*))((::PBYTE)hIl2Cpp + GKPNGNAODNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKPNGNAODNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

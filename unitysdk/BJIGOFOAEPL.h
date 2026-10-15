#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIGOFOAEPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJIGOFOAEPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF19B40)
#define BJIGOFOAEPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF19BE0)
#define BJIGOFOAEPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDE700)
#define BJIGOFOAEPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDE6D0)
#define BJIGOFOAEPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDE6C0)
#define BJIGOFOAEPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDE860)
#define BJIGOFOAEPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDE770)
#define BJIGOFOAEPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDE9C0)
#define BJIGOFOAEPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDE650)
#define BJIGOFOAEPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF19B90)
#define BJIGOFOAEPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF19B60)
#define BJIGOFOAEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDE6B0)
#define BJIGOFOAEPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDE9F0)
#define BJIGOFOAEPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDEA50)

inline static constexpr unsigned int BJIGOFOAEPL_TypeDefinitionIndex = 29284;

	class BJIGOFOAEPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BJIGOFOAEPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJIGOFOAEPL*>**)UnitySDK::FromName("", "BJIGOFOAEPL")->GetStaticField(0x59820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJIGOFOAEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJIGOFOAEPL*))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJIGOFOAEPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJIGOFOAEPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJIGOFOAEPL*>*(*)())((::PBYTE)hIl2Cpp + BJIGOFOAEPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJIGOFOAEPL* Clone()
		{
			return ((::BJIGOFOAEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJIGOFOAEPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJIGOFOAEPL*))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJIGOFOAEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJIGOFOAEPL*))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJIGOFOAEPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFGGPGHOANG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFGGPGHOANG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72BA80)
#define JFGGPGHOANG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72BB20)
#define JFGGPGHOANG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72B770)
#define JFGGPGHOANG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72B740)
#define JFGGPGHOANG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72B730)
#define JFGGPGHOANG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72B880)
#define JFGGPGHOANG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72B7B0)
#define JFGGPGHOANG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72B9E0)
#define JFGGPGHOANG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72B6F0)
#define JFGGPGHOANG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72BAD0)
#define JFGGPGHOANG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72BAA0)
#define JFGGPGHOANG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72B720)
#define JFGGPGHOANG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72BA10)
#define JFGGPGHOANG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72BA70)

inline static constexpr unsigned int JFGGPGHOANG_TypeDefinitionIndex = 27894;

	class JFGGPGHOANG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFGGPGHOANG")->GetStaticField(0x5FBB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFGGPGHOANG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGGPGHOANG*))((::PBYTE)hIl2Cpp + JFGGPGHOANG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGGPGHOANG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFGGPGHOANG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFGGPGHOANG* Clone()
		{
			return ((::JFGGPGHOANG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFGGPGHOANG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFGGPGHOANG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFGGPGHOANG*))((::PBYTE)hIl2Cpp + JFGGPGHOANG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFGGPGHOANG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFGGPGHOANG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGGPGHOANG*))((::PBYTE)hIl2Cpp + JFGGPGHOANG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFGGPGHOANG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

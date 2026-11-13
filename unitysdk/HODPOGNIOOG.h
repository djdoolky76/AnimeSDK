#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HODPOGNIOOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HODPOGNIOOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2003C800)
#define HODPOGNIOOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x2003C8A0)
#define HODPOGNIOOG_CLONE_OFFSET UNITYSDK_OFFSET(0x2003C4F0)
#define HODPOGNIOOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2003C4C0)
#define HODPOGNIOOG_CTOR_OFFSET UNITYSDK_OFFSET(0x2003C4B0)
#define HODPOGNIOOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2003C600)
#define HODPOGNIOOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x2003C530)
#define HODPOGNIOOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2003C760)
#define HODPOGNIOOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2003C470)
#define HODPOGNIOOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2003C850)
#define HODPOGNIOOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2003C820)
#define HODPOGNIOOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2003C4A0)
#define HODPOGNIOOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2003C790)
#define HODPOGNIOOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x2003C7F0)

inline static constexpr unsigned int HODPOGNIOOG_TypeDefinitionIndex = 27878;

	class HODPOGNIOOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HODPOGNIOOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HODPOGNIOOG*>**)UnitySDK::FromName("", "HODPOGNIOOG")->GetStaticField(0x3DB90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HODPOGNIOOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODPOGNIOOG*))((::PBYTE)hIl2Cpp + HODPOGNIOOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HODPOGNIOOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HODPOGNIOOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HODPOGNIOOG*>*(*)())((::PBYTE)hIl2Cpp + HODPOGNIOOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HODPOGNIOOG* Clone()
		{
			return ((::HODPOGNIOOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HODPOGNIOOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HODPOGNIOOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HODPOGNIOOG*))((::PBYTE)hIl2Cpp + HODPOGNIOOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HODPOGNIOOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HODPOGNIOOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODPOGNIOOG*))((::PBYTE)hIl2Cpp + HODPOGNIOOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HODPOGNIOOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

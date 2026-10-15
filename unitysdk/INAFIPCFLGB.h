#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INAFIPCFLGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INAFIPCFLGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E68F2A0)
#define INAFIPCFLGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68F340)
#define INAFIPCFLGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E68EF90)
#define INAFIPCFLGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E68EF60)
#define INAFIPCFLGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68EF50)
#define INAFIPCFLGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E68F0A0)
#define INAFIPCFLGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E68EFD0)
#define INAFIPCFLGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E68F200)
#define INAFIPCFLGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E68EF10)
#define INAFIPCFLGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E68F2F0)
#define INAFIPCFLGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E68F2C0)
#define INAFIPCFLGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68EF40)
#define INAFIPCFLGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E68F230)
#define INAFIPCFLGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E68F290)

inline static constexpr unsigned int INAFIPCFLGB_TypeDefinitionIndex = 30805;

	class INAFIPCFLGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::INAFIPCFLGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INAFIPCFLGB*>**)UnitySDK::FromName("", "INAFIPCFLGB")->GetStaticField(0x53110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INAFIPCFLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INAFIPCFLGB*))((::PBYTE)hIl2Cpp + INAFIPCFLGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INAFIPCFLGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INAFIPCFLGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INAFIPCFLGB*>*(*)())((::PBYTE)hIl2Cpp + INAFIPCFLGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INAFIPCFLGB* Clone()
		{
			return ((::INAFIPCFLGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INAFIPCFLGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INAFIPCFLGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INAFIPCFLGB*))((::PBYTE)hIl2Cpp + INAFIPCFLGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INAFIPCFLGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INAFIPCFLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INAFIPCFLGB*))((::PBYTE)hIl2Cpp + INAFIPCFLGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INAFIPCFLGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

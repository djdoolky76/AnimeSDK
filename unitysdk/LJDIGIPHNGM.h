#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJDIGIPHNGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJDIGIPHNGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9781D0)
#define LJDIGIPHNGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E978270)
#define LJDIGIPHNGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E977EC0)
#define LJDIGIPHNGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E977E90)
#define LJDIGIPHNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E977E80)
#define LJDIGIPHNGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E977FD0)
#define LJDIGIPHNGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E977F00)
#define LJDIGIPHNGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E978130)
#define LJDIGIPHNGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E977E40)
#define LJDIGIPHNGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E978220)
#define LJDIGIPHNGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9781F0)
#define LJDIGIPHNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E977E70)
#define LJDIGIPHNGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E978160)
#define LJDIGIPHNGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9781C0)

	class LJDIGIPHNGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LJDIGIPHNGM")->GetStaticField(0x46700);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJDIGIPHNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJDIGIPHNGM*))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDIGIPHNGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LJDIGIPHNGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJDIGIPHNGM* Clone()
		{
			return ((::LJDIGIPHNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJDIGIPHNGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJDIGIPHNGM*))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJDIGIPHNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJDIGIPHNGM*))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJDIGIPHNGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

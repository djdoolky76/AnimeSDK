#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMGBEHABNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOMGBEHABNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7AB6A0)
#define JOMGBEHABNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB740)
#define JOMGBEHABNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AB390)
#define JOMGBEHABNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AB360)
#define JOMGBEHABNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB350)
#define JOMGBEHABNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7AB4A0)
#define JOMGBEHABNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AB3D0)
#define JOMGBEHABNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7AB600)
#define JOMGBEHABNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AB310)
#define JOMGBEHABNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7AB6F0)
#define JOMGBEHABNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7AB6C0)
#define JOMGBEHABNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB340)
#define JOMGBEHABNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7AB630)
#define JOMGBEHABNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7AB690)

	class JOMGBEHABNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOMGBEHABNJ")->GetStaticField(0x6D420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOMGBEHABNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMGBEHABNJ*))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMGBEHABNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOMGBEHABNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOMGBEHABNJ* Clone()
		{
			return ((::JOMGBEHABNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOMGBEHABNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOMGBEHABNJ*))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOMGBEHABNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMGBEHABNJ*))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOMGBEHABNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

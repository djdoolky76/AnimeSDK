#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLEEJAAMGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDLEEJAAMGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E180EE0)
#define DDLEEJAAMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1810A0)
#define DDLEEJAAMGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E180AC0)
#define DDLEEJAAMGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E180A90)
#define DDLEEJAAMGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E180A80)
#define DDLEEJAAMGH_DEJBKFOMCOO_OFFSET UNITYSDK_OFFSET(0x1E180B10)
#define DDLEEJAAMGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E180C10)
#define DDLEEJAAMGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E180B30)
#define DDLEEJAAMGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E180D90)
#define DDLEEJAAMGH_GMPHLFAHODH_OFFSET UNITYSDK_OFFSET(0x1E180B20)
#define DDLEEJAAMGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E180A40)
#define DDLEEJAAMGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E180F40)
#define DDLEEJAAMGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E180F10)
#define DDLEEJAAMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E180A70)
#define DDLEEJAAMGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E180DC0)
#define DDLEEJAAMGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E180E20)

	class DDLEEJAAMGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JJKJOJLKAGB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDLEEJAAMGH")->GetStaticField(0x2DFA0);
		}

		// static const ::System::Object HBIEDKPOLHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDLEEJAAMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDLEEJAAMGH*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDLEEJAAMGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDLEEJAAMGH* Clone()
		{
			return ((::DDLEEJAAMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CLONE_OFFSET))(this);
		}

		::System::Boolean DEJBKFOMCOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_DEJBKFOMCOO_OFFSET))(this);
		}

		::System::Void GMPHLFAHODH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_GMPHLFAHODH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDLEEJAAMGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDLEEJAAMGH*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDLEEJAAMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDLEEJAAMGH*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

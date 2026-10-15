#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDJKFOBBDJF.h"
#include "unitysdk/System/Object.h"
class NILMGDJFACH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NILMGDJFACH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB36BC0)
#define NILMGDJFACH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB36E20)
#define NILMGDJFACH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB367F0)
#define NILMGDJFACH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB367C0)
#define NILMGDJFACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB367B0)
#define NILMGDJFACH_EDGAHDFBGJH_OFFSET UNITYSDK_OFFSET(0x1EB36830)
#define NILMGDJFACH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB36920)
#define NILMGDJFACH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB36850)
#define NILMGDJFACH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB36A90)
#define NILMGDJFACH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB36770)
#define NILMGDJFACH_LEADMLKFHDE_OFFSET UNITYSDK_OFFSET(0x1EB36840)
#define NILMGDJFACH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB36CC0)
#define NILMGDJFACH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB36C90)
#define NILMGDJFACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB367A0)
#define NILMGDJFACH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB36AC0)
#define NILMGDJFACH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB36B20)

	class NILMGDJFACH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EDJKFOBBDJF EINIOEIIGOJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NILMGDJFACH")->GetStaticField(0x648B0);
		}

		// static const ::System::Object KCFACCMFHNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NILMGDJFACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILMGDJFACH*))((::PBYTE)hIl2Cpp + NILMGDJFACH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILMGDJFACH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NILMGDJFACH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NILMGDJFACH* Clone()
		{
			return ((::NILMGDJFACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_CLONE_OFFSET))(this);
		}

		::EDJKFOBBDJF EDGAHDFBGJH()
		{
			return ((::EDJKFOBBDJF(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_EDGAHDFBGJH_OFFSET))(this);
		}

		::System::Void LEADMLKFHDE(::EDJKFOBBDJF a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJKFOBBDJF))((::PBYTE)hIl2Cpp + NILMGDJFACH_LEADMLKFHDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NILMGDJFACH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NILMGDJFACH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NILMGDJFACH*))((::PBYTE)hIl2Cpp + NILMGDJFACH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NILMGDJFACH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NILMGDJFACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILMGDJFACH*))((::PBYTE)hIl2Cpp + NILMGDJFACH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NILMGDJFACH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

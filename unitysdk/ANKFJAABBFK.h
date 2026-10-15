#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANKFJAABBFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANKFJAABBFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E662EB0)
#define ANKFJAABBFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E663180)
#define ANKFJAABBFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E662B00)
#define ANKFJAABBFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E662AD0)
#define ANKFJAABBFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E662AC0)
#define ANKFJAABBFK_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E662B50)
#define ANKFJAABBFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E662C70)
#define ANKFJAABBFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E662B90)
#define ANKFJAABBFK_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E662B70)
#define ANKFJAABBFK_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E662B80)
#define ANKFJAABBFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E662D40)
#define ANKFJAABBFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E662A80)
#define ANKFJAABBFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E663000)
#define ANKFJAABBFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E662FC0)
#define ANKFJAABBFK_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E662B60)
#define ANKFJAABBFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E662AB0)
#define ANKFJAABBFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E662D70)
#define ANKFJAABBFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E662DD0)

	class ANKFJAABBFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GKOHBFHOFKN; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANKFJAABBFK")->GetStaticField(0x3F730);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANKFJAABBFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANKFJAABBFK*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANKFJAABBFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANKFJAABBFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANKFJAABBFK* Clone()
		{
			return ((::ANKFJAABBFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANKFJAABBFK_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANKFJAABBFK_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANKFJAABBFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANKFJAABBFK*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANKFJAABBFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANKFJAABBFK*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

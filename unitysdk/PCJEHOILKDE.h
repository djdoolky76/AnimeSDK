#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCJEHOILKDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCJEHOILKDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF09960)
#define PCJEHOILKDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF09B80)
#define PCJEHOILKDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF095B0)
#define PCJEHOILKDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF09580)
#define PCJEHOILKDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF09570)
#define PCJEHOILKDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF096E0)
#define PCJEHOILKDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF09610)
#define PCJEHOILKDE_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1DF095F0)
#define PCJEHOILKDE_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1DF09600)
#define PCJEHOILKDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF09850)
#define PCJEHOILKDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF09530)
#define PCJEHOILKDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF09A20)
#define PCJEHOILKDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF099F0)
#define PCJEHOILKDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF09560)
#define PCJEHOILKDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF09880)
#define PCJEHOILKDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF098E0)

	class PCJEHOILKDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GKOHBFHOFKN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PCJEHOILKDE")->GetStaticField(0x361F0);
		}

		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCJEHOILKDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCJEHOILKDE*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCJEHOILKDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PCJEHOILKDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCJEHOILKDE* Clone()
		{
			return ((::PCJEHOILKDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCJEHOILKDE_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCJEHOILKDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCJEHOILKDE*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCJEHOILKDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCJEHOILKDE*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

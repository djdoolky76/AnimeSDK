#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPKGHJGOCC.h"
#include "unitysdk/System/Object.h"
class OMLBEGNKAOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMLBEGNKAOE_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1DEB9430)
#define OMLBEGNKAOE_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1DEB9440)
#define OMLBEGNKAOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB97A0)
#define OMLBEGNKAOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9AB0)
#define OMLBEGNKAOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB93E0)
#define OMLBEGNKAOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB93B0)
#define OMLBEGNKAOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB93A0)
#define OMLBEGNKAOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB9550)
#define OMLBEGNKAOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB9470)
#define OMLBEGNKAOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB9620)
#define OMLBEGNKAOE_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1DEB9460)
#define OMLBEGNKAOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB9360)
#define OMLBEGNKAOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB9930)
#define OMLBEGNKAOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB98F0)
#define OMLBEGNKAOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9390)
#define OMLBEGNKAOE_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1DEB9450)
#define OMLBEGNKAOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB9650)
#define OMLBEGNKAOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB96B0)

	class OMLBEGNKAOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LPPKGHJGOCC ADOPAOCMEOG; // 0x18
		::System::UInt32 LAPNIOGIGPL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMLBEGNKAOE")->GetStaticField(0x2B590);
		}

		// static const ::System::Object ELFGGGHJCFC; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMLBEGNKAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMLBEGNKAOE*))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMLBEGNKAOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMLBEGNKAOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMLBEGNKAOE* Clone()
		{
			return ((::OMLBEGNKAOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_CLONE_OFFSET))(this);
		}

		::LPPKGHJGOCC AJOPEKGIJFO()
		{
			return ((::LPPKGHJGOCC(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void BKMJJABNDMA(::LPPKGHJGOCC a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPPKGHJGOCC))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_BKMJJABNDMA_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMLBEGNKAOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMLBEGNKAOE*))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMLBEGNKAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMLBEGNKAOE*))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMLBEGNKAOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

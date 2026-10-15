#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFANKKDMIHC;
class KAOPGJBGEBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFANKKDMIHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E112C30)
#define AFANKKDMIHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E112EE0)
#define AFANKKDMIHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E112560)
#define AFANKKDMIHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1124C0)
#define AFANKKDMIHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1124B0)
#define AFANKKDMIHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E112810)
#define AFANKKDMIHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E112670)
#define AFANKKDMIHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E112AE0)
#define AFANKKDMIHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E112440)
#define AFANKKDMIHC_JNCLFKJJCDF_OFFSET UNITYSDK_OFFSET(0x1E112660)
#define AFANKKDMIHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E112D50)
#define AFANKKDMIHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E112C90)
#define AFANKKDMIHC_MIHLCIOMKKP_OFFSET UNITYSDK_OFFSET(0x1E112650)
#define AFANKKDMIHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1124A0)
#define AFANKKDMIHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E112B40)
#define AFANKKDMIHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E112BA0)

	class AFANKKDMIHC : public ::System::Object
	{
	public:
		::KAOPGJBGEBF* IBCEHKJAMIJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFANKKDMIHC")->GetStaticField(0x2DEC0);
		}

		// static const ::System::Object AMBIIEHADBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFANKKDMIHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFANKKDMIHC*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFANKKDMIHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFANKKDMIHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFANKKDMIHC* Clone()
		{
			return ((::AFANKKDMIHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_CLONE_OFFSET))(this);
		}

		::KAOPGJBGEBF* MIHLCIOMKKP()
		{
			return ((::KAOPGJBGEBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_MIHLCIOMKKP_OFFSET))(this);
		}

		::System::Void JNCLFKJJCDF(::KAOPGJBGEBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAOPGJBGEBF*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_JNCLFKJJCDF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFANKKDMIHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFANKKDMIHC*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFANKKDMIHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFANKKDMIHC*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFANKKDMIHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

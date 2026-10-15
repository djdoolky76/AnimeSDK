#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBAILHMCOI;
class GANGPHPGFCL;
class LHLMPOHKPKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GANGPHPGFCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E424610)
#define GANGPHPGFCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4249E0)
#define GANGPHPGFCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E423F90)
#define GANGPHPGFCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E423E70)
#define GANGPHPGFCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E423E20)
#define GANGPHPGFCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E424240)
#define GANGPHPGFCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E424010)
#define GANGPHPGFCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E424410)
#define GANGPHPGFCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E423DB0)
#define GANGPHPGFCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4247F0)
#define GANGPHPGFCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E424700)
#define GANGPHPGFCL_NEDFMLJGKPL_OFFSET UNITYSDK_OFFSET(0x1E424000)
#define GANGPHPGFCL_NHENPMFKDOD_OFFSET UNITYSDK_OFFSET(0x1E423FE0)
#define GANGPHPGFCL_NJFBPGINJGM_OFFSET UNITYSDK_OFFSET(0x1E423FF0)
#define GANGPHPGFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E423E10)
#define GANGPHPGFCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4244A0)
#define GANGPHPGFCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E424500)

	class GANGPHPGFCL : public ::System::Object
	{
	public:
		::BHBAILHMCOI* JAKEAPOAJPI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LHLMPOHKPKG*>* DLMPOFHPNKH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_MNOFLMANHGE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GANGPHPGFCL")->GetStaticField(0xC7C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GANGPHPGFCL")->GetStaticField(0xC7C8);
		}

		// static const ::System::Object GOGDMMLLHHB; // 0x0
		// static const ::System::Object PLPFFMKHFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GANGPHPGFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GANGPHPGFCL*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANGPHPGFCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GANGPHPGFCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GANGPHPGFCL* Clone()
		{
			return ((::GANGPHPGFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CLONE_OFFSET))(this);
		}

		::BHBAILHMCOI* NHENPMFKDOD()
		{
			return ((::BHBAILHMCOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_NHENPMFKDOD_OFFSET))(this);
		}

		::System::Void NJFBPGINJGM(::BHBAILHMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBAILHMCOI*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_NJFBPGINJGM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LHLMPOHKPKG*>* NEDFMLJGKPL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LHLMPOHKPKG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_NEDFMLJGKPL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GANGPHPGFCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GANGPHPGFCL*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GANGPHPGFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GANGPHPGFCL*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

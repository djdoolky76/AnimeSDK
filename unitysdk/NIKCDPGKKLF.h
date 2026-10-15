#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
class NIKCDPGKKLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIKCDPGKKLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB06CB0)
#define NIKCDPGKKLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB07050)
#define NIKCDPGKKLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB06610)
#define NIKCDPGKKLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB06580)
#define NIKCDPGKKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB06570)
#define NIKCDPGKKLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB068A0)
#define NIKCDPGKKLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB06700)
#define NIKCDPGKKLF_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1EB066E0)
#define NIKCDPGKKLF_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1EB066F0)
#define NIKCDPGKKLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB06B70)
#define NIKCDPGKKLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB06500)
#define NIKCDPGKKLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB06E30)
#define NIKCDPGKKLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB06D10)
#define NIKCDPGKKLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB06560)
#define NIKCDPGKKLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB06BC0)
#define NIKCDPGKKLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB06C20)

inline static constexpr unsigned int NIKCDPGKKLF_TypeDefinitionIndex = 27719;

	class NIKCDPGKKLF : public ::System::Object
	{
	public:
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NIKCDPGKKLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIKCDPGKKLF*>**)UnitySDK::FromName("", "NIKCDPGKKLF")->GetStaticField(0x681A0);
		}

		// static const ::System::Object IPMBLBMLNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIKCDPGKKLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIKCDPGKKLF*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKCDPGKKLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIKCDPGKKLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIKCDPGKKLF*>*(*)())((::PBYTE)hIl2Cpp + NIKCDPGKKLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIKCDPGKKLF* Clone()
		{
			return ((::NIKCDPGKKLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_CLONE_OFFSET))(this);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIKCDPGKKLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIKCDPGKKLF*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIKCDPGKKLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIKCDPGKKLF*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIKCDPGKKLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

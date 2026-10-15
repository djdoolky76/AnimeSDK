#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
class KJAIAGDNPGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJAIAGDNPGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E866900)
#define KJAIAGDNPGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E866CA0)
#define KJAIAGDNPGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E866260)
#define KJAIAGDNPGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8661D0)
#define KJAIAGDNPGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8661C0)
#define KJAIAGDNPGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8664F0)
#define KJAIAGDNPGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E866350)
#define KJAIAGDNPGC_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1E866330)
#define KJAIAGDNPGC_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1E866340)
#define KJAIAGDNPGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8667C0)
#define KJAIAGDNPGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E866150)
#define KJAIAGDNPGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E866A80)
#define KJAIAGDNPGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E866960)
#define KJAIAGDNPGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8661B0)
#define KJAIAGDNPGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E866810)
#define KJAIAGDNPGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E866870)

inline static constexpr unsigned int KJAIAGDNPGC_TypeDefinitionIndex = 27742;

	class KJAIAGDNPGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJAIAGDNPGC")->GetStaticField(0x1BA40);
		}

		// static const ::System::Object IPMBLBMLNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJAIAGDNPGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAIAGDNPGC*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAIAGDNPGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJAIAGDNPGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJAIAGDNPGC* Clone()
		{
			return ((::KJAIAGDNPGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_CLONE_OFFSET))(this);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJAIAGDNPGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJAIAGDNPGC*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJAIAGDNPGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAIAGDNPGC*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJAIAGDNPGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

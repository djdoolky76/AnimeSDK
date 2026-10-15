#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHHBDEJOCGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHHBDEJOCGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6303D0)
#define IHHBDEJOCGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6305F0)
#define IHHBDEJOCGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E630020)
#define IHHBDEJOCGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62FFF0)
#define IHHBDEJOCGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62FFE0)
#define IHHBDEJOCGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E630150)
#define IHHBDEJOCGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E630080)
#define IHHBDEJOCGI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E630070)
#define IHHBDEJOCGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6302C0)
#define IHHBDEJOCGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E62FFA0)
#define IHHBDEJOCGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E630490)
#define IHHBDEJOCGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E630460)
#define IHHBDEJOCGI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E630060)
#define IHHBDEJOCGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E62FFD0)
#define IHHBDEJOCGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6302F0)
#define IHHBDEJOCGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E630350)

inline static constexpr unsigned int IHHBDEJOCGI_TypeDefinitionIndex = 31834;

	class IHHBDEJOCGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IHHBDEJOCGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHHBDEJOCGI*>**)UnitySDK::FromName("", "IHHBDEJOCGI")->GetStaticField(0x4D4C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHHBDEJOCGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHHBDEJOCGI*))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHBDEJOCGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHHBDEJOCGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHHBDEJOCGI*>*(*)())((::PBYTE)hIl2Cpp + IHHBDEJOCGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHHBDEJOCGI* Clone()
		{
			return ((::IHHBDEJOCGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHHBDEJOCGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHHBDEJOCGI*))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHHBDEJOCGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHHBDEJOCGI*))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHHBDEJOCGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

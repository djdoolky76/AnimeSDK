#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGOOFKIKDEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGOOFKIKDEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0FF940)
#define OGOOFKIKDEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0FFB60)
#define OGOOFKIKDEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0FF590)
#define OGOOFKIKDEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0FF560)
#define OGOOFKIKDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FF550)
#define OGOOFKIKDEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0FF6C0)
#define OGOOFKIKDEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0FF5F0)
#define OGOOFKIKDEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0FF830)
#define OGOOFKIKDEB_INAEHNCKBJC_OFFSET UNITYSDK_OFFSET(0x1F0FF5E0)
#define OGOOFKIKDEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0FF510)
#define OGOOFKIKDEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0FFA00)
#define OGOOFKIKDEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0FF9D0)
#define OGOOFKIKDEB_OLBKJMAIDKH_OFFSET UNITYSDK_OFFSET(0x1F0FF5D0)
#define OGOOFKIKDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0FF540)
#define OGOOFKIKDEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0FF860)
#define OGOOFKIKDEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0FF8C0)

inline static constexpr unsigned int OGOOFKIKDEB_TypeDefinitionIndex = 26493;

	class OGOOFKIKDEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OFAGPEOKFKD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OGOOFKIKDEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OGOOFKIKDEB*>**)UnitySDK::FromName("", "OGOOFKIKDEB")->GetStaticField(0x14D10);
		}

		// static const ::System::Object FDJBMJHPBGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGOOFKIKDEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGOOFKIKDEB*))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGOOFKIKDEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OGOOFKIKDEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OGOOFKIKDEB*>*(*)())((::PBYTE)hIl2Cpp + OGOOFKIKDEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGOOFKIKDEB* Clone()
		{
			return ((::OGOOFKIKDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLBKJMAIDKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_OLBKJMAIDKH_OFFSET))(this);
		}

		::System::Void INAEHNCKBJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_INAEHNCKBJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGOOFKIKDEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGOOFKIKDEB*))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGOOFKIKDEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGOOFKIKDEB*))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGOOFKIKDEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

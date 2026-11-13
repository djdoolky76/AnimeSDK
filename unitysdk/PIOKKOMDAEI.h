#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOKKOMDAEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIOKKOMDAEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2055A370)
#define PIOKKOMDAEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055A410)
#define PIOKKOMDAEI_CLONE_OFFSET UNITYSDK_OFFSET(0x2055A060)
#define PIOKKOMDAEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2055A030)
#define PIOKKOMDAEI_CTOR_OFFSET UNITYSDK_OFFSET(0x2055A020)
#define PIOKKOMDAEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2055A170)
#define PIOKKOMDAEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x2055A0A0)
#define PIOKKOMDAEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2055A2D0)
#define PIOKKOMDAEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20559FE0)
#define PIOKKOMDAEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2055A3C0)
#define PIOKKOMDAEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2055A390)
#define PIOKKOMDAEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2055A010)
#define PIOKKOMDAEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2055A300)
#define PIOKKOMDAEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x2055A360)

inline static constexpr unsigned int PIOKKOMDAEI_TypeDefinitionIndex = 35520;

	class PIOKKOMDAEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PIOKKOMDAEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIOKKOMDAEI*>**)UnitySDK::FromName("", "PIOKKOMDAEI")->GetStaticField(0x3E400);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIOKKOMDAEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOKKOMDAEI*))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOKKOMDAEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIOKKOMDAEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIOKKOMDAEI*>*(*)())((::PBYTE)hIl2Cpp + PIOKKOMDAEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIOKKOMDAEI* Clone()
		{
			return ((::PIOKKOMDAEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIOKKOMDAEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIOKKOMDAEI*))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIOKKOMDAEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOKKOMDAEI*))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIOKKOMDAEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

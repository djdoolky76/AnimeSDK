#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDICCGGDGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEDICCGGDGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E454230)
#define GEDICCGGDGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E454490)
#define GEDICCGGDGI_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1E453EB0)
#define GEDICCGGDGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E453E40)
#define GEDICCGGDGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E453E00)
#define GEDICCGGDGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E453DF0)
#define GEDICCGGDGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E453FB0)
#define GEDICCGGDGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E453ED0)
#define GEDICCGGDGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E454090)
#define GEDICCGGDGI_HLEIBEFBEEL_OFFSET UNITYSDK_OFFSET(0x1E453EA0)
#define GEDICCGGDGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E453DB0)
#define GEDICCGGDGI_LADJNAHKCKH_OFFSET UNITYSDK_OFFSET(0x1E453E90)
#define GEDICCGGDGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E454310)
#define GEDICCGGDGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4542D0)
#define GEDICCGGDGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E453DE0)
#define GEDICCGGDGI_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1E453EC0)
#define GEDICCGGDGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4540C0)
#define GEDICCGGDGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E454120)

inline static constexpr unsigned int GEDICCGGDGI_TypeDefinitionIndex = 27761;

	class GEDICCGGDGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LBKCEIICKLD; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DNIPIFDDAAE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GEDICCGGDGI")->GetStaticField(0x11790);
		}

		// static const ::System::Object GNKMMOLBMKD; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEDICCGGDGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDICCGGDGI*))((::PBYTE)hIl2Cpp + GEDICCGGDGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEDICCGGDGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GEDICCGGDGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEDICCGGDGI* Clone()
		{
			return ((::GEDICCGGDGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_CLONE_OFFSET))(this);
		}

		::System::Boolean LADJNAHKCKH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_LADJNAHKCKH_OFFSET))(this);
		}

		::System::Void HLEIBEFBEEL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEDICCGGDGI_HLEIBEFBEEL_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEDICCGGDGI_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEDICCGGDGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEDICCGGDGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDICCGGDGI*))((::PBYTE)hIl2Cpp + GEDICCGGDGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEDICCGGDGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEDICCGGDGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDICCGGDGI*))((::PBYTE)hIl2Cpp + GEDICCGGDGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEDICCGGDGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

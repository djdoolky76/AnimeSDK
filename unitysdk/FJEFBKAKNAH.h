#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEFBKAKNAH;
class ONHKODAFEMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJEFBKAKNAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A0880)
#define FJEFBKAKNAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0BA0)
#define FJEFBKAKNAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A02E0)
#define FJEFBKAKNAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A0270)
#define FJEFBKAKNAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0260)
#define FJEFBKAKNAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A0520)
#define FJEFBKAKNAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A03A0)
#define FJEFBKAKNAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A06A0)
#define FJEFBKAKNAH_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1E3A0380)
#define FJEFBKAKNAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A0220)
#define FJEFBKAKNAH_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1E3A0390)
#define FJEFBKAKNAH_LGNJMEKLHIE_OFFSET UNITYSDK_OFFSET(0x1E3A0370)
#define FJEFBKAKNAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A09E0)
#define FJEFBKAKNAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A0950)
#define FJEFBKAKNAH_MPMFFOGBGGM_OFFSET UNITYSDK_OFFSET(0x1E3A0360)
#define FJEFBKAKNAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0250)
#define FJEFBKAKNAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A0740)
#define FJEFBKAKNAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A07A0)

	class FJEFBKAKNAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ONHKODAFEMH* GAICODFFOFL; // 0x18
		::System::UInt32 FLFEKHCLHCE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FJEFBKAKNAH")->GetStaticField(0x20F00);
		}

		// static const ::System::Object MOLKOGENBDE; // 0x0
		// static const ::System::Object CPHNGFPDBPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJEFBKAKNAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEFBKAKNAH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FJEFBKAKNAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJEFBKAKNAH* Clone()
		{
			return ((::FJEFBKAKNAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CLONE_OFFSET))(this);
		}

		::ONHKODAFEMH* MPMFFOGBGGM()
		{
			return ((::ONHKODAFEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_MPMFFOGBGGM_OFFSET))(this);
		}

		::System::Void LGNJMEKLHIE(::ONHKODAFEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONHKODAFEMH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_LGNJMEKLHIE_OFFSET))(this, a1);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJEFBKAKNAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJEFBKAKNAH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJEFBKAKNAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEFBKAKNAH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

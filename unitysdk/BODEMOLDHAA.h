#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BODEMOLDHAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BODEMOLDHAA_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E039150)
#define BODEMOLDHAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0394C0)
#define BODEMOLDHAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0396E0)
#define BODEMOLDHAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E039110)
#define BODEMOLDHAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0390E0)
#define BODEMOLDHAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0390D0)
#define BODEMOLDHAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E039240)
#define BODEMOLDHAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E039170)
#define BODEMOLDHAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0393B0)
#define BODEMOLDHAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E039090)
#define BODEMOLDHAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E039580)
#define BODEMOLDHAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E039550)
#define BODEMOLDHAA_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E039160)
#define BODEMOLDHAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0390C0)
#define BODEMOLDHAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0393E0)
#define BODEMOLDHAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E039440)

	class BODEMOLDHAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGMLGHECGBM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BODEMOLDHAA")->GetStaticField(0x53080);
		}

		// static const ::System::Object LANLJAPHOCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BODEMOLDHAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BODEMOLDHAA*))((::PBYTE)hIl2Cpp + BODEMOLDHAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODEMOLDHAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BODEMOLDHAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BODEMOLDHAA* Clone()
		{
			return ((::BODEMOLDHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BODEMOLDHAA_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BODEMOLDHAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BODEMOLDHAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BODEMOLDHAA*))((::PBYTE)hIl2Cpp + BODEMOLDHAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BODEMOLDHAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BODEMOLDHAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BODEMOLDHAA*))((::PBYTE)hIl2Cpp + BODEMOLDHAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BODEMOLDHAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

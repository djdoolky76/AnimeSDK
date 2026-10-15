#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEPCLPMKKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJEPCLPMKKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA48AC0)
#define MJEPCLPMKKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA48CE0)
#define MJEPCLPMKKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA48710)
#define MJEPCLPMKKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA486E0)
#define MJEPCLPMKKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA486D0)
#define MJEPCLPMKKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA48840)
#define MJEPCLPMKKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA48770)
#define MJEPCLPMKKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA489B0)
#define MJEPCLPMKKI_IEGONICFJKF_OFFSET UNITYSDK_OFFSET(0x1EA48760)
#define MJEPCLPMKKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA48690)
#define MJEPCLPMKKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA48B80)
#define MJEPCLPMKKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA48B50)
#define MJEPCLPMKKI_ODIILIFPIIH_OFFSET UNITYSDK_OFFSET(0x1EA48750)
#define MJEPCLPMKKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA486C0)
#define MJEPCLPMKKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA489E0)
#define MJEPCLPMKKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA48A40)

	class MJEPCLPMKKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PILOPFDCAIH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MJEPCLPMKKI")->GetStaticField(0x55710);
		}

		// static const ::System::Object OBFPJJGAJID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJEPCLPMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEPCLPMKKI*))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEPCLPMKKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MJEPCLPMKKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJEPCLPMKKI* Clone()
		{
			return ((::MJEPCLPMKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 ODIILIFPIIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_ODIILIFPIIH_OFFSET))(this);
		}

		::System::Void IEGONICFJKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_IEGONICFJKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJEPCLPMKKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJEPCLPMKKI*))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJEPCLPMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEPCLPMKKI*))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJEPCLPMKKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLHMOBMFJDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLHMOBMFJDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA822E0)
#define MLHMOBMFJDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA82500)
#define MLHMOBMFJDF_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1EA81F80)
#define MLHMOBMFJDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA81F30)
#define MLHMOBMFJDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA81F00)
#define MLHMOBMFJDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA81EF0)
#define MLHMOBMFJDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA82060)
#define MLHMOBMFJDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA81F90)
#define MLHMOBMFJDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA821D0)
#define MLHMOBMFJDF_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1EA81F70)
#define MLHMOBMFJDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA81EB0)
#define MLHMOBMFJDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA823A0)
#define MLHMOBMFJDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA82370)
#define MLHMOBMFJDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA81EE0)
#define MLHMOBMFJDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA82200)
#define MLHMOBMFJDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA82260)

inline static constexpr unsigned int MLHMOBMFJDF_TypeDefinitionIndex = 34441;

	class MLHMOBMFJDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MLHMOBMFJDF")->GetStaticField(0x57F30);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLHMOBMFJDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLHMOBMFJDF*))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLHMOBMFJDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MLHMOBMFJDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLHMOBMFJDF* Clone()
		{
			return ((::MLHMOBMFJDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLHMOBMFJDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLHMOBMFJDF*))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLHMOBMFJDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLHMOBMFJDF*))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLHMOBMFJDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

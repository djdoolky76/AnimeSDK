#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHJICBCHMO;
class KOFMGCNIMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLHJICBCHMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7798F0)
#define JLHJICBCHMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E779C00)
#define JLHJICBCHMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E779380)
#define JLHJICBCHMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E779300)
#define JLHJICBCHMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7792F0)
#define JLHJICBCHMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7795D0)
#define JLHJICBCHMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E779450)
#define JLHJICBCHMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E779750)
#define JLHJICBCHMO_IFJGONJFKPJ_OFFSET UNITYSDK_OFFSET(0x1E779410)
#define JLHJICBCHMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7792B0)
#define JLHJICBCHMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E779A70)
#define JLHJICBCHMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7799C0)
#define JLHJICBCHMO_NINIKILCJOC_OFFSET UNITYSDK_OFFSET(0x1E779440)
#define JLHJICBCHMO_ONLPCIPJMBB_OFFSET UNITYSDK_OFFSET(0x1E779420)
#define JLHJICBCHMO_PBOCHJKOLCP_OFFSET UNITYSDK_OFFSET(0x1E779430)
#define JLHJICBCHMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7792E0)
#define JLHJICBCHMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7797B0)
#define JLHJICBCHMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E779810)

inline static constexpr unsigned int JLHJICBCHMO_TypeDefinitionIndex = 32868;

	class JLHJICBCHMO : public ::System::Object
	{
	public:
		::KOFMGCNIMIN* PIAHDMALDKO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EBKNDOHMFHN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLHJICBCHMO")->GetStaticField(0x668A0);
		}

		// static const ::System::Object LAKPCNHMJGI; // 0x0
		// static const ::System::Object EDLEPLCOGIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLHJICBCHMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHJICBCHMO*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHJICBCHMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLHJICBCHMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLHJICBCHMO* Clone()
		{
			return ((::JLHJICBCHMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_CLONE_OFFSET))(this);
		}

		::KOFMGCNIMIN* IFJGONJFKPJ()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_IFJGONJFKPJ_OFFSET))(this);
		}

		::System::Void ONLPCIPJMBB(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_ONLPCIPJMBB_OFFSET))(this, a1);
		}

		::System::UInt32 PBOCHJKOLCP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_PBOCHJKOLCP_OFFSET))(this);
		}

		::System::Void NINIKILCJOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLHJICBCHMO_NINIKILCJOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLHJICBCHMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLHJICBCHMO*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLHJICBCHMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHJICBCHMO*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLHJICBCHMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

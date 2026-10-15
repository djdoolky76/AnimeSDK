#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHEEDBPGHHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHEEDBPGHHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65B040)
#define IHEEDBPGHHO_CCCMLFMHHGI_OFFSET UNITYSDK_OFFSET(0x1E65ACA0)
#define IHEEDBPGHHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65B2A0)
#define IHEEDBPGHHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65AC50)
#define IHEEDBPGHHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65AC10)
#define IHEEDBPGHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65AC00)
#define IHEEDBPGHHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65ADC0)
#define IHEEDBPGHHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65ACE0)
#define IHEEDBPGHHO_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1E65ACC0)
#define IHEEDBPGHHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65AEA0)
#define IHEEDBPGHHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65ABC0)
#define IHEEDBPGHHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65B120)
#define IHEEDBPGHHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65B0E0)
#define IHEEDBPGHHO_MLDJFAEOJBM_OFFSET UNITYSDK_OFFSET(0x1E65ACB0)
#define IHEEDBPGHHO_OIKMPONNKIC_OFFSET UNITYSDK_OFFSET(0x1E65ACD0)
#define IHEEDBPGHHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65ABF0)
#define IHEEDBPGHHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65AED0)
#define IHEEDBPGHHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65AF30)

	class IHEEDBPGHHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJOAMKICMLG; // 0x18
		::System::Boolean BHIOIACINGE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IHEEDBPGHHO")->GetStaticField(0x4CC40);
		}

		// static const ::System::Object FDGNFAPFFEI; // 0x0
		// static const ::System::Object MIEPCHJAJBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHEEDBPGHHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHEEDBPGHHO*))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHEEDBPGHHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IHEEDBPGHHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHEEDBPGHHO* Clone()
		{
			return ((::IHEEDBPGHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CCCMLFMHHGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_CCCMLFMHHGI_OFFSET))(this);
		}

		::System::Void MLDJFAEOJBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_MLDJFAEOJBM_OFFSET))(this, a1);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Void OIKMPONNKIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_OIKMPONNKIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHEEDBPGHHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHEEDBPGHHO*))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHEEDBPGHHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHEEDBPGHHO*))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHEEDBPGHHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

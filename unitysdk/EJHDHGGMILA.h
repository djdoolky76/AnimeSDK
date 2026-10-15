#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHDHGGMILA;
class LMNCBIDKHLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJHDHGGMILA_BJIIELDJMLJ_OFFSET UNITYSDK_OFFSET(0x1E2B6D60)
#define EJHDHGGMILA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B7270)
#define EJHDHGGMILA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B7590)
#define EJHDHGGMILA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B6CE0)
#define EJHDHGGMILA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B6C70)
#define EJHDHGGMILA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6C60)
#define EJHDHGGMILA_ECHDMGFPOAC_OFFSET UNITYSDK_OFFSET(0x1E2B6D80)
#define EJHDHGGMILA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B6F20)
#define EJHDHGGMILA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B6DA0)
#define EJHDHGGMILA_FJINLMGHNKB_OFFSET UNITYSDK_OFFSET(0x1E2B6D90)
#define EJHDHGGMILA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B70A0)
#define EJHDHGGMILA_HCOMNCGMOFP_OFFSET UNITYSDK_OFFSET(0x1E2B6D70)
#define EJHDHGGMILA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B6C20)
#define EJHDHGGMILA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B73D0)
#define EJHDHGGMILA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B7340)
#define EJHDHGGMILA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6C50)
#define EJHDHGGMILA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B7130)
#define EJHDHGGMILA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B7190)

	class EJHDHGGMILA : public ::System::Object
	{
	public:
		::LMNCBIDKHLF* JAHKOPEGMMI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NIAPJBPECEN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJHDHGGMILA")->GetStaticField(0x4B7C0);
		}

		// static const ::System::Object BHHOEAAMEBC; // 0x0
		// static const ::System::Object LCPNIJHOFJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJHDHGGMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDHGGMILA*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHDHGGMILA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJHDHGGMILA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJHDHGGMILA* Clone()
		{
			return ((::EJHDHGGMILA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CLONE_OFFSET))(this);
		}

		::System::UInt32 BJIIELDJMLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_BJIIELDJMLJ_OFFSET))(this);
		}

		::System::Void HCOMNCGMOFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJHDHGGMILA_HCOMNCGMOFP_OFFSET))(this, a1);
		}

		::LMNCBIDKHLF* ECHDMGFPOAC()
		{
			return ((::LMNCBIDKHLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_ECHDMGFPOAC_OFFSET))(this);
		}

		::System::Void FJINLMGHNKB(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_FJINLMGHNKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJHDHGGMILA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJHDHGGMILA*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJHDHGGMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDHGGMILA*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

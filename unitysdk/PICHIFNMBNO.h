#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PICHIFNMBNO_KHJILCDGLLN.h"
#include "unitysdk/System/Object.h"
class LFIONDMGCOP;
class PICHIFNMBNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PICHIFNMBNO_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DF15280)
#define PICHIFNMBNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF15730)
#define PICHIFNMBNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF15C50)
#define PICHIFNMBNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF15250)
#define PICHIFNMBNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF150E0)
#define PICHIFNMBNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF150D0)
#define PICHIFNMBNO_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DF15290)
#define PICHIFNMBNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF152F0)
#define PICHIFNMBNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF152C0)
#define PICHIFNMBNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF15530)
#define PICHIFNMBNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF15090)
#define PICHIFNMBNO_LLGMNDJDPFF_OFFSET UNITYSDK_OFFSET(0x1DF151D0)
#define PICHIFNMBNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF15A00)
#define PICHIFNMBNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF15870)
#define PICHIFNMBNO_NJLLGBKAGNC_OFFSET UNITYSDK_OFFSET(0x1DF15230)
#define PICHIFNMBNO_ODNPFOPGDLN_OFFSET UNITYSDK_OFFSET(0x1DF152A0)
#define PICHIFNMBNO_OIJAAMILMJF_OFFSET UNITYSDK_OFFSET(0x1DF152B0)
#define PICHIFNMBNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF150C0)
#define PICHIFNMBNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF155D0)
#define PICHIFNMBNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF15630)

inline static constexpr unsigned int PICHIFNMBNO_TypeDefinitionIndex = 27152;

	class PICHIFNMBNO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* DCFNJPANFEB; // 0x18
		::PICHIFNMBNO_KHJILCDGLLN FNDKNGCFKJC; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PICHIFNMBNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PICHIFNMBNO*>**)UnitySDK::FromName("", "PICHIFNMBNO")->GetStaticField(0x34650);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object OCFBLMMNMEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PICHIFNMBNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICHIFNMBNO*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICHIFNMBNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PICHIFNMBNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PICHIFNMBNO*>*(*)())((::PBYTE)hIl2Cpp + PICHIFNMBNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PICHIFNMBNO* Clone()
		{
			return ((::PICHIFNMBNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PICHIFNMBNO_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::LFIONDMGCOP* LLGMNDJDPFF()
		{
			return ((::LFIONDMGCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_LLGMNDJDPFF_OFFSET))(this);
		}

		::System::Void NJLLGBKAGNC(::LFIONDMGCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIONDMGCOP*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_NJLLGBKAGNC_OFFSET))(this, a1);
		}

		::PICHIFNMBNO_KHJILCDGLLN ODNPFOPGDLN()
		{
			return ((::PICHIFNMBNO_KHJILCDGLLN(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_ODNPFOPGDLN_OFFSET))(this);
		}

		::System::Void OIJAAMILMJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_OIJAAMILMJF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PICHIFNMBNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PICHIFNMBNO*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PICHIFNMBNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICHIFNMBNO*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

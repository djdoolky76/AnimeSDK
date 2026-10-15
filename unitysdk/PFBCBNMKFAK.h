#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFBCBNMKFAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFBCBNMKFAK_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DF21940)
#define PFBCBNMKFAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF21C70)
#define PFBCBNMKFAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF21FF0)
#define PFBCBNMKFAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF21880)
#define PFBCBNMKFAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF21840)
#define PFBCBNMKFAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF21830)
#define PFBCBNMKFAK_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DF21950)
#define PFBCBNMKFAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF219E0)
#define PFBCBNMKFAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF21960)
#define PFBCBNMKFAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF21AB0)
#define PFBCBNMKFAK_HPHLFIPHIPF_OFFSET UNITYSDK_OFFSET(0x1DF21900)
#define PFBCBNMKFAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF217C0)
#define PFBCBNMKFAK_JLBLEJENIPO_OFFSET UNITYSDK_OFFSET(0x1DF21910)
#define PFBCBNMKFAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF21E50)
#define PFBCBNMKFAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF21E00)
#define PFBCBNMKFAK_NMFOIJNAMGG_OFFSET UNITYSDK_OFFSET(0x1DF21920)
#define PFBCBNMKFAK_OLNDLAGHNNC_OFFSET UNITYSDK_OFFSET(0x1DF21930)
#define PFBCBNMKFAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF21820)
#define PFBCBNMKFAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF21AE0)
#define PFBCBNMKFAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF21B40)

	class PFBCBNMKFAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OAEGCDLJABE; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		::System::UInt32 AMAMKHGJNAG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PFBCBNMKFAK")->GetStaticField(0x267F0);
		}

		// static const ::System::Object BAOFAODIGHB; // 0x0
		// static const ::System::Object AAMHLJCBKDH; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFBCBNMKFAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFBCBNMKFAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PFBCBNMKFAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFBCBNMKFAK* Clone()
		{
			return ((::PFBCBNMKFAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPHLFIPHIPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_HPHLFIPHIPF_OFFSET))(this);
		}

		::System::Void JLBLEJENIPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_JLBLEJENIPO_OFFSET))(this, a1);
		}

		::System::UInt32 NMFOIJNAMGG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_NMFOIJNAMGG_OFFSET))(this);
		}

		::System::Void OLNDLAGHNNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_OLNDLAGHNNC_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFBCBNMKFAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFBCBNMKFAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFBCBNMKFAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAKNAOBLJGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAKNAOBLJGJ_BBEEHOABADN_OFFSET UNITYSDK_OFFSET(0x1E22CFC0)
#define EAKNAOBLJGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22D4E0)
#define EAKNAOBLJGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22D7A0)
#define EAKNAOBLJGJ_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x1E22CFA0)
#define EAKNAOBLJGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22CF70)
#define EAKNAOBLJGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22CED0)
#define EAKNAOBLJGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22CE80)
#define EAKNAOBLJGJ_EHOGKGJGHFI_OFFSET UNITYSDK_OFFSET(0x1E22D000)
#define EAKNAOBLJGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22D0A0)
#define EAKNAOBLJGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22D010)
#define EAKNAOBLJGJ_GEDFKJOCFCB_OFFSET UNITYSDK_OFFSET(0x1E22CFF0)
#define EAKNAOBLJGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22D1C0)
#define EAKNAOBLJGJ_GMKMGPHGALN_OFFSET UNITYSDK_OFFSET(0x1E22CFD0)
#define EAKNAOBLJGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22CE40)
#define EAKNAOBLJGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22D6B0)
#define EAKNAOBLJGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22D650)
#define EAKNAOBLJGJ_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x1E22CFB0)
#define EAKNAOBLJGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22CE70)
#define EAKNAOBLJGJ_PCENJEEPCDB_OFFSET UNITYSDK_OFFSET(0x1E22CFE0)
#define EAKNAOBLJGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22D2C0)
#define EAKNAOBLJGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22D320)

	class EAKNAOBLJGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGKECLGFAPK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NMAMKMKIMPP; // 0x20
		::System::UInt32 JLDFJJGIAHG; // 0x24
		::System::Boolean BECMHLLPPKG; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAKNAOBLJGJ")->GetStaticField(0x496E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IDKOJMEEPIF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EAKNAOBLJGJ")->GetStaticField(0x496E8);
		}

		// static const ::System::Object KGBIOKNMNGB; // 0x0
		// static const ::System::Object PDCALHCNGCK; // 0x0
		// static const ::System::Object DLKBJMMLMID; // 0x0
		// static const ::System::Object LGMBBNKHEGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAKNAOBLJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAKNAOBLJGJ*))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAKNAOBLJGJ* Clone()
		{
			return ((::EAKNAOBLJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIBDMPPKPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_CIBDMPPKPOB_OFFSET))(this);
		}

		::System::Void MIMHJBHMKGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_MIMHJBHMKGH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBEEHOABADN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_BBEEHOABADN_OFFSET))(this);
		}

		::System::Boolean GMKMGPHGALN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_GMKMGPHGALN_OFFSET))(this);
		}

		::System::Void PCENJEEPCDB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_PCENJEEPCDB_OFFSET))(this, a1);
		}

		::System::UInt32 GEDFKJOCFCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_GEDFKJOCFCB_OFFSET))(this);
		}

		::System::Void EHOGKGJGHFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_EHOGKGJGHFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAKNAOBLJGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAKNAOBLJGJ*))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAKNAOBLJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAKNAOBLJGJ*))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANELIGFLCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BANELIGFLCO_BGLOFFIMEGN_OFFSET UNITYSDK_OFFSET(0x1E7BC590)
#define BANELIGFLCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BC8C0)
#define BANELIGFLCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BCC40)
#define BANELIGFLCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7BC4D0)
#define BANELIGFLCO_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E7BC550)
#define BANELIGFLCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BC490)
#define BANELIGFLCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC480)
#define BANELIGFLCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7BC630)
#define BANELIGFLCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7BC5B0)
#define BANELIGFLCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BC700)
#define BANELIGFLCO_GMDLFJKOPAL_OFFSET UNITYSDK_OFFSET(0x1E7BC5A0)
#define BANELIGFLCO_JJCBOFBONPO_OFFSET UNITYSDK_OFFSET(0x1E7BC580)
#define BANELIGFLCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BC410)
#define BANELIGFLCO_LCNGCANAPPJ_OFFSET UNITYSDK_OFFSET(0x1E7BC570)
#define BANELIGFLCO_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E7BC560)
#define BANELIGFLCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BCAA0)
#define BANELIGFLCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BCA50)
#define BANELIGFLCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC470)
#define BANELIGFLCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BC730)
#define BANELIGFLCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BC790)

	class BANELIGFLCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 KDKCDDFJMGA; // 0x1C
		::System::UInt32 LMBGHCAGODP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BANELIGFLCO")->GetStaticField(0x26800);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object AGMNNNMDIPG; // 0x0
		// static const ::System::Object OJKKIIEOEDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BANELIGFLCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BANELIGFLCO*))((::PBYTE)hIl2Cpp + BANELIGFLCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANELIGFLCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BANELIGFLCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BANELIGFLCO* Clone()
		{
			return ((::BANELIGFLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BANELIGFLCO_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 LCNGCANAPPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_LCNGCANAPPJ_OFFSET))(this);
		}

		::System::Void JJCBOFBONPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BANELIGFLCO_JJCBOFBONPO_OFFSET))(this, a1);
		}

		::System::UInt32 BGLOFFIMEGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_BGLOFFIMEGN_OFFSET))(this);
		}

		::System::Void GMDLFJKOPAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BANELIGFLCO_GMDLFJKOPAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BANELIGFLCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BANELIGFLCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BANELIGFLCO*))((::PBYTE)hIl2Cpp + BANELIGFLCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BANELIGFLCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BANELIGFLCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BANELIGFLCO*))((::PBYTE)hIl2Cpp + BANELIGFLCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BANELIGFLCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMHEOJNCGFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMHEOJNCGFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E2500)
#define EMHEOJNCGFH_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1E2E21A0)
#define EMHEOJNCGFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E27D0)
#define EMHEOJNCGFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E2100)
#define EMHEOJNCGFH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2E2170)
#define EMHEOJNCGFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E20D0)
#define EMHEOJNCGFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E20C0)
#define EMHEOJNCGFH_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1E2E2190)
#define EMHEOJNCGFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E22C0)
#define EMHEOJNCGFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E21B0)
#define EMHEOJNCGFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E2390)
#define EMHEOJNCGFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E2050)
#define EMHEOJNCGFH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2E2180)
#define EMHEOJNCGFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E2650)
#define EMHEOJNCGFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E2610)
#define EMHEOJNCGFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E20B0)
#define EMHEOJNCGFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E23C0)
#define EMHEOJNCGFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E2420)

	class EMHEOJNCGFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ICDPONHFAJP; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EMHEOJNCGFH")->GetStaticField(0x3DDC0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object BEINPDMEFFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMHEOJNCGFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMHEOJNCGFH*))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EMHEOJNCGFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMHEOJNCGFH* Clone()
		{
			return ((::EMHEOJNCGFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMHEOJNCGFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMHEOJNCGFH*))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMHEOJNCGFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMHEOJNCGFH*))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMHEOJNCGFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

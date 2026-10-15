#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHKLPJGEPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIHKLPJGEPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF46C50)
#define PIHKLPJGEPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF46FD0)
#define PIHKLPJGEPM_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1DF468E0)
#define PIHKLPJGEPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF46860)
#define PIHKLPJGEPM_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DF46900)
#define PIHKLPJGEPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF46820)
#define PIHKLPJGEPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF46810)
#define PIHKLPJGEPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF469C0)
#define PIHKLPJGEPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF46940)
#define PIHKLPJGEPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF46A90)
#define PIHKLPJGEPM_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1DF468F0)
#define PIHKLPJGEPM_JBPKABPKFGC_OFFSET UNITYSDK_OFFSET(0x1DF46930)
#define PIHKLPJGEPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF467A0)
#define PIHKLPJGEPM_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DF46910)
#define PIHKLPJGEPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF46E30)
#define PIHKLPJGEPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF46DE0)
#define PIHKLPJGEPM_OAHBKGLKNGO_OFFSET UNITYSDK_OFFSET(0x1DF46920)
#define PIHKLPJGEPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF46800)
#define PIHKLPJGEPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF46AC0)
#define PIHKLPJGEPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF46B20)

	class PIHKLPJGEPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GJJDLFJNHFJ; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 LMPELIKJAKK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIHKLPJGEPM")->GetStaticField(0x41160);
		}

		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EMICDBCIMDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIHKLPJGEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHKLPJGEPM*))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIHKLPJGEPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIHKLPJGEPM* Clone()
		{
			return ((::PIHKLPJGEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 OAHBKGLKNGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_OAHBKGLKNGO_OFFSET))(this);
		}

		::System::Void JBPKABPKFGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_JBPKABPKFGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIHKLPJGEPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIHKLPJGEPM*))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIHKLPJGEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHKLPJGEPM*))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIHKLPJGEPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

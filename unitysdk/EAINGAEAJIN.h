#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOPHGIHIDPP.h"
#include "unitysdk/System/Object.h"
class EAINGAEAJIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAINGAEAJIN_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E22B590)
#define EAINGAEAJIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22B920)
#define EAINGAEAJIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22BC50)
#define EAINGAEAJIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22B4D0)
#define EAINGAEAJIN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E22B560)
#define EAINGAEAJIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22B4A0)
#define EAINGAEAJIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22B490)
#define EAINGAEAJIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22B5F0)
#define EAINGAEAJIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22B5A0)
#define EAINGAEAJIN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E22B550)
#define EAINGAEAJIN_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E22B580)
#define EAINGAEAJIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22B6D0)
#define EAINGAEAJIN_IGGOMOOMKGL_OFFSET UNITYSDK_OFFSET(0x1E22B530)
#define EAINGAEAJIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22B450)
#define EAINGAEAJIN_LPKPBFJGKEG_OFFSET UNITYSDK_OFFSET(0x1E22B520)
#define EAINGAEAJIN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E22B570)
#define EAINGAEAJIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22BBB0)
#define EAINGAEAJIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22BB60)
#define EAINGAEAJIN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E22B540)
#define EAINGAEAJIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22B480)
#define EAINGAEAJIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22B710)
#define EAINGAEAJIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22B770)

inline static constexpr unsigned int EAINGAEAJIN_TypeDefinitionIndex = 31376;

	class EAINGAEAJIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		::GOPHGIHIDPP CFNNFEHPJDE; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAINGAEAJIN")->GetStaticField(0x49580);
		}

		// static const ::System::Object MIFNFFPJBEF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAINGAEAJIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAINGAEAJIN*))((::PBYTE)hIl2Cpp + EAINGAEAJIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAINGAEAJIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAINGAEAJIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAINGAEAJIN* Clone()
		{
			return ((::EAINGAEAJIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_CLONE_OFFSET))(this);
		}

		::GOPHGIHIDPP LPKPBFJGKEG()
		{
			return ((::GOPHGIHIDPP(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_LPKPBFJGKEG_OFFSET))(this);
		}

		::System::Void IGGOMOOMKGL(::GOPHGIHIDPP a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOPHGIHIDPP))((::PBYTE)hIl2Cpp + EAINGAEAJIN_IGGOMOOMKGL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAINGAEAJIN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAINGAEAJIN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAINGAEAJIN_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAINGAEAJIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAINGAEAJIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAINGAEAJIN*))((::PBYTE)hIl2Cpp + EAINGAEAJIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAINGAEAJIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAINGAEAJIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAINGAEAJIN*))((::PBYTE)hIl2Cpp + EAINGAEAJIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAINGAEAJIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

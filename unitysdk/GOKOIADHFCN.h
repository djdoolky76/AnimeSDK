#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOKOIADHFCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOKOIADHFCN_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1E4F0DF0)
#define GOKOIADHFCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F1140)
#define GOKOIADHFCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F14C0)
#define GOKOIADHFCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F0D50)
#define GOKOIADHFCN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E4F0DD0)
#define GOKOIADHFCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F0D10)
#define GOKOIADHFCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F0D00)
#define GOKOIADHFCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F0EB0)
#define GOKOIADHFCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F0E30)
#define GOKOIADHFCN_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E4F0E10)
#define GOKOIADHFCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F0F80)
#define GOKOIADHFCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F0C90)
#define GOKOIADHFCN_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1E4F0E00)
#define GOKOIADHFCN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E4F0DE0)
#define GOKOIADHFCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F1320)
#define GOKOIADHFCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F12D0)
#define GOKOIADHFCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F0CF0)
#define GOKOIADHFCN_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E4F0E20)
#define GOKOIADHFCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F0FB0)
#define GOKOIADHFCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F1010)

inline static constexpr unsigned int GOKOIADHFCN_TypeDefinitionIndex = 34794;

	class GOKOIADHFCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIHAPDNPDHC; // 0x18
		::System::UInt32 DBDCJHECJOO; // 0x1C
		::System::UInt32 DNKADAFBILN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOKOIADHFCN")->GetStaticField(0x2B320);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		// static const ::System::Object HACFLGOPALO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOKOIADHFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOKOIADHFCN*))((::PBYTE)hIl2Cpp + GOKOIADHFCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKOIADHFCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOKOIADHFCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOKOIADHFCN* Clone()
		{
			return ((::GOKOIADHFCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOKOIADHFCN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOKOIADHFCN_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOKOIADHFCN_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOKOIADHFCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOKOIADHFCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOKOIADHFCN*))((::PBYTE)hIl2Cpp + GOKOIADHFCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOKOIADHFCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOKOIADHFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOKOIADHFCN*))((::PBYTE)hIl2Cpp + GOKOIADHFCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOKOIADHFCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

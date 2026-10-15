#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABDMCJDJFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EABDMCJDJFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E221600)
#define EABDMCJDJFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2218D0)
#define EABDMCJDJFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E221250)
#define EABDMCJDJFA_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2212C0)
#define EABDMCJDJFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E221220)
#define EABDMCJDJFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E221210)
#define EABDMCJDJFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2213C0)
#define EABDMCJDJFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2212E0)
#define EABDMCJDJFA_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E2212A0)
#define EABDMCJDJFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E221490)
#define EABDMCJDJFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2211D0)
#define EABDMCJDJFA_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2212D0)
#define EABDMCJDJFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E221750)
#define EABDMCJDJFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E221710)
#define EABDMCJDJFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E221200)
#define EABDMCJDJFA_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E2212B0)
#define EABDMCJDJFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2214C0)
#define EABDMCJDJFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E221520)

	class EABDMCJDJFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EABDMCJDJFA")->GetStaticField(0x24F60);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EABDMCJDJFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EABDMCJDJFA*))((::PBYTE)hIl2Cpp + EABDMCJDJFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EABDMCJDJFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EABDMCJDJFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EABDMCJDJFA* Clone()
		{
			return ((::EABDMCJDJFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EABDMCJDJFA_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EABDMCJDJFA_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EABDMCJDJFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EABDMCJDJFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EABDMCJDJFA*))((::PBYTE)hIl2Cpp + EABDMCJDJFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EABDMCJDJFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EABDMCJDJFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EABDMCJDJFA*))((::PBYTE)hIl2Cpp + EABDMCJDJFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EABDMCJDJFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

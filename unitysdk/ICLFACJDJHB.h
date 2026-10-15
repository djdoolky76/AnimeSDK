#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICLFACJDJHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICLFACJDJHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6245F0)
#define ICLFACJDJHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6248C0)
#define ICLFACJDJHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E624240)
#define ICLFACJDJHB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E6242B0)
#define ICLFACJDJHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E624210)
#define ICLFACJDJHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E624200)
#define ICLFACJDJHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6243B0)
#define ICLFACJDJHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6242D0)
#define ICLFACJDJHB_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E624290)
#define ICLFACJDJHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E624480)
#define ICLFACJDJHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6241C0)
#define ICLFACJDJHB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E6242C0)
#define ICLFACJDJHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E624740)
#define ICLFACJDJHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E624700)
#define ICLFACJDJHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6241F0)
#define ICLFACJDJHB_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E6242A0)
#define ICLFACJDJHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6244B0)
#define ICLFACJDJHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E624510)

inline static constexpr unsigned int ICLFACJDJHB_TypeDefinitionIndex = 34602;

	class ICLFACJDJHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 DBDCJHECJOO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ICLFACJDJHB")->GetStaticField(0x44D40);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICLFACJDJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICLFACJDJHB*))((::PBYTE)hIl2Cpp + ICLFACJDJHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICLFACJDJHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ICLFACJDJHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICLFACJDJHB* Clone()
		{
			return ((::ICLFACJDJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICLFACJDJHB_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICLFACJDJHB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICLFACJDJHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICLFACJDJHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICLFACJDJHB*))((::PBYTE)hIl2Cpp + ICLFACJDJHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICLFACJDJHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICLFACJDJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICLFACJDJHB*))((::PBYTE)hIl2Cpp + ICLFACJDJHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICLFACJDJHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

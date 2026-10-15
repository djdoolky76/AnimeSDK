#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLCPGAGPBDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLCPGAGPBDL_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0x1EA80D40)
#define MLCPGAGPBDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA810A0)
#define MLCPGAGPBDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA81440)
#define MLCPGAGPBDL_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1EA80CD0)
#define MLCPGAGPBDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA80C80)
#define MLCPGAGPBDL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EA80CF0)
#define MLCPGAGPBDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA80C40)
#define MLCPGAGPBDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA80C30)
#define MLCPGAGPBDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA80DD0)
#define MLCPGAGPBDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA80D70)
#define MLCPGAGPBDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA80E20)
#define MLCPGAGPBDL_GLCNDPKHHAK_OFFSET UNITYSDK_OFFSET(0x1EA80D60)
#define MLCPGAGPBDL_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1EA80CE0)
#define MLCPGAGPBDL_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1EA80D20)
#define MLCPGAGPBDL_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x1EA80D30)
#define MLCPGAGPBDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA80BF0)
#define MLCPGAGPBDL_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1EA80D10)
#define MLCPGAGPBDL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EA80D00)
#define MLCPGAGPBDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA81390)
#define MLCPGAGPBDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA81330)
#define MLCPGAGPBDL_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x1EA80D50)
#define MLCPGAGPBDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA80C20)
#define MLCPGAGPBDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA80E50)
#define MLCPGAGPBDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA80EB0)

inline static constexpr unsigned int MLCPGAGPBDL_TypeDefinitionIndex = 28881;

	class MLCPGAGPBDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CLBJDBPOOEK; // 0x18
		::System::UInt32 IMJCALAFOMD; // 0x1C
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 NAJINDCEHMM; // 0x24
		::System::UInt32 GJJDLFJNHFJ; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MLCPGAGPBDL")->GetStaticField(0x57E40);
		}

		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object JOBMICAKNHM; // 0x0
		// static const ::System::Object CJIHHBEOLPP; // 0x0
		// static const ::System::Object DJAHPPOHHCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLCPGAGPBDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLCPGAGPBDL*))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MLCPGAGPBDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLCPGAGPBDL* Clone()
		{
			return ((::MLCPGAGPBDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::System::UInt32 NGOHCBGKBKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_NGOHCBGKBKN_OFFSET))(this);
		}

		::System::Void GLCNDPKHHAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_GLCNDPKHHAK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLCPGAGPBDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLCPGAGPBDL*))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLCPGAGPBDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLCPGAGPBDL*))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLCPGAGPBDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

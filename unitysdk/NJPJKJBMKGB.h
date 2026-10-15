#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJPJKJBMKGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJPJKJBMKGB_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0x1EB54150)
#define NJPJKJBMKGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB54550)
#define NJPJKJBMKGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB548F0)
#define NJPJKJBMKGB_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1EB541A0)
#define NJPJKJBMKGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB540C0)
#define NJPJKJBMKGB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB541C0)
#define NJPJKJBMKGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB54080)
#define NJPJKJBMKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB54070)
#define NJPJKJBMKGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB54270)
#define NJPJKJBMKGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB541E0)
#define NJPJKJBMKGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB542C0)
#define NJPJKJBMKGB_GLCNDPKHHAK_OFFSET UNITYSDK_OFFSET(0x1EB54190)
#define NJPJKJBMKGB_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1EB541B0)
#define NJPJKJBMKGB_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1EB54170)
#define NJPJKJBMKGB_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x1EB54140)
#define NJPJKJBMKGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB54000)
#define NJPJKJBMKGB_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1EB54160)
#define NJPJKJBMKGB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB541D0)
#define NJPJKJBMKGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB54840)
#define NJPJKJBMKGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB547E0)
#define NJPJKJBMKGB_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x1EB54180)
#define NJPJKJBMKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB54060)
#define NJPJKJBMKGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB54300)
#define NJPJKJBMKGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB54360)

inline static constexpr unsigned int NJPJKJBMKGB_TypeDefinitionIndex = 27795;

	class NJPJKJBMKGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAJINDCEHMM; // 0x18
		::System::UInt32 CLBJDBPOOEK; // 0x1C
		::System::UInt32 GJJDLFJNHFJ; // 0x20
		::System::UInt32 IMJCALAFOMD; // 0x24
		::System::UInt32 DNKADAFBILN; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NJPJKJBMKGB")->GetStaticField(0x65C70);
		}

		// static const ::System::Object CJIHHBEOLPP; // 0x0
		// static const ::System::Object JOBMICAKNHM; // 0x0
		// static const ::System::Object DJAHPPOHHCF; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJPJKJBMKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJPJKJBMKGB*))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NJPJKJBMKGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJPJKJBMKGB* Clone()
		{
			return ((::NJPJKJBMKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::System::UInt32 NGOHCBGKBKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_NGOHCBGKBKN_OFFSET))(this);
		}

		::System::Void GLCNDPKHHAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_GLCNDPKHHAK_OFFSET))(this, a1);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJPJKJBMKGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJPJKJBMKGB*))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJPJKJBMKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJPJKJBMKGB*))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJPJKJBMKGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

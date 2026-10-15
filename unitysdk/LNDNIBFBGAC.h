#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDNIBFBGAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNDNIBFBGAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B3090)
#define LNDNIBFBGAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B3480)
#define LNDNIBFBGAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B2BB0)
#define LNDNIBFBGAC_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E9B2C90)
#define LNDNIBFBGAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B2B70)
#define LNDNIBFBGAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2B60)
#define LNDNIBFBGAC_DJKNPFIKOGA_OFFSET UNITYSDK_OFFSET(0x1E9B2C40)
#define LNDNIBFBGAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B2D60)
#define LNDNIBFBGAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B2CD0)
#define LNDNIBFBGAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B2DB0)
#define LNDNIBFBGAC_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x1E9B2C60)
#define LNDNIBFBGAC_HBPNMCAFCJK_OFFSET UNITYSDK_OFFSET(0x1E9B2C70)
#define LNDNIBFBGAC_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1E9B2CB0)
#define LNDNIBFBGAC_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E9B2CA0)
#define LNDNIBFBGAC_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x1E9B2C50)
#define LNDNIBFBGAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B2AF0)
#define LNDNIBFBGAC_KBNIECIMIHE_OFFSET UNITYSDK_OFFSET(0x1E9B2C30)
#define LNDNIBFBGAC_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1E9B2CC0)
#define LNDNIBFBGAC_LOLONALPIOL_OFFSET UNITYSDK_OFFSET(0x1E9B2C80)
#define LNDNIBFBGAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B33D0)
#define LNDNIBFBGAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B3370)
#define LNDNIBFBGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2B50)
#define LNDNIBFBGAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B2DF0)
#define LNDNIBFBGAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B2E50)

	class LNDNIBFBGAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 AHNEBPEHFLP; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		::System::Int32 CBKHDELMNKA; // 0x20
		::System::UInt32 FMCFBIJJCBM; // 0x24
		::System::Int32 ICBJBACCFCA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LNDNIBFBGAC")->GetStaticField(0x406A0);
		}

		// static const ::System::Object JEAAMELDMDL; // 0x0
		// static const ::System::Object BMLOHFPHLOL; // 0x0
		// static const ::System::Object OEODGHGBKGG; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object MELOPNPCNIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNDNIBFBGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNDNIBFBGAC*))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNDNIBFBGAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LNDNIBFBGAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNDNIBFBGAC* Clone()
		{
			return ((::LNDNIBFBGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_CLONE_OFFSET))(this);
		}

		::System::Int32 KBNIECIMIHE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_KBNIECIMIHE_OFFSET))(this);
		}

		::System::Void DJKNPFIKOGA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_DJKNPFIKOGA_OFFSET))(this, a1);
		}

		::System::UInt32 INDOEFMDAOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_INDOEFMDAOK_OFFSET))(this);
		}

		::System::Void GMCOKCKEDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_GMCOKCKEDLC_OFFSET))(this, a1);
		}

		::System::Int32 HBPNMCAFCJK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_HBPNMCAFCJK_OFFSET))(this);
		}

		::System::Void LOLONALPIOL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_LOLONALPIOL_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Int32 IHDPOPKDFKO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_IHDPOPKDFKO_OFFSET))(this);
		}

		::System::Void LAGHFAAHOBL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_LAGHFAAHOBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNDNIBFBGAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNDNIBFBGAC*))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNDNIBFBGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNDNIBFBGAC*))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNDNIBFBGAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

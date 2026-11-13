#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKGODFLGEAM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKGODFLGEAM_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x205D1B00)
#define MKGODFLGEAM_ALNFBDMFJON_OFFSET UNITYSDK_OFFSET(0x205D1A90)
#define MKGODFLGEAM_BJNNNBEPLBI_OFFSET UNITYSDK_OFFSET(0x205D1AA0)
#define MKGODFLGEAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205D1FD0)
#define MKGODFLGEAM_CBBOHNAEMBN_OFFSET UNITYSDK_OFFSET(0x205D1A30)
#define MKGODFLGEAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x205D2320)
#define MKGODFLGEAM_CLONE_OFFSET UNITYSDK_OFFSET(0x205D19B0)
#define MKGODFLGEAM_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x205D1AB0)
#define MKGODFLGEAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205D1960)
#define MKGODFLGEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x205D1950)
#define MKGODFLGEAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205D1BE0)
#define MKGODFLGEAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x205D1B10)
#define MKGODFLGEAM_FMJFCDNCODB_OFFSET UNITYSDK_OFFSET(0x205D1A40)
#define MKGODFLGEAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205D1C70)
#define MKGODFLGEAM_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x205D1AF0)
#define MKGODFLGEAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205D18E0)
#define MKGODFLGEAM_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x205D1AC0)
#define MKGODFLGEAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205D2230)
#define MKGODFLGEAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205D21C0)
#define MKGODFLGEAM_NIJFANKOFEL_OFFSET UNITYSDK_OFFSET(0x205D1AE0)
#define MKGODFLGEAM_ODDHPHCCMBD_OFFSET UNITYSDK_OFFSET(0x205D1AD0)
#define MKGODFLGEAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205D1940)
#define MKGODFLGEAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205D1D40)
#define MKGODFLGEAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x205D1DA0)

inline static constexpr unsigned int MKGODFLGEAM_TypeDefinitionIndex = 27164;

	class MKGODFLGEAM : public ::System::Object
	{
	public:
		::System::String* APJJPMIKPIK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		::System::Boolean DBHOIOAHPNL; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 JJFJJBOFAKI; // 0x28
		::System::UInt32 DNKADAFBILN; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::MKGODFLGEAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKGODFLGEAM*>**)UnitySDK::FromName("", "MKGODFLGEAM")->GetStaticField(0x4F8C0);
		}

		// static const ::System::Object AHCJNILFHBO; // 0x0
		// static const ::System::Object MKICIFKJMDE; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object BDDADGLEABJ; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKGODFLGEAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKGODFLGEAM*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKGODFLGEAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKGODFLGEAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKGODFLGEAM*>*(*)())((::PBYTE)hIl2Cpp + MKGODFLGEAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKGODFLGEAM* Clone()
		{
			return ((::MKGODFLGEAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_CLONE_OFFSET))(this);
		}

		::System::String* CBBOHNAEMBN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_CBBOHNAEMBN_OFFSET))(this);
		}

		::System::Void FMJFCDNCODB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_FMJFCDNCODB_OFFSET))(this, a1);
		}

		::System::UInt32 ALNFBDMFJON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_ALNFBDMFJON_OFFSET))(this);
		}

		::System::Void BJNNNBEPLBI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKGODFLGEAM_BJNNNBEPLBI_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKGODFLGEAM_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean ODDHPHCCMBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_ODDHPHCCMBD_OFFSET))(this);
		}

		::System::Void NIJFANKOFEL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKGODFLGEAM_NIJFANKOFEL_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKGODFLGEAM_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKGODFLGEAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKGODFLGEAM*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKGODFLGEAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKGODFLGEAM*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKGODFLGEAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

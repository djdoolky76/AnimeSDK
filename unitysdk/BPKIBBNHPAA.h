#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPKIBBNHPAA;
class LFCHHMGGMPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPKIBBNHPAA_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E04A650)
#define BPKIBBNHPAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04AA70)
#define BPKIBBNHPAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04AEE0)
#define BPKIBBNHPAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E04A5E0)
#define BPKIBBNHPAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04A520)
#define BPKIBBNHPAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04A4D0)
#define BPKIBBNHPAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E04A6D0)
#define BPKIBBNHPAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E04A6A0)
#define BPKIBBNHPAA_FMFFOHNECBM_OFFSET UNITYSDK_OFFSET(0x1E04A660)
#define BPKIBBNHPAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E04A770)
#define BPKIBBNHPAA_GLKDMGKPMKK_OFFSET UNITYSDK_OFFSET(0x1E04A630)
#define BPKIBBNHPAA_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E04A640)
#define BPKIBBNHPAA_HMMHNDKFCLH_OFFSET UNITYSDK_OFFSET(0x1E04A670)
#define BPKIBBNHPAA_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E04A690)
#define BPKIBBNHPAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04A490)
#define BPKIBBNHPAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04ADD0)
#define BPKIBBNHPAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04AD00)
#define BPKIBBNHPAA_MMMHJOOEGKM_OFFSET UNITYSDK_OFFSET(0x1E04A610)
#define BPKIBBNHPAA_NKDINAILHGG_OFFSET UNITYSDK_OFFSET(0x1E04A620)
#define BPKIBBNHPAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04A4C0)
#define BPKIBBNHPAA_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E04A680)
#define BPKIBBNHPAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E04A7F0)
#define BPKIBBNHPAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E04A850)

	class BPKIBBNHPAA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LFCHHMGGMPC*>* NNKJKMDPLKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IDDLDFAPGBE; // 0x20
		::System::UInt32 DBHGHOHEPEA; // 0x24
		::System::UInt32 LAPNIOGIGPL; // 0x28
		::System::UInt32 IBEBBFIHLLP; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPKIBBNHPAA")->GetStaticField(0x554C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDBNHMOGNBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BPKIBBNHPAA")->GetStaticField(0x554C8);
		}

		// static const ::System::Object CCIILFEKOEN; // 0x0
		// static const ::System::Object BGEAMGMALCL; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object NFJLBIKHIAD; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPKIBBNHPAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPKIBBNHPAA*))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPKIBBNHPAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPKIBBNHPAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPKIBBNHPAA* Clone()
		{
			return ((::BPKIBBNHPAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LFCHHMGGMPC*>* MMMHJOOEGKM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LFCHHMGGMPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_MMMHJOOEGKM_OFFSET))(this);
		}

		::System::UInt32 NKDINAILHGG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_NKDINAILHGG_OFFSET))(this);
		}

		::System::Void GLKDMGKPMKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_GLKDMGKPMKK_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 FMFFOHNECBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_FMFFOHNECBM_OFFSET))(this);
		}

		::System::Void HMMHNDKFCLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_HMMHNDKFCLH_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPKIBBNHPAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPKIBBNHPAA*))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPKIBBNHPAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPKIBBNHPAA*))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPKIBBNHPAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBILHHEENJG;
class LBKMCGDMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBILHHEENJG_BGDKFANFLDJ_OFFSET UNITYSDK_OFFSET(0x1E06AFD0)
#define CBILHHEENJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06B3D0)
#define CBILHHEENJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06B840)
#define CBILHHEENJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06AF70)
#define CBILHHEENJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06AED0)
#define CBILHHEENJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06AE90)
#define CBILHHEENJG_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1E06AFC0)
#define CBILHHEENJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06B060)
#define CBILHHEENJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06B030)
#define CBILHHEENJG_FMECDGBIBDD_OFFSET UNITYSDK_OFFSET(0x1E06B020)
#define CBILHHEENJG_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1E06AFB0)
#define CBILHHEENJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06B100)
#define CBILHHEENJG_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1E06B000)
#define CBILHHEENJG_GOGFCFBDMNA_OFFSET UNITYSDK_OFFSET(0x1E06B010)
#define CBILHHEENJG_IHCOICMHPOE_OFFSET UNITYSDK_OFFSET(0x1E06AFE0)
#define CBILHHEENJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E06AE50)
#define CBILHHEENJG_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1E06AFF0)
#define CBILHHEENJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06B730)
#define CBILHHEENJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06B660)
#define CBILHHEENJG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E06AFA0)
#define CBILHHEENJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06AE80)
#define CBILHHEENJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06B180)
#define CBILHHEENJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06B1E0)

	class CBILHHEENJG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CMOGKAOLFAC; // 0x20
		::System::UInt32 HMPAFLDIPPB; // 0x24
		::System::UInt32 FKAIMIIAGPK; // 0x28
		::System::UInt32 NLDACLCFAOD; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CBILHHEENJG")->GetStaticField(0xC780);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CBILHHEENJG")->GetStaticField(0xC788);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object OJOGFBJAPMA; // 0x0
		// static const ::System::Object JAJICJAJDDO; // 0x0
		// static const ::System::Object MLABBDNGIEJ; // 0x0
		// static const ::System::Object OCOKGGOEJLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBILHHEENJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBILHHEENJG*))((::PBYTE)hIl2Cpp + CBILHHEENJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBILHHEENJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CBILHHEENJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBILHHEENJG* Clone()
		{
			return ((::CBILHHEENJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 GCMLDLLJGDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_GCMLDLLJGDJ_OFFSET))(this);
		}

		::System::Void ECAABINLDDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBILHHEENJG_ECAABINLDDB_OFFSET))(this, a1);
		}

		::System::UInt32 BGDKFANFLDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_BGDKFANFLDJ_OFFSET))(this);
		}

		::System::Void IHCOICMHPOE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBILHHEENJG_IHCOICMHPOE_OFFSET))(this, a1);
		}

		::System::UInt32 LGMLMDFDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_LGMLMDFDIBJ_OFFSET))(this);
		}

		::System::Void GJIBPKKENEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBILHHEENJG_GJIBPKKENEO_OFFSET))(this, a1);
		}

		::System::UInt32 GOGFCFBDMNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_GOGFCFBDMNA_OFFSET))(this);
		}

		::System::Void FMECDGBIBDD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBILHHEENJG_FMECDGBIBDD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBILHHEENJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBILHHEENJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBILHHEENJG*))((::PBYTE)hIl2Cpp + CBILHHEENJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBILHHEENJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBILHHEENJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBILHHEENJG*))((::PBYTE)hIl2Cpp + CBILHHEENJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBILHHEENJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

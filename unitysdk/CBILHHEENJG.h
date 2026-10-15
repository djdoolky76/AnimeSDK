#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBILHHEENJG;
class LBKMCGDMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBILHHEENJG_BGDKFANFLDJ_OFFSET UNITYSDK_OFFSET(0x1E03DA40)
#define CBILHHEENJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03DE40)
#define CBILHHEENJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03E2B0)
#define CBILHHEENJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03D9E0)
#define CBILHHEENJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03D940)
#define CBILHHEENJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03D900)
#define CBILHHEENJG_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1E03DA30)
#define CBILHHEENJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03DAD0)
#define CBILHHEENJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03DAA0)
#define CBILHHEENJG_FMECDGBIBDD_OFFSET UNITYSDK_OFFSET(0x1E03DA90)
#define CBILHHEENJG_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1E03DA20)
#define CBILHHEENJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03DB70)
#define CBILHHEENJG_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1E03DA70)
#define CBILHHEENJG_GOGFCFBDMNA_OFFSET UNITYSDK_OFFSET(0x1E03DA80)
#define CBILHHEENJG_IHCOICMHPOE_OFFSET UNITYSDK_OFFSET(0x1E03DA50)
#define CBILHHEENJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03D8C0)
#define CBILHHEENJG_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1E03DA60)
#define CBILHHEENJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03E1A0)
#define CBILHHEENJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03E0D0)
#define CBILHHEENJG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E03DA10)
#define CBILHHEENJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03D8F0)
#define CBILHHEENJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03DBF0)
#define CBILHHEENJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03DC50)

inline static constexpr unsigned int CBILHHEENJG_TypeDefinitionIndex = 33786;

	class CBILHHEENJG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NLDACLCFAOD; // 0x20
		::System::UInt32 CMOGKAOLFAC; // 0x24
		::System::UInt32 FKAIMIIAGPK; // 0x28
		::System::UInt32 HMPAFLDIPPB; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>**)UnitySDK::FromName("", "CBILHHEENJG")->GetStaticField(0xB750);
		}

		static ::Google::Protobuf::MessageParser_1<::CBILHHEENJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBILHHEENJG*>**)UnitySDK::FromName("", "CBILHHEENJG")->GetStaticField(0xB758);
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

		static ::Google::Protobuf::MessageParser_1<::CBILHHEENJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBILHHEENJG*>*(*)())((::PBYTE)hIl2Cpp + CBILHHEENJG_JJGHOBBFNJD_OFFSET))();
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

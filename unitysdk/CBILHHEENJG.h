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

#define CBILHHEENJG_BGDKFANFLDJ_OFFSET UNITYSDK_OFFSET(0x1FEAB750)
#define CBILHHEENJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEABB10)
#define CBILHHEENJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEABF90)
#define CBILHHEENJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEAB6B0)
#define CBILHHEENJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEAB600)
#define CBILHHEENJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEAB5C0)
#define CBILHHEENJG_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1FEAB740)
#define CBILHHEENJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEAB7A0)
#define CBILHHEENJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEAB770)
#define CBILHHEENJG_FMECDGBIBDD_OFFSET UNITYSDK_OFFSET(0x1FEAB6F0)
#define CBILHHEENJG_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1FEAB730)
#define CBILHHEENJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEAB840)
#define CBILHHEENJG_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1FEAB710)
#define CBILHHEENJG_GOGFCFBDMNA_OFFSET UNITYSDK_OFFSET(0x1FEAB6E0)
#define CBILHHEENJG_IHCOICMHPOE_OFFSET UNITYSDK_OFFSET(0x1FEAB760)
#define CBILHHEENJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEAB580)
#define CBILHHEENJG_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1FEAB700)
#define CBILHHEENJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEABE70)
#define CBILHHEENJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEABDA0)
#define CBILHHEENJG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1FEAB720)
#define CBILHHEENJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEAB5B0)
#define CBILHHEENJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEAB8C0)
#define CBILHHEENJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEAB920)

inline static constexpr unsigned int CBILHHEENJG_TypeDefinitionIndex = 34701;

	class CBILHHEENJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* CBFGBDBJHID; // 0x18
		::System::UInt32 NLDACLCFAOD; // 0x20
		::System::UInt32 FKAIMIIAGPK; // 0x24
		::System::UInt32 HMPAFLDIPPB; // 0x28
		::System::UInt32 CMOGKAOLFAC; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::CBILHHEENJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBILHHEENJG*>**)UnitySDK::FromName("", "CBILHHEENJG")->GetStaticField(0x600E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>**)UnitySDK::FromName("", "CBILHHEENJG")->GetStaticField(0x600E8);
		}

		// static const ::System::Object OCOKGGOEJLE; // 0x0
		// static const ::System::Object MLABBDNGIEJ; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object OJOGFBJAPMA; // 0x0
		// static const ::System::Object JAJICJAJDDO; // 0x0
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

		::System::UInt32 GOGFCFBDMNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_GOGFCFBDMNA_OFFSET))(this);
		}

		::System::Void FMECDGBIBDD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBILHHEENJG_FMECDGBIBDD_OFFSET))(this, a1);
		}

		::System::UInt32 LGMLMDFDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG_LGMLMDFDIBJ_OFFSET))(this);
		}

		::System::Void GJIBPKKENEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBILHHEENJG_GJIBPKKENEO_OFFSET))(this, a1);
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

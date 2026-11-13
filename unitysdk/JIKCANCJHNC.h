#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIKCANCJHNC;
class ONKDAPOKGAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIKCANCJHNC_BDPIAOHKOAL_OFFSET UNITYSDK_OFFSET(0x204B7560)
#define JIKCANCJHNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204B7B40)
#define JIKCANCJHNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x204B7EE0)
#define JIKCANCJHNC_CEPMGNPPEIJ_OFFSET UNITYSDK_OFFSET(0x204B7570)
#define JIKCANCJHNC_CLONE_OFFSET UNITYSDK_OFFSET(0x204B7500)
#define JIKCANCJHNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204B73C0)
#define JIKCANCJHNC_CTOR_OFFSET UNITYSDK_OFFSET(0x204B7330)
#define JIKCANCJHNC_EEBBDKKABGG_OFFSET UNITYSDK_OFFSET(0x204B7550)
#define JIKCANCJHNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204B7630)
#define JIKCANCJHNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x204B75D0)
#define JIKCANCJHNC_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x204B75A0)
#define JIKCANCJHNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204B7710)
#define JIKCANCJHNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204B72C0)
#define JIKCANCJHNC_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x204B75B0)
#define JIKCANCJHNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204B7D70)
#define JIKCANCJHNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204B7C90)
#define JIKCANCJHNC_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x204B75C0)
#define JIKCANCJHNC_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x204B7590)
#define JIKCANCJHNC_OGLNANPNINP_OFFSET UNITYSDK_OFFSET(0x204B7580)
#define JIKCANCJHNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204B7320)
#define JIKCANCJHNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204B7860)
#define JIKCANCJHNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x204B78C0)

inline static constexpr unsigned int JIKCANCJHNC_TypeDefinitionIndex = 29639;

	class JIKCANCJHNC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x20
		::System::UInt32 GFMHFBDKDOE; // 0x28
		::System::Boolean NNPEEFBPADN; // 0x2C
		::System::Boolean MGHJOOLPLKO; // 0x2D
		static ::Google::Protobuf::FieldCodec_1<::ONKDAPOKGAC*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::ONKDAPOKGAC*>**)UnitySDK::FromName("", "JIKCANCJHNC")->GetStaticField(0x60900);
		}

		static ::Google::Protobuf::MessageParser_1<::JIKCANCJHNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIKCANCJHNC*>**)UnitySDK::FromName("", "JIKCANCJHNC")->GetStaticField(0x60908);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JIKCANCJHNC")->GetStaticField(0x60910);
		}

		// static const ::System::Object HECOPIIOGFB; // 0x0
		// static const ::System::Object GKKIGDJJNAF; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIKCANCJHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIKCANCJHNC*))((::PBYTE)hIl2Cpp + JIKCANCJHNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIKCANCJHNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIKCANCJHNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIKCANCJHNC*>*(*)())((::PBYTE)hIl2Cpp + JIKCANCJHNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIKCANCJHNC* Clone()
		{
			return ((::JIKCANCJHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_CLONE_OFFSET))(this);
		}

		::System::Boolean EEBBDKKABGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_EEBBDKKABGG_OFFSET))(this);
		}

		::System::Void BDPIAOHKOAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIKCANCJHNC_BDPIAOHKOAL_OFFSET))(this, a1);
		}

		::System::Boolean CEPMGNPPEIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_CEPMGNPPEIJ_OFFSET))(this);
		}

		::System::Void OGLNANPNINP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIKCANCJHNC_OGLNANPNINP_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIKCANCJHNC_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_KHINOGAEHBI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIKCANCJHNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIKCANCJHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIKCANCJHNC*))((::PBYTE)hIl2Cpp + JIKCANCJHNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIKCANCJHNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIKCANCJHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIKCANCJHNC*))((::PBYTE)hIl2Cpp + JIKCANCJHNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIKCANCJHNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHBDPOJEEMJ;
class NIHKHKONHPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIHKHKONHPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB2FAC0)
#define NIHKHKONHPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2FE00)
#define NIHKHKONHPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB2F490)
#define NIHKHKONHPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB2F360)
#define NIHKHKONHPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2F2D0)
#define NIHKHKONHPN_EAEKBEANMMC_OFFSET UNITYSDK_OFFSET(0x1EB2F4D0)
#define NIHKHKONHPN_EJHOMKKOHGC_OFFSET UNITYSDK_OFFSET(0x1EB2F510)
#define NIHKHKONHPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB2F550)
#define NIHKHKONHPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB2F520)
#define NIHKHKONHPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB2F730)
#define NIHKHKONHPN_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1EB2F4F0)
#define NIHKHKONHPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB2F290)
#define NIHKHKONHPN_KMGNCBLNLDL_OFFSET UNITYSDK_OFFSET(0x1EB2F500)
#define NIHKHKONHPN_LBKNEJIJONC_OFFSET UNITYSDK_OFFSET(0x1EB2F4C0)
#define NIHKHKONHPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB2FCB0)
#define NIHKHKONHPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB2FC10)
#define NIHKHKONHPN_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1EB2F4E0)
#define NIHKHKONHPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB2F2C0)
#define NIHKHKONHPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB2F900)
#define NIHKHKONHPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB2F960)

inline static constexpr unsigned int NIHKHKONHPN_TypeDefinitionIndex = 33132;

	class NIHKHKONHPN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MPHHMNAGANO; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KFLDGGAAOAL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::FHBDPOJEEMJ* HDNKPLEAMOO; // 0x28
		::System::UInt32 JCGMPJONLCA; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_FIJIJAFPMGM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NIHKHKONHPN")->GetStaticField(0x63D30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EMMMOHAGENG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NIHKHKONHPN")->GetStaticField(0x63D38);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NIHKHKONHPN")->GetStaticField(0x63D40);
		}

		// static const ::System::Object GJDNAPHNIPM; // 0x0
		// static const ::System::Object NFLBJKNGOAK; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object JAGPGICPJKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIHKHKONHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHKHKONHPN*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIHKHKONHPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NIHKHKONHPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIHKHKONHPN* Clone()
		{
			return ((::NIHKHKONHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LBKNEJIJONC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_LBKNEJIJONC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAEKBEANMMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_EAEKBEANMMC_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIHKHKONHPN_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::FHBDPOJEEMJ* KMGNCBLNLDL()
		{
			return ((::FHBDPOJEEMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_KMGNCBLNLDL_OFFSET))(this);
		}

		::System::Void EJHOMKKOHGC(::FHBDPOJEEMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHBDPOJEEMJ*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_EJHOMKKOHGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIHKHKONHPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIHKHKONHPN*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIHKHKONHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHKHKONHPN*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIHKHKONHPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

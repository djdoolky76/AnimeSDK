#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class CBNNMKNBLDI;
class PCGMJHKDCOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCGMJHKDCOG_AEHGBFNBPKK_OFFSET UNITYSDK_OFFSET(0x1DEDB110)
#define PCGMJHKDCOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDB660)
#define PCGMJHKDCOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDBAE0)
#define PCGMJHKDCOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDB0A0)
#define PCGMJHKDCOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDAFB0)
#define PCGMJHKDCOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDAED0)
#define PCGMJHKDCOG_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1DEDB120)
#define PCGMJHKDCOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDB190)
#define PCGMJHKDCOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDB130)
#define PCGMJHKDCOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDB330)
#define PCGMJHKDCOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDAE60)
#define PCGMJHKDCOG_KOALMMCBGEN_OFFSET UNITYSDK_OFFSET(0x1DEDB0F0)
#define PCGMJHKDCOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDB910)
#define PCGMJHKDCOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDB7A0)
#define PCGMJHKDCOG_NBHCJMCIOKH_OFFSET UNITYSDK_OFFSET(0x1DEDB100)
#define PCGMJHKDCOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDAEC0)
#define PCGMJHKDCOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDB4B0)
#define PCGMJHKDCOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDB510)

inline static constexpr unsigned int PCGMJHKDCOG_TypeDefinitionIndex = 29928;

	class PCGMJHKDCOG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BKLPNIHKKIE; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* CHKNJEOCLDD; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::CBNNMKNBLDI*>* ELBGFDFFBPH; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::CBNNMKNBLDI*>* BKJHDEJKLKO; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::CBNNMKNBLDI*>** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::CBNNMKNBLDI*>**)UnitySDK::FromName("", "PCGMJHKDCOG")->GetStaticField(0x2EAC0);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_JIFGBDLLCIJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "PCGMJHKDCOG")->GetStaticField(0x2EAC8);
		}

		static ::Google::Protobuf::MessageParser_1<::PCGMJHKDCOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCGMJHKDCOG*>**)UnitySDK::FromName("", "PCGMJHKDCOG")->GetStaticField(0x2EAD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CBNNMKNBLDI*>** StaticGet_DGANMNMLONL()
		{
			return (::Google::Protobuf::FieldCodec_1<::CBNNMKNBLDI*>**)UnitySDK::FromName("", "PCGMJHKDCOG")->GetStaticField(0x2EAD8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NCNDGCHGBDL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PCGMJHKDCOG")->GetStaticField(0x2EAE0);
		}

		// static const ::System::Object IOLNKBGEMLI; // 0x0
		// static const ::System::Object OHIEIOGLDAA; // 0x0
		// static const ::System::Object NKMKOFHCIIG; // 0x0
		// static const ::System::Object JBKGNCCMBND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCGMJHKDCOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCGMJHKDCOG*))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCGMJHKDCOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCGMJHKDCOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCGMJHKDCOG*>*(*)())((::PBYTE)hIl2Cpp + PCGMJHKDCOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCGMJHKDCOG* Clone()
		{
			return ((::PCGMJHKDCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KOALMMCBGEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_KOALMMCBGEN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBNNMKNBLDI*>* NBHCJMCIOKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBNNMKNBLDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_NBHCJMCIOKH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* AEHGBFNBPKK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_AEHGBFNBPKK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBNNMKNBLDI*>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBNNMKNBLDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_DCKAMLHKADM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCGMJHKDCOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCGMJHKDCOG*))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCGMJHKDCOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCGMJHKDCOG*))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCGMJHKDCOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

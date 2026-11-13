#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLIPBCNOPNO;
class LHHGCDLCJDA;
class MNCBEDBDDHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLIPBCNOPNO_AAEAMNNNFPM_OFFSET UNITYSDK_OFFSET(0x1FDBBDF0)
#define KLIPBCNOPNO_ADOMLKDNJIJ_OFFSET UNITYSDK_OFFSET(0x1FDBBDE0)
#define KLIPBCNOPNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDBC270)
#define KLIPBCNOPNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBC6C0)
#define KLIPBCNOPNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDBBD90)
#define KLIPBCNOPNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDBBCB0)
#define KLIPBCNOPNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBBC70)
#define KLIPBCNOPNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDBBE40)
#define KLIPBCNOPNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDBBE10)
#define KLIPBCNOPNO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDBBDD0)
#define KLIPBCNOPNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDBC020)
#define KLIPBCNOPNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDBBC30)
#define KLIPBCNOPNO_KCLLOPDAONO_OFFSET UNITYSDK_OFFSET(0x1FDBBE00)
#define KLIPBCNOPNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDBC4B0)
#define KLIPBCNOPNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDBC3B0)
#define KLIPBCNOPNO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDBBDC0)
#define KLIPBCNOPNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDBBC60)
#define KLIPBCNOPNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDBC0A0)
#define KLIPBCNOPNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDBC100)

inline static constexpr unsigned int KLIPBCNOPNO_TypeDefinitionIndex = 31147;

	class KLIPBCNOPNO : public ::System::Object
	{
	public:
		::MNCBEDBDDHL* DELHEDACPLM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LHHGCDLCJDA*>* KPJLKJBKGDG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KLIPBCNOPNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLIPBCNOPNO*>**)UnitySDK::FromName("", "KLIPBCNOPNO")->GetStaticField(0x1BD80);
		}

		static ::Google::Protobuf::FieldCodec_1<::LHHGCDLCJDA*>** StaticGet_GKPABEJNKJD()
		{
			return (::Google::Protobuf::FieldCodec_1<::LHHGCDLCJDA*>**)UnitySDK::FromName("", "KLIPBCNOPNO")->GetStaticField(0x1BD88);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MGBEGKCMINB; // 0x0
		// static const ::System::Object MLFHAFFHOAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLIPBCNOPNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIPBCNOPNO*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIPBCNOPNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLIPBCNOPNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLIPBCNOPNO*>*(*)())((::PBYTE)hIl2Cpp + KLIPBCNOPNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLIPBCNOPNO* Clone()
		{
			return ((::KLIPBCNOPNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::MNCBEDBDDHL* ADOMLKDNJIJ()
		{
			return ((::MNCBEDBDDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_ADOMLKDNJIJ_OFFSET))(this);
		}

		::System::Void AAEAMNNNFPM(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_AAEAMNNNFPM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LHHGCDLCJDA*>* KCLLOPDAONO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LHHGCDLCJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_KCLLOPDAONO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLIPBCNOPNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLIPBCNOPNO*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLIPBCNOPNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIPBCNOPNO*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLIPBCNOPNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

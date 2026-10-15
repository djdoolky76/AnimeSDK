#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNGMFEFNKG;
class NPIJFFFFKBK;
class PDEIEDGCOBA;
class PKENAGKIECB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCNGMFEFNKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07B970)
#define CCNGMFEFNKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07BF50)
#define CCNGMFEFNKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07B340)
#define CCNGMFEFNKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07B1C0)
#define CCNGMFEFNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07B120)
#define CCNGMFEFNKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07B410)
#define CCNGMFEFNKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07B3E0)
#define CCNGMFEFNKG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E07B3C0)
#define CCNGMFEFNKG_FCIPIJINIAM_OFFSET UNITYSDK_OFFSET(0x1E07B3D0)
#define CCNGMFEFNKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07B5A0)
#define CCNGMFEFNKG_IBMFCNCICFB_OFFSET UNITYSDK_OFFSET(0x1E07B390)
#define CCNGMFEFNKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07B0E0)
#define CCNGMFEFNKG_KAOCPHFNPOE_OFFSET UNITYSDK_OFFSET(0x1E07B370)
#define CCNGMFEFNKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07BD30)
#define CCNGMFEFNKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07BB70)
#define CCNGMFEFNKG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E07B3A0)
#define CCNGMFEFNKG_NKOABEGPBPJ_OFFSET UNITYSDK_OFFSET(0x1E07B380)
#define CCNGMFEFNKG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E07B3B0)
#define CCNGMFEFNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07B110)
#define CCNGMFEFNKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07B720)
#define CCNGMFEFNKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07B780)

inline static constexpr unsigned int CCNGMFEFNKG_TypeDefinitionIndex = 27885;

	class CCNGMFEFNKG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PKENAGKIECB*>* EAENICGLFEO; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NPIJFFFFKBK*>* CBFGBDBJHID; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JAODKINDHBE; // 0x28
		::PDEIEDGCOBA* AHHACEAEOOL; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::FieldCodec** StaticGet_MFJLNGBOJOJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CCNGMFEFNKG")->GetStaticField(0xE5C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BKNGLEJHAMF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CCNGMFEFNKG")->GetStaticField(0xE5C8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CCNGMFEFNKG")->GetStaticField(0xE5D0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCNGMFEFNKG")->GetStaticField(0xE5D8);
		}

		// static const ::System::Object IIAPKIDPCDP; // 0x0
		// static const ::System::Object CFKHFJICMFD; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MEKPIJHGCHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCNGMFEFNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCNGMFEFNKG*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCNGMFEFNKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCNGMFEFNKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCNGMFEFNKG* Clone()
		{
			return ((::CCNGMFEFNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKENAGKIECB*>* KAOCPHFNPOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKENAGKIECB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_KAOCPHFNPOE_OFFSET))(this);
		}

		::PDEIEDGCOBA* NKOABEGPBPJ()
		{
			return ((::PDEIEDGCOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_NKOABEGPBPJ_OFFSET))(this);
		}

		::System::Void IBMFCNCICFB(::PDEIEDGCOBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDEIEDGCOBA*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_IBMFCNCICFB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NPIJFFFFKBK*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NPIJFFFFKBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FCIPIJINIAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_FCIPIJINIAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCNGMFEFNKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCNGMFEFNKG*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCNGMFEFNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCNGMFEFNKG*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCNGMFEFNKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

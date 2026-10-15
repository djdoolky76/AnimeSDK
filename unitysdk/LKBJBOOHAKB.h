#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKBJBOOHAKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKBJBOOHAKB_AONEFDOPGDC_OFFSET UNITYSDK_OFFSET(0x1E95E6F0)
#define LKBJBOOHAKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E95EC10)
#define LKBJBOOHAKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95EEB0)
#define LKBJBOOHAKB_CDKCJNCINGF_OFFSET UNITYSDK_OFFSET(0x1E95E6E0)
#define LKBJBOOHAKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E95E650)
#define LKBJBOOHAKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E95E600)
#define LKBJBOOHAKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95E5F0)
#define LKBJBOOHAKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E95E800)
#define LKBJBOOHAKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E95E770)
#define LKBJBOOHAKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E95E760)
#define LKBJBOOHAKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E95E910)
#define LKBJBOOHAKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E95E5B0)
#define LKBJBOOHAKB_LDLPGMEAMHL_OFFSET UNITYSDK_OFFSET(0x1E95E6D0)
#define LKBJBOOHAKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E95EDD0)
#define LKBJBOOHAKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E95ED70)
#define LKBJBOOHAKB_NOJOEJIFAGC_OFFSET UNITYSDK_OFFSET(0x1E95E700)
#define LKBJBOOHAKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E95E750)
#define LKBJBOOHAKB_OCMELHDBILD_OFFSET UNITYSDK_OFFSET(0x1E95E6B0)
#define LKBJBOOHAKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E95E5E0)
#define LKBJBOOHAKB_PNLHBBDAGKE_OFFSET UNITYSDK_OFFSET(0x1E95E6C0)
#define LKBJBOOHAKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E95E9D0)
#define LKBJBOOHAKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E95EA30)

inline static constexpr unsigned int LKBJBOOHAKB_TypeDefinitionIndex = 34131;

	class LKBJBOOHAKB : public ::System::Object
	{
	public:
		::System::String* GBEOKDKOKKG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EEJENIBCKFC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::Boolean LOMIKOJHEPD; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LKBJBOOHAKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LKBJBOOHAKB*>**)UnitySDK::FromName("", "LKBJBOOHAKB")->GetStaticField(0x39E90);
		}

		// static const ::System::Object CDDFKHMGIKC; // 0x0
		// static const ::System::Object OPFGMBFAOKN; // 0x0
		// static const ::System::Object NPGGEJCIEND; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKBJBOOHAKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKBJBOOHAKB*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKBJBOOHAKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LKBJBOOHAKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LKBJBOOHAKB*>*(*)())((::PBYTE)hIl2Cpp + LKBJBOOHAKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKBJBOOHAKB* Clone()
		{
			return ((::LKBJBOOHAKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCMELHDBILD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_OCMELHDBILD_OFFSET))(this);
		}

		::System::Void PNLHBBDAGKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_PNLHBBDAGKE_OFFSET))(this, a1);
		}

		::System::Boolean LDLPGMEAMHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_LDLPGMEAMHL_OFFSET))(this);
		}

		::System::Void CDKCJNCINGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_CDKCJNCINGF_OFFSET))(this, a1);
		}

		::System::String* AONEFDOPGDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_AONEFDOPGDC_OFFSET))(this);
		}

		::System::Void NOJOEJIFAGC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_NOJOEJIFAGC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKBJBOOHAKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKBJBOOHAKB*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKBJBOOHAKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKBJBOOHAKB*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKBJBOOHAKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

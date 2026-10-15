#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABPMMILMLE;
class EPBMGIOIHEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AABPMMILMLE_BADJCDPGNOK_OFFSET UNITYSDK_OFFSET(0x1DDB69E0)
#define AABPMMILMLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB6F00)
#define AABPMMILMLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB7370)
#define AABPMMILMLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB6910)
#define AABPMMILMLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB68A0)
#define AABPMMILMLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB6890)
#define AABPMMILMLE_DPKCINMNJAB_OFFSET UNITYSDK_OFFSET(0x1DDB69C0)
#define AABPMMILMLE_EBGKEEGKMPD_OFFSET UNITYSDK_OFFSET(0x1DDB69B0)
#define AABPMMILMLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB6B80)
#define AABPMMILMLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB69F0)
#define AABPMMILMLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDB69A0)
#define AABPMMILMLE_FMLHOELMHOP_OFFSET UNITYSDK_OFFSET(0x1DDB69D0)
#define AABPMMILMLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB6D10)
#define AABPMMILMLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB6850)
#define AABPMMILMLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB7170)
#define AABPMMILMLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB70A0)
#define AABPMMILMLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDB6990)
#define AABPMMILMLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB6880)
#define AABPMMILMLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB6D60)
#define AABPMMILMLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB6DC0)

	class AABPMMILMLE : public ::System::Object
	{
	public:
		::EPBMGIOIHEI* FHHGOBCJNDE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 HGLLGMBMHMC; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AABPMMILMLE")->GetStaticField(0x36780);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MCCEJINNADF; // 0x0
		// static const ::System::Object KOJAMKEFFNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AABPMMILMLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABPMMILMLE*))((::PBYTE)hIl2Cpp + AABPMMILMLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABPMMILMLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AABPMMILMLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AABPMMILMLE* Clone()
		{
			return ((::AABPMMILMLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AABPMMILMLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EPBMGIOIHEI* EBGKEEGKMPD()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_EBGKEEGKMPD_OFFSET))(this);
		}

		::System::Void DPKCINMNJAB(::EPBMGIOIHEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + AABPMMILMLE_DPKCINMNJAB_OFFSET))(this, a1);
		}

		::System::Int64 FMLHOELMHOP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_FMLHOELMHOP_OFFSET))(this);
		}

		::System::Void BADJCDPGNOK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + AABPMMILMLE_BADJCDPGNOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AABPMMILMLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AABPMMILMLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AABPMMILMLE*))((::PBYTE)hIl2Cpp + AABPMMILMLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AABPMMILMLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AABPMMILMLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABPMMILMLE*))((::PBYTE)hIl2Cpp + AABPMMILMLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AABPMMILMLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

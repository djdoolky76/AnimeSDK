#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLBAOLFBEGB;
class PPELMHMMCHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLBAOLFBEGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB62270)
#define NLBAOLFBEGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB62640)
#define NLBAOLFBEGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB61D20)
#define NLBAOLFBEGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB61C80)
#define NLBAOLFBEGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB61C40)
#define NLBAOLFBEGB_DMJGDOFEOBJ_OFFSET UNITYSDK_OFFSET(0x1EB61D90)
#define NLBAOLFBEGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB61EE0)
#define NLBAOLFBEGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB61DA0)
#define NLBAOLFBEGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB61D70)
#define NLBAOLFBEGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB62010)
#define NLBAOLFBEGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB61C00)
#define NLBAOLFBEGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB62450)
#define NLBAOLFBEGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB623A0)
#define NLBAOLFBEGB_NCGIAPHKPNG_OFFSET UNITYSDK_OFFSET(0x1EB61D80)
#define NLBAOLFBEGB_NHILKCCCCEI_OFFSET UNITYSDK_OFFSET(0x1EB61D50)
#define NLBAOLFBEGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB61D60)
#define NLBAOLFBEGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB61C30)
#define NLBAOLFBEGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB62080)
#define NLBAOLFBEGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB620E0)

	class NLBAOLFBEGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PPELMHMMCHP*>* CGLBDIMECBJ; // 0x18
		::System::Boolean GMGMODDCHEF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_EIIMLAMBJLI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NLBAOLFBEGB")->GetStaticField(0x66840);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NLBAOLFBEGB")->GetStaticField(0x66848);
		}

		// static const ::System::Object IGENPAPDIAF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JPDKKDOPLLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLBAOLFBEGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBAOLFBEGB*))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLBAOLFBEGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NLBAOLFBEGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLBAOLFBEGB* Clone()
		{
			return ((::NLBAOLFBEGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PPELMHMMCHP*>* NHILKCCCCEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PPELMHMMCHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_NHILKCCCCEI_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean NCGIAPHKPNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_NCGIAPHKPNG_OFFSET))(this);
		}

		::System::Void DMJGDOFEOBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_DMJGDOFEOBJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLBAOLFBEGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLBAOLFBEGB*))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLBAOLFBEGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBAOLFBEGB*))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLBAOLFBEGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

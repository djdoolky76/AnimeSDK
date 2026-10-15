#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKONMPOJKP;
class DLJLBCGBOCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLJLBCGBOCB_BEGGOBGFPDN_OFFSET UNITYSDK_OFFSET(0x1E1E74C0)
#define DLJLBCGBOCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E79E0)
#define DLJLBCGBOCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7D80)
#define DLJLBCGBOCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E7420)
#define DLJLBCGBOCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E7390)
#define DLJLBCGBOCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7380)
#define DLJLBCGBOCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E7680)
#define DLJLBCGBOCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E7500)
#define DLJLBCGBOCB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1E74F0)
#define DLJLBCGBOCB_FMMIADHAKOB_OFFSET UNITYSDK_OFFSET(0x1E1E74D0)
#define DLJLBCGBOCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E7800)
#define DLJLBCGBOCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E7340)
#define DLJLBCGBOCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E7B90)
#define DLJLBCGBOCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E7AB0)
#define DLJLBCGBOCB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1E74E0)
#define DLJLBCGBOCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7370)
#define DLJLBCGBOCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E78A0)
#define DLJLBCGBOCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E7900)

	class DLJLBCGBOCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AGKONMPOJKP* HICKDGBJGJM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DLJLBCGBOCB")->GetStaticField(0x3DAA0);
		}

		// static const ::System::Object LKIIPDMBEFP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLJLBCGBOCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLJLBCGBOCB*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLJLBCGBOCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DLJLBCGBOCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLJLBCGBOCB* Clone()
		{
			return ((::DLJLBCGBOCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_CLONE_OFFSET))(this);
		}

		::AGKONMPOJKP* BEGGOBGFPDN()
		{
			return ((::AGKONMPOJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_BEGGOBGFPDN_OFFSET))(this);
		}

		::System::Void FMMIADHAKOB(::AGKONMPOJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGKONMPOJKP*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_FMMIADHAKOB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLJLBCGBOCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLJLBCGBOCB*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLJLBCGBOCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLJLBCGBOCB*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLJLBCGBOCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

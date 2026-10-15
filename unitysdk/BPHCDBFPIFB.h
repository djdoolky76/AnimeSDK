#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHCDBFPIFB;
class KCDHBIEAFDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPHCDBFPIFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E047110)
#define BPHCDBFPIFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E047540)
#define BPHCDBFPIFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E046BA0)
#define BPHCDBFPIFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E046B10)
#define BPHCDBFPIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E046B00)
#define BPHCDBFPIFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E046E00)
#define BPHCDBFPIFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E046C80)
#define BPHCDBFPIFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E046C70)
#define BPHCDBFPIFB_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E046C50)
#define BPHCDBFPIFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E046F80)
#define BPHCDBFPIFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E046AC0)
#define BPHCDBFPIFB_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E046C40)
#define BPHCDBFPIFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E047310)
#define BPHCDBFPIFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0471E0)
#define BPHCDBFPIFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E046C60)
#define BPHCDBFPIFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E046AF0)
#define BPHCDBFPIFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E046FD0)
#define BPHCDBFPIFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E047030)

	class BPHCDBFPIFB : public ::System::Object
	{
	public:
		::KCDHBIEAFDE* MGBEADJIBJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPHCDBFPIFB")->GetStaticField(0x55160);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPHCDBFPIFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHCDBFPIFB*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPHCDBFPIFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPHCDBFPIFB* Clone()
		{
			return ((::BPHCDBFPIFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CLONE_OFFSET))(this);
		}

		::KCDHBIEAFDE* LHJEMKJFLJK()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPHCDBFPIFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHCDBFPIFB*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPHCDBFPIFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHCDBFPIFB*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

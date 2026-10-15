#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJEJDDLJPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGJEJDDLJPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA795A0)
#define BGJEJDDLJPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA79870)
#define BGJEJDDLJPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA791F0)
#define BGJEJDDLJPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA791C0)
#define BGJEJDDLJPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA791B0)
#define BGJEJDDLJPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA79360)
#define BGJEJDDLJPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA79280)
#define BGJEJDDLJPE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA79250)
#define BGJEJDDLJPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA79430)
#define BGJEJDDLJPE_GGKPMFLNHJO_OFFSET UNITYSDK_OFFSET(0x1EA79260)
#define BGJEJDDLJPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA79170)
#define BGJEJDDLJPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA796F0)
#define BGJEJDDLJPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA796B0)
#define BGJEJDDLJPE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA79240)
#define BGJEJDDLJPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA791A0)
#define BGJEJDDLJPE_PKAIJDNDGHJ_OFFSET UNITYSDK_OFFSET(0x1EA79270)
#define BGJEJDDLJPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA79460)
#define BGJEJDDLJPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA794C0)

inline static constexpr unsigned int BGJEJDDLJPE_TypeDefinitionIndex = 30180;

	class BGJEJDDLJPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GKPADDHFMBE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BGJEJDDLJPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGJEJDDLJPE*>**)UnitySDK::FromName("", "BGJEJDDLJPE")->GetStaticField(0x42EE0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HEGEJMNPAOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGJEJDDLJPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGJEJDDLJPE*))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJEJDDLJPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGJEJDDLJPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGJEJDDLJPE*>*(*)())((::PBYTE)hIl2Cpp + BGJEJDDLJPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGJEJDDLJPE* Clone()
		{
			return ((::BGJEJDDLJPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GGKPMFLNHJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_GGKPMFLNHJO_OFFSET))(this);
		}

		::System::Void PKAIJDNDGHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_PKAIJDNDGHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGJEJDDLJPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGJEJDDLJPE*))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGJEJDDLJPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGJEJDDLJPE*))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGJEJDDLJPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

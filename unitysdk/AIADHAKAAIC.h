#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIADHAKAAIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIADHAKAAIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E278880)
#define AIADHAKAAIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E278B50)
#define AIADHAKAAIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2784D0)
#define AIADHAKAAIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2784A0)
#define AIADHAKAAIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E278490)
#define AIADHAKAAIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E278640)
#define AIADHAKAAIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E278560)
#define AIADHAKAAIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E278550)
#define AIADHAKAAIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E278710)
#define AIADHAKAAIC_GIHLMAIBCFP_OFFSET UNITYSDK_OFFSET(0x1E278520)
#define AIADHAKAAIC_GPOBHDMPPHN_OFFSET UNITYSDK_OFFSET(0x1E278530)
#define AIADHAKAAIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E278450)
#define AIADHAKAAIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2789D0)
#define AIADHAKAAIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E278990)
#define AIADHAKAAIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E278540)
#define AIADHAKAAIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E278480)
#define AIADHAKAAIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E278740)
#define AIADHAKAAIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2787A0)

inline static constexpr unsigned int AIADHAKAAIC_TypeDefinitionIndex = 31157;

	class AIADHAKAAIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BFBCDJEFBLH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AIADHAKAAIC")->GetStaticField(0x328C0);
		}

		// static const ::System::Object CGBCGHFIIHM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIADHAKAAIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIADHAKAAIC*))((::PBYTE)hIl2Cpp + AIADHAKAAIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIADHAKAAIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AIADHAKAAIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIADHAKAAIC* Clone()
		{
			return ((::AIADHAKAAIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GIHLMAIBCFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_GIHLMAIBCFP_OFFSET))(this);
		}

		::System::Void GPOBHDMPPHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIADHAKAAIC_GPOBHDMPPHN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIADHAKAAIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIADHAKAAIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIADHAKAAIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIADHAKAAIC*))((::PBYTE)hIl2Cpp + AIADHAKAAIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIADHAKAAIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIADHAKAAIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIADHAKAAIC*))((::PBYTE)hIl2Cpp + AIADHAKAAIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIADHAKAAIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

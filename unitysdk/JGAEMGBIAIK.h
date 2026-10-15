#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAEMGBIAIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGAEMGBIAIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E733740)
#define JGAEMGBIAIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E733960)
#define JGAEMGBIAIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E733390)
#define JGAEMGBIAIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E733360)
#define JGAEMGBIAIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E733350)
#define JGAEMGBIAIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7334C0)
#define JGAEMGBIAIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7333F0)
#define JGAEMGBIAIK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7333E0)
#define JGAEMGBIAIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E733630)
#define JGAEMGBIAIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E733310)
#define JGAEMGBIAIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E733800)
#define JGAEMGBIAIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7337D0)
#define JGAEMGBIAIK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7333D0)
#define JGAEMGBIAIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E733340)
#define JGAEMGBIAIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E733660)
#define JGAEMGBIAIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7336C0)

inline static constexpr unsigned int JGAEMGBIAIK_TypeDefinitionIndex = 29405;

	class JGAEMGBIAIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JGAEMGBIAIK")->GetStaticField(0x603D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGAEMGBIAIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAEMGBIAIK*))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAEMGBIAIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JGAEMGBIAIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGAEMGBIAIK* Clone()
		{
			return ((::JGAEMGBIAIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGAEMGBIAIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGAEMGBIAIK*))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGAEMGBIAIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAEMGBIAIK*))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGAEMGBIAIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

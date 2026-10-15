#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPNIHNAJNLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPNIHNAJNLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E21C3D0)
#define DPNIHNAJNLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21C5F0)
#define DPNIHNAJNLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E21C020)
#define DPNIHNAJNLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E21BFF0)
#define DPNIHNAJNLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21BFE0)
#define DPNIHNAJNLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E21C150)
#define DPNIHNAJNLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E21C080)
#define DPNIHNAJNLJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E21C070)
#define DPNIHNAJNLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E21C2C0)
#define DPNIHNAJNLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E21BFA0)
#define DPNIHNAJNLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E21C490)
#define DPNIHNAJNLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E21C460)
#define DPNIHNAJNLJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E21C060)
#define DPNIHNAJNLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E21BFD0)
#define DPNIHNAJNLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E21C2F0)
#define DPNIHNAJNLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E21C350)

inline static constexpr unsigned int DPNIHNAJNLJ_TypeDefinitionIndex = 26747;

	class DPNIHNAJNLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DPNIHNAJNLJ")->GetStaticField(0x474B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPNIHNAJNLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPNIHNAJNLJ*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPNIHNAJNLJ* Clone()
		{
			return ((::DPNIHNAJNLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPNIHNAJNLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPNIHNAJNLJ*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPNIHNAJNLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPNIHNAJNLJ*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

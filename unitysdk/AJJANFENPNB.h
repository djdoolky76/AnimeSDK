#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJJANFENPNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJJANFENPNB_AFMLIDOECPL_OFFSET UNITYSDK_OFFSET(0x1E3C24C0)
#define AJJANFENPNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C2920)
#define AJJANFENPNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2C00)
#define AJJANFENPNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C2440)
#define AJJANFENPNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C2400)
#define AJJANFENPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C23F0)
#define AJJANFENPNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C2620)
#define AJJANFENPNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C2520)
#define AJJANFENPNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3C24B0)
#define AJJANFENPNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C2720)
#define AJJANFENPNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C23B0)
#define AJJANFENPNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C2A50)
#define AJJANFENPNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C2A00)
#define AJJANFENPNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3C24A0)
#define AJJANFENPNB_OOOGCOHKDPI_OFFSET UNITYSDK_OFFSET(0x1E3C24D0)
#define AJJANFENPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C23E0)
#define AJJANFENPNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C27D0)
#define AJJANFENPNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C2830)

inline static constexpr unsigned int AJJANFENPNB_TypeDefinitionIndex = 32028;

	class AJJANFENPNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* HKPJEKGBKGH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AJJANFENPNB")->GetStaticField(0x35050);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BHHANFONJPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJJANFENPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJANFENPNB*))((::PBYTE)hIl2Cpp + AJJANFENPNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJANFENPNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AJJANFENPNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJJANFENPNB* Clone()
		{
			return ((::AJJANFENPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJJANFENPNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* AFMLIDOECPL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_AFMLIDOECPL_OFFSET))(this);
		}

		::System::Void OOOGCOHKDPI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJJANFENPNB_OOOGCOHKDPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJJANFENPNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJJANFENPNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJJANFENPNB*))((::PBYTE)hIl2Cpp + AJJANFENPNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJJANFENPNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJJANFENPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJANFENPNB*))((::PBYTE)hIl2Cpp + AJJANFENPNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJJANFENPNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

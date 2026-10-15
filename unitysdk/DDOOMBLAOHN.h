#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEHGBKOBEF;
class DDOOMBLAOHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDOOMBLAOHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18CAE0)
#define DDOOMBLAOHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18CDB0)
#define DDOOMBLAOHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18C580)
#define DDOOMBLAOHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E18C530)
#define DDOOMBLAOHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18C520)
#define DDOOMBLAOHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18C7A0)
#define DDOOMBLAOHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18C620)
#define DDOOMBLAOHN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E18C5F0)
#define DDOOMBLAOHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18C920)
#define DDOOMBLAOHN_HGAGGIFCLAA_OFFSET UNITYSDK_OFFSET(0x1E18C610)
#define DDOOMBLAOHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E18C4E0)
#define DDOOMBLAOHN_JNHIJCFBJLE_OFFSET UNITYSDK_OFFSET(0x1E18C600)
#define DDOOMBLAOHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18CC20)
#define DDOOMBLAOHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18CBB0)
#define DDOOMBLAOHN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E18C5E0)
#define DDOOMBLAOHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E18C510)
#define DDOOMBLAOHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18C9A0)
#define DDOOMBLAOHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18CA00)

inline static constexpr unsigned int DDOOMBLAOHN_TypeDefinitionIndex = 32698;

	class DDOOMBLAOHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AGEHGBKOBEF* GIGAAAKGAHL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDOOMBLAOHN")->GetStaticField(0x2F7E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ODMJKLKBCOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDOOMBLAOHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDOOMBLAOHN*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDOOMBLAOHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDOOMBLAOHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDOOMBLAOHN* Clone()
		{
			return ((::DDOOMBLAOHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::AGEHGBKOBEF* JNHIJCFBJLE()
		{
			return ((::AGEHGBKOBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_JNHIJCFBJLE_OFFSET))(this);
		}

		::System::Void HGAGGIFCLAA(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_HGAGGIFCLAA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDOOMBLAOHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDOOMBLAOHN*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDOOMBLAOHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDOOMBLAOHN*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

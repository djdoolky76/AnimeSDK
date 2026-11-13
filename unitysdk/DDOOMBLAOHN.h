#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEHGBKOBEF;
class DDOOMBLAOHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDOOMBLAOHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF9FB40)
#define DDOOMBLAOHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9FE10)
#define DDOOMBLAOHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF9F5C0)
#define DDOOMBLAOHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF9F560)
#define DDOOMBLAOHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9F550)
#define DDOOMBLAOHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF9F7F0)
#define DDOOMBLAOHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF9F670)
#define DDOOMBLAOHN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FF9F660)
#define DDOOMBLAOHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF9F970)
#define DDOOMBLAOHN_HGAGGIFCLAA_OFFSET UNITYSDK_OFFSET(0x1FF9F640)
#define DDOOMBLAOHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF9F510)
#define DDOOMBLAOHN_JNHIJCFBJLE_OFFSET UNITYSDK_OFFSET(0x1FF9F630)
#define DDOOMBLAOHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF9FC80)
#define DDOOMBLAOHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF9FC10)
#define DDOOMBLAOHN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FF9F650)
#define DDOOMBLAOHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF9F540)
#define DDOOMBLAOHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF9FA00)
#define DDOOMBLAOHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF9FA60)

inline static constexpr unsigned int DDOOMBLAOHN_TypeDefinitionIndex = 33613;

	class DDOOMBLAOHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AGEHGBKOBEF* GIGAAAKGAHL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DDOOMBLAOHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDOOMBLAOHN*>**)UnitySDK::FromName("", "DDOOMBLAOHN")->GetStaticField(0x22F50);
		}

		// static const ::System::Object ODMJKLKBCOO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::DDOOMBLAOHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDOOMBLAOHN*>*(*)())((::PBYTE)hIl2Cpp + DDOOMBLAOHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDOOMBLAOHN* Clone()
		{
			return ((::DDOOMBLAOHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_CLONE_OFFSET))(this);
		}

		::AGEHGBKOBEF* JNHIJCFBJLE()
		{
			return ((::AGEHGBKOBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_JNHIJCFBJLE_OFFSET))(this);
		}

		::System::Void HGAGGIFCLAA(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_HGAGGIFCLAA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDOOMBLAOHN_FAEKBILGPCO_OFFSET))(this, a1);
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

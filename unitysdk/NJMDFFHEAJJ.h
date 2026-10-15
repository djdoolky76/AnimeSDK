#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMDFFHEAJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJMDFFHEAJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB4C7C0)
#define NJMDFFHEAJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4CA90)
#define NJMDFFHEAJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB4C410)
#define NJMDFFHEAJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB4C3E0)
#define NJMDFFHEAJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C3D0)
#define NJMDFFHEAJJ_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1EB4C460)
#define NJMDFFHEAJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB4C580)
#define NJMDFFHEAJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB4C4A0)
#define NJMDFFHEAJJ_FLNBPIICMDL_OFFSET UNITYSDK_OFFSET(0x1EB4C490)
#define NJMDFFHEAJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB4C650)
#define NJMDFFHEAJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB4C390)
#define NJMDFFHEAJJ_LPAJDOKIGHA_OFFSET UNITYSDK_OFFSET(0x1EB4C480)
#define NJMDFFHEAJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB4C910)
#define NJMDFFHEAJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB4C8D0)
#define NJMDFFHEAJJ_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1EB4C470)
#define NJMDFFHEAJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C3C0)
#define NJMDFFHEAJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB4C680)
#define NJMDFFHEAJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB4C6E0)

inline static constexpr unsigned int NJMDFFHEAJJ_TypeDefinitionIndex = 32324;

	class NJMDFFHEAJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		::System::UInt32 BANPOIIJGMG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NJMDFFHEAJJ")->GetStaticField(0x60670);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object LOPLGJAHIFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJMDFFHEAJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMDFFHEAJJ*))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJMDFFHEAJJ* Clone()
		{
			return ((::NJMDFFHEAJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 LPAJDOKIGHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_LPAJDOKIGHA_OFFSET))(this);
		}

		::System::Void FLNBPIICMDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_FLNBPIICMDL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJMDFFHEAJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJMDFFHEAJJ*))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJMDFFHEAJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMDFFHEAJJ*))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

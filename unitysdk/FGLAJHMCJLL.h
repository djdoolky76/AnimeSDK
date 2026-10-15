#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGLAJHMCJLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGLAJHMCJLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E381790)
#define FGLAJHMCJLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E381AB0)
#define FGLAJHMCJLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3813D0)
#define FGLAJHMCJLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E381390)
#define FGLAJHMCJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E381380)
#define FGLAJHMCJLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E381540)
#define FGLAJHMCJLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E381460)
#define FGLAJHMCJLL_FFLJICKHLFE_OFFSET UNITYSDK_OFFSET(0x1E381450)
#define FGLAJHMCJLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E381610)
#define FGLAJHMCJLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E381340)
#define FGLAJHMCJLL_MDKCCLPMCDA_OFFSET UNITYSDK_OFFSET(0x1E381430)
#define FGLAJHMCJLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E381930)
#define FGLAJHMCJLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3818F0)
#define FGLAJHMCJLL_OFNNENLMAJE_OFFSET UNITYSDK_OFFSET(0x1E381440)
#define FGLAJHMCJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E381370)
#define FGLAJHMCJLL_PPLNBPDMLFF_OFFSET UNITYSDK_OFFSET(0x1E381420)
#define FGLAJHMCJLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E381650)
#define FGLAJHMCJLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3816B0)

inline static constexpr unsigned int FGLAJHMCJLL_TypeDefinitionIndex = 26496;

	class FGLAJHMCJLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CLJHLNIBLAA; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 AHLHCMHEEKG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FGLAJHMCJLL")->GetStaticField(0x5EA40);
		}

		// static const ::System::Object AHDGKPLFKKF; // 0x0
		// static const ::System::Object MLFMEHJDOJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGLAJHMCJLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGLAJHMCJLL*))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGLAJHMCJLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FGLAJHMCJLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGLAJHMCJLL* Clone()
		{
			return ((::FGLAJHMCJLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_CLONE_OFFSET))(this);
		}

		::System::Int64 PPLNBPDMLFF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_PPLNBPDMLFF_OFFSET))(this);
		}

		::System::Void MDKCCLPMCDA(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_MDKCCLPMCDA_OFFSET))(this, a1);
		}

		::System::UInt32 OFNNENLMAJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_OFNNENLMAJE_OFFSET))(this);
		}

		::System::Void FFLJICKHLFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_FFLJICKHLFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGLAJHMCJLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGLAJHMCJLL*))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGLAJHMCJLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGLAJHMCJLL*))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGLAJHMCJLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

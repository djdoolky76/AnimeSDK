#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGLAJHMCJLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGLAJHMCJLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E354140)
#define FGLAJHMCJLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E354460)
#define FGLAJHMCJLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E353D80)
#define FGLAJHMCJLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E353D40)
#define FGLAJHMCJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E353D30)
#define FGLAJHMCJLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E353EF0)
#define FGLAJHMCJLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E353E10)
#define FGLAJHMCJLL_FFLJICKHLFE_OFFSET UNITYSDK_OFFSET(0x1E353E00)
#define FGLAJHMCJLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E353FC0)
#define FGLAJHMCJLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E353CF0)
#define FGLAJHMCJLL_MDKCCLPMCDA_OFFSET UNITYSDK_OFFSET(0x1E353DE0)
#define FGLAJHMCJLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3542E0)
#define FGLAJHMCJLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3542A0)
#define FGLAJHMCJLL_OFNNENLMAJE_OFFSET UNITYSDK_OFFSET(0x1E353DF0)
#define FGLAJHMCJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E353D20)
#define FGLAJHMCJLL_PPLNBPDMLFF_OFFSET UNITYSDK_OFFSET(0x1E353DD0)
#define FGLAJHMCJLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E354000)
#define FGLAJHMCJLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E354060)

inline static constexpr unsigned int FGLAJHMCJLL_TypeDefinitionIndex = 26496;

	class FGLAJHMCJLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 AHLHCMHEEKG; // 0x18
		::System::UInt32 CLJHLNIBLAA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FGLAJHMCJLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGLAJHMCJLL*>**)UnitySDK::FromName("", "FGLAJHMCJLL")->GetStaticField(0x55920);
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

		static ::Google::Protobuf::MessageParser_1<::FGLAJHMCJLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGLAJHMCJLL*>*(*)())((::PBYTE)hIl2Cpp + FGLAJHMCJLL_JJGHOBBFNJD_OFFSET))();
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

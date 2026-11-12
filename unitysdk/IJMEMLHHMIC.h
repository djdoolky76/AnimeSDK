#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABBOOKAODO;
class IJMEMLHHMIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJMEMLHHMIC_BBGEHKCINNM_OFFSET UNITYSDK_OFFSET(0x1F99DA00)
#define IJMEMLHHMIC_BIBNNGLPJKA_OFFSET UNITYSDK_OFFSET(0x1F99D9F0)
#define IJMEMLHHMIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F99DEC0)
#define IJMEMLHHMIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99E260)
#define IJMEMLHHMIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F99D950)
#define IJMEMLHHMIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F99D8C0)
#define IJMEMLHHMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99D8B0)
#define IJMEMLHHMIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F99DBB0)
#define IJMEMLHHMIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F99DA30)
#define IJMEMLHHMIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F99DA20)
#define IJMEMLHHMIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F99DD30)
#define IJMEMLHHMIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F99D870)
#define IJMEMLHHMIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F99E070)
#define IJMEMLHHMIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F99DF90)
#define IJMEMLHHMIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F99DA10)
#define IJMEMLHHMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F99D8A0)
#define IJMEMLHHMIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F99DD80)
#define IJMEMLHHMIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F99DDE0)

inline static constexpr unsigned int IJMEMLHHMIC_TypeDefinitionIndex = 33524;

	class IJMEMLHHMIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CABBOOKAODO* CMKBCNFAGIG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IJMEMLHHMIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJMEMLHHMIC*>**)UnitySDK::FromName("", "IJMEMLHHMIC")->GetStaticField(0x50DF0);
		}

		// static const ::System::Object CNLIOGJOBKB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJMEMLHHMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJMEMLHHMIC*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJMEMLHHMIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJMEMLHHMIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJMEMLHHMIC*>*(*)())((::PBYTE)hIl2Cpp + IJMEMLHHMIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJMEMLHHMIC* Clone()
		{
			return ((::IJMEMLHHMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_CLONE_OFFSET))(this);
		}

		::CABBOOKAODO* BIBNNGLPJKA()
		{
			return ((::CABBOOKAODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_BIBNNGLPJKA_OFFSET))(this);
		}

		::System::Void BBGEHKCINNM(::CABBOOKAODO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABBOOKAODO*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_BBGEHKCINNM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJMEMLHHMIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJMEMLHHMIC*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJMEMLHHMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJMEMLHHMIC*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJMEMLHHMIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

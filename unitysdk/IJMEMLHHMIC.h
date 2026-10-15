#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABBOOKAODO;
class IJMEMLHHMIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJMEMLHHMIC_BBGEHKCINNM_OFFSET UNITYSDK_OFFSET(0x1E697D40)
#define IJMEMLHHMIC_BIBNNGLPJKA_OFFSET UNITYSDK_OFFSET(0x1E697D30)
#define IJMEMLHHMIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E698200)
#define IJMEMLHHMIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6985A0)
#define IJMEMLHHMIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E697C90)
#define IJMEMLHHMIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E697C00)
#define IJMEMLHHMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E697BF0)
#define IJMEMLHHMIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E697EF0)
#define IJMEMLHHMIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E697D70)
#define IJMEMLHHMIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E697D60)
#define IJMEMLHHMIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E698070)
#define IJMEMLHHMIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E697BB0)
#define IJMEMLHHMIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6983B0)
#define IJMEMLHHMIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6982D0)
#define IJMEMLHHMIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E697D50)
#define IJMEMLHHMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E697BE0)
#define IJMEMLHHMIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6980C0)
#define IJMEMLHHMIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E698120)

inline static constexpr unsigned int IJMEMLHHMIC_TypeDefinitionIndex = 32609;

	class IJMEMLHHMIC : public ::System::Object
	{
	public:
		::CABBOOKAODO* CMKBCNFAGIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJMEMLHHMIC")->GetStaticField(0x52E50);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJMEMLHHMIC_JJGHOBBFNJD_OFFSET))();
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

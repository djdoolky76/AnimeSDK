#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAEINBAOLLG;
class PPONNIHFJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAEINBAOLLG_ACKKJFCOGNA_OFFSET UNITYSDK_OFFSET(0x1E057A60)
#define CAEINBAOLLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E057EF0)
#define CAEINBAOLLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E058220)
#define CAEINBAOLLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0579A0)
#define CAEINBAOLLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E057920)
#define CAEINBAOLLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E057910)
#define CAEINBAOLLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E057BF0)
#define CAEINBAOLLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E057A70)
#define CAEINBAOLLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E057A40)
#define CAEINBAOLLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E057D70)
#define CAEINBAOLLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0578D0)
#define CAEINBAOLLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E058060)
#define CAEINBAOLLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E057FC0)
#define CAEINBAOLLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E057A30)
#define CAEINBAOLLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E057900)
#define CAEINBAOLLG_POEAMHIMFHO_OFFSET UNITYSDK_OFFSET(0x1E057A50)
#define CAEINBAOLLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E057DB0)
#define CAEINBAOLLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E057E10)

inline static constexpr unsigned int CAEINBAOLLG_TypeDefinitionIndex = 35020;

	class CAEINBAOLLG : public ::System::Object
	{
	public:
		::PPONNIHFJAP* LFHEKFOHLLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CAEINBAOLLG")->GetStaticField(0x56350);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DBCNCMIDKLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAEINBAOLLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAEINBAOLLG*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAEINBAOLLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CAEINBAOLLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAEINBAOLLG* Clone()
		{
			return ((::CAEINBAOLLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAEINBAOLLG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::PPONNIHFJAP* POEAMHIMFHO()
		{
			return ((::PPONNIHFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_POEAMHIMFHO_OFFSET))(this);
		}

		::System::Void ACKKJFCOGNA(::PPONNIHFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONNIHFJAP*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_ACKKJFCOGNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAEINBAOLLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAEINBAOLLG*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAEINBAOLLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAEINBAOLLG*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAEINBAOLLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

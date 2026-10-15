#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHDJOBEDAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGHDJOBEDAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47BC80)
#define GGHDJOBEDAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47BF50)
#define GGHDJOBEDAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47B8D0)
#define GGHDJOBEDAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47B8A0)
#define GGHDJOBEDAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47B890)
#define GGHDJOBEDAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47BA40)
#define GGHDJOBEDAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47B960)
#define GGHDJOBEDAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E47B950)
#define GGHDJOBEDAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47BB10)
#define GGHDJOBEDAF_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1E47B920)
#define GGHDJOBEDAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47B850)
#define GGHDJOBEDAF_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1E47B930)
#define GGHDJOBEDAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47BDD0)
#define GGHDJOBEDAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47BD90)
#define GGHDJOBEDAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E47B940)
#define GGHDJOBEDAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47B880)
#define GGHDJOBEDAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47BB40)
#define GGHDJOBEDAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47BBA0)

inline static constexpr unsigned int GGHDJOBEDAF_TypeDefinitionIndex = 30938;

	class GGHDJOBEDAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLFEKHCLHCE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GGHDJOBEDAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGHDJOBEDAF*>**)UnitySDK::FromName("", "GGHDJOBEDAF")->GetStaticField(0x15C50);
		}

		// static const ::System::Object CPHNGFPDBPG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGHDJOBEDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHDJOBEDAF*))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHDJOBEDAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGHDJOBEDAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGHDJOBEDAF*>*(*)())((::PBYTE)hIl2Cpp + GGHDJOBEDAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGHDJOBEDAF* Clone()
		{
			return ((::GGHDJOBEDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGHDJOBEDAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGHDJOBEDAF*))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGHDJOBEDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHDJOBEDAF*))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGHDJOBEDAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

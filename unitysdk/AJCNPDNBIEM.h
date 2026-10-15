#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCNPDNBIEM;
class JGKNADEDNHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJCNPDNBIEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3BE430)
#define AJCNPDNBIEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BE860)
#define AJCNPDNBIEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3BDEC0)
#define AJCNPDNBIEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3BDE30)
#define AJCNPDNBIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BDE20)
#define AJCNPDNBIEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3BE120)
#define AJCNPDNBIEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3BDFA0)
#define AJCNPDNBIEM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3BDF90)
#define AJCNPDNBIEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3BE2A0)
#define AJCNPDNBIEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3BDDE0)
#define AJCNPDNBIEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BE630)
#define AJCNPDNBIEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BE500)
#define AJCNPDNBIEM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3BDF80)
#define AJCNPDNBIEM_OKKNJMNDGJE_OFFSET UNITYSDK_OFFSET(0x1E3BDF70)
#define AJCNPDNBIEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3BDE10)
#define AJCNPDNBIEM_PGBEIGNMLJK_OFFSET UNITYSDK_OFFSET(0x1E3BDF60)
#define AJCNPDNBIEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BE2F0)
#define AJCNPDNBIEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3BE350)

inline static constexpr unsigned int AJCNPDNBIEM_TypeDefinitionIndex = 31147;

	class AJCNPDNBIEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JGKNADEDNHB* PIEDKCGGKEB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AJCNPDNBIEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJCNPDNBIEM*>**)UnitySDK::FromName("", "AJCNPDNBIEM")->GetStaticField(0x34990);
		}

		// static const ::System::Object NDMEKNKNHIO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJCNPDNBIEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJCNPDNBIEM*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJCNPDNBIEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJCNPDNBIEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJCNPDNBIEM*>*(*)())((::PBYTE)hIl2Cpp + AJCNPDNBIEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJCNPDNBIEM* Clone()
		{
			return ((::AJCNPDNBIEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_CLONE_OFFSET))(this);
		}

		::JGKNADEDNHB* PGBEIGNMLJK()
		{
			return ((::JGKNADEDNHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_PGBEIGNMLJK_OFFSET))(this);
		}

		::System::Void OKKNJMNDGJE(::JGKNADEDNHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGKNADEDNHB*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_OKKNJMNDGJE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJCNPDNBIEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJCNPDNBIEM*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJCNPDNBIEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJCNPDNBIEM*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJCNPDNBIEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

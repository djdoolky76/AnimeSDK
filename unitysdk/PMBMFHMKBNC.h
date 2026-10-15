#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMBMFHMKBNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMBMFHMKBNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7B6B0)
#define PMBMFHMKBNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B8D0)
#define PMBMFHMKBNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7B300)
#define PMBMFHMKBNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7B2D0)
#define PMBMFHMKBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B2C0)
#define PMBMFHMKBNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7B430)
#define PMBMFHMKBNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7B360)
#define PMBMFHMKBNC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF7B350)
#define PMBMFHMKBNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7B5A0)
#define PMBMFHMKBNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF7B280)
#define PMBMFHMKBNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7B770)
#define PMBMFHMKBNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7B740)
#define PMBMFHMKBNC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF7B340)
#define PMBMFHMKBNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B2B0)
#define PMBMFHMKBNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7B5D0)
#define PMBMFHMKBNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7B630)

inline static constexpr unsigned int PMBMFHMKBNC_TypeDefinitionIndex = 30733;

	class PMBMFHMKBNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PMBMFHMKBNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMBMFHMKBNC*>**)UnitySDK::FromName("", "PMBMFHMKBNC")->GetStaticField(0x3EF10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMBMFHMKBNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMBMFHMKBNC*))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBMFHMKBNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMBMFHMKBNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMBMFHMKBNC*>*(*)())((::PBYTE)hIl2Cpp + PMBMFHMKBNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMBMFHMKBNC* Clone()
		{
			return ((::PMBMFHMKBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMBMFHMKBNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMBMFHMKBNC*))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMBMFHMKBNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMBMFHMKBNC*))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMBMFHMKBNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

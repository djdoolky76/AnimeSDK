#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIOMOCFOMOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIOMOCFOMOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA83410)
#define JIOMOCFOMOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA83630)
#define JIOMOCFOMOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA83060)
#define JIOMOCFOMOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA83030)
#define JIOMOCFOMOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA83020)
#define JIOMOCFOMOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA83190)
#define JIOMOCFOMOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA830C0)
#define JIOMOCFOMOA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA830B0)
#define JIOMOCFOMOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA83300)
#define JIOMOCFOMOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA82FE0)
#define JIOMOCFOMOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA834D0)
#define JIOMOCFOMOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA834A0)
#define JIOMOCFOMOA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA830A0)
#define JIOMOCFOMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA83010)
#define JIOMOCFOMOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA83330)
#define JIOMOCFOMOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA83390)

inline static constexpr unsigned int JIOMOCFOMOA_TypeDefinitionIndex = 30125;

	class JIOMOCFOMOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JIOMOCFOMOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIOMOCFOMOA*>**)UnitySDK::FromName("", "JIOMOCFOMOA")->GetStaticField(0x4CF90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIOMOCFOMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIOMOCFOMOA*))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIOMOCFOMOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIOMOCFOMOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIOMOCFOMOA*>*(*)())((::PBYTE)hIl2Cpp + JIOMOCFOMOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIOMOCFOMOA* Clone()
		{
			return ((::JIOMOCFOMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIOMOCFOMOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIOMOCFOMOA*))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIOMOCFOMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIOMOCFOMOA*))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIOMOCFOMOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAOFKEIIEPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAOFKEIIEPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D1130)
#define LAOFKEIIEPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D1350)
#define LAOFKEIIEPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D0D80)
#define LAOFKEIIEPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D0D50)
#define LAOFKEIIEPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D0D40)
#define LAOFKEIIEPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D0EB0)
#define LAOFKEIIEPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D0DE0)
#define LAOFKEIIEPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8D0DD0)
#define LAOFKEIIEPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D1020)
#define LAOFKEIIEPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D0D00)
#define LAOFKEIIEPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D11F0)
#define LAOFKEIIEPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D11C0)
#define LAOFKEIIEPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8D0DC0)
#define LAOFKEIIEPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D0D30)
#define LAOFKEIIEPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D1050)
#define LAOFKEIIEPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D10B0)

inline static constexpr unsigned int LAOFKEIIEPF_TypeDefinitionIndex = 27575;

	class LAOFKEIIEPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LAOFKEIIEPF")->GetStaticField(0x2F3C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAOFKEIIEPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAOFKEIIEPF*))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOFKEIIEPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LAOFKEIIEPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAOFKEIIEPF* Clone()
		{
			return ((::LAOFKEIIEPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAOFKEIIEPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAOFKEIIEPF*))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAOFKEIIEPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAOFKEIIEPF*))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAOFKEIIEPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

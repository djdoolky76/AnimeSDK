#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOAAPIDOIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBOAAPIDOIC_BCBJJLDEAHP_OFFSET UNITYSDK_OFFSET(0x1E6FBF00)
#define JBOAAPIDOIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FC290)
#define JBOAAPIDOIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC560)
#define JBOAAPIDOIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FBE90)
#define JBOAAPIDOIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FBE60)
#define JBOAAPIDOIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FBE50)
#define JBOAAPIDOIC_DPHOBNLEKJF_OFFSET UNITYSDK_OFFSET(0x1E6FBF20)
#define JBOAAPIDOIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FC050)
#define JBOAAPIDOIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FBF40)
#define JBOAAPIDOIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FC120)
#define JBOAAPIDOIC_IIEOOHMAHMG_OFFSET UNITYSDK_OFFSET(0x1E6FBF30)
#define JBOAAPIDOIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6FBDE0)
#define JBOAAPIDOIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FC3E0)
#define JBOAAPIDOIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FC3A0)
#define JBOAAPIDOIC_MOODENPGHJO_OFFSET UNITYSDK_OFFSET(0x1E6FBF10)
#define JBOAAPIDOIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FBE40)
#define JBOAAPIDOIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FC150)
#define JBOAAPIDOIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FC1B0)

inline static constexpr unsigned int JBOAAPIDOIC_TypeDefinitionIndex = 32513;

	class JBOAAPIDOIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLJFIOLOPLO; // 0x18
		::System::UInt32 KPMCIEHHEDO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JBOAAPIDOIC")->GetStaticField(0x5D510);
		}

		// static const ::System::Object IJODFOAGDHF; // 0x0
		// static const ::System::Object NOMKINGJCGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBOAAPIDOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOAAPIDOIC*))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBOAAPIDOIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JBOAAPIDOIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBOAAPIDOIC* Clone()
		{
			return ((::JBOAAPIDOIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCBJJLDEAHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_BCBJJLDEAHP_OFFSET))(this);
		}

		::System::Void MOODENPGHJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_MOODENPGHJO_OFFSET))(this, a1);
		}

		::System::UInt32 DPHOBNLEKJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_DPHOBNLEKJF_OFFSET))(this);
		}

		::System::Void IIEOOHMAHMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_IIEOOHMAHMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBOAAPIDOIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBOAAPIDOIC*))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBOAAPIDOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOAAPIDOIC*))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBOAAPIDOIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

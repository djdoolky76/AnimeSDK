#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FODAGGODIJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FODAGGODIJM_ALHNMNOOHJO_OFFSET UNITYSDK_OFFSET(0x1E3F7AF0)
#define FODAGGODIJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F7E50)
#define FODAGGODIJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F8120)
#define FODAGGODIJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F7A50)
#define FODAGGODIJM_CPPDBEGDKIC_OFFSET UNITYSDK_OFFSET(0x1E3F7AE0)
#define FODAGGODIJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F7A20)
#define FODAGGODIJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7A10)
#define FODAGGODIJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F7C10)
#define FODAGGODIJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F7B00)
#define FODAGGODIJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F7CE0)
#define FODAGGODIJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F79A0)
#define FODAGGODIJM_KDGOJNCOIHI_OFFSET UNITYSDK_OFFSET(0x1E3F7AC0)
#define FODAGGODIJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F7FA0)
#define FODAGGODIJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F7F60)
#define FODAGGODIJM_MNLNOFNJPLH_OFFSET UNITYSDK_OFFSET(0x1E3F7AD0)
#define FODAGGODIJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7A00)
#define FODAGGODIJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F7D10)
#define FODAGGODIJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F7D70)

inline static constexpr unsigned int FODAGGODIJM_TypeDefinitionIndex = 30737;

	class FODAGGODIJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KAIJDAAEEFJ; // 0x18
		::System::UInt32 LPNGIMCHLJP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FODAGGODIJM")->GetStaticField(0x65C80);
		}

		// static const ::System::Object DNBIAMLIJNA; // 0x0
		// static const ::System::Object PAPFLAJDAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FODAGGODIJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FODAGGODIJM*))((::PBYTE)hIl2Cpp + FODAGGODIJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FODAGGODIJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FODAGGODIJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FODAGGODIJM* Clone()
		{
			return ((::FODAGGODIJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDGOJNCOIHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_KDGOJNCOIHI_OFFSET))(this);
		}

		::System::Void MNLNOFNJPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FODAGGODIJM_MNLNOFNJPLH_OFFSET))(this, a1);
		}

		::System::UInt32 CPPDBEGDKIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_CPPDBEGDKIC_OFFSET))(this);
		}

		::System::Void ALHNMNOOHJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FODAGGODIJM_ALHNMNOOHJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FODAGGODIJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FODAGGODIJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FODAGGODIJM*))((::PBYTE)hIl2Cpp + FODAGGODIJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FODAGGODIJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FODAGGODIJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FODAGGODIJM*))((::PBYTE)hIl2Cpp + FODAGGODIJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FODAGGODIJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

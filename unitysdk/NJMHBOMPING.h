#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
class NJMHBOMPING;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJMHBOMPING_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB4DA50)
#define NJMHBOMPING_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4DD70)
#define NJMHBOMPING_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB4D4A0)
#define NJMHBOMPING_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB4D430)
#define NJMHBOMPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4D420)
#define NJMHBOMPING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB4D6E0)
#define NJMHBOMPING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB4D560)
#define NJMHBOMPING_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB4D530)
#define NJMHBOMPING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB4D860)
#define NJMHBOMPING_IGFHAGAIFHH_OFFSET UNITYSDK_OFFSET(0x1EB4D540)
#define NJMHBOMPING_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB4D3E0)
#define NJMHBOMPING_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB4DBB0)
#define NJMHBOMPING_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB4DB20)
#define NJMHBOMPING_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB4D520)
#define NJMHBOMPING_PACMGJMGOHC_OFFSET UNITYSDK_OFFSET(0x1EB4D550)
#define NJMHBOMPING_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB4D410)
#define NJMHBOMPING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB4D910)
#define NJMHBOMPING_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB4D970)

inline static constexpr unsigned int NJMHBOMPING_TypeDefinitionIndex = 29785;

	class NJMHBOMPING : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BGOMIHEFHPA* NNCHMJDCIAH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NJMHBOMPING")->GetStaticField(0x65790);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JONFNCINDNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJMHBOMPING* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMHBOMPING*))((::PBYTE)hIl2Cpp + NJMHBOMPING_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMHBOMPING_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NJMHBOMPING_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJMHBOMPING* Clone()
		{
			return ((::NJMHBOMPING*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJMHBOMPING_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BGOMIHEFHPA* IGFHAGAIFHH()
		{
			return ((::BGOMIHEFHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_IGFHAGAIFHH_OFFSET))(this);
		}

		::System::Void PACMGJMGOHC(::BGOMIHEFHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGOMIHEFHPA*))((::PBYTE)hIl2Cpp + NJMHBOMPING_PACMGJMGOHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJMHBOMPING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJMHBOMPING* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJMHBOMPING*))((::PBYTE)hIl2Cpp + NJMHBOMPING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJMHBOMPING_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJMHBOMPING* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMHBOMPING*))((::PBYTE)hIl2Cpp + NJMHBOMPING_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJMHBOMPING_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

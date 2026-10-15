#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBECKAMICJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBECKAMICJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BF150)
#define KBECKAMICJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF420)
#define KBECKAMICJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7BEDA0)
#define KBECKAMICJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BED70)
#define KBECKAMICJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BED60)
#define KBECKAMICJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7BEF10)
#define KBECKAMICJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7BEE30)
#define KBECKAMICJF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7BEE20)
#define KBECKAMICJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BEFE0)
#define KBECKAMICJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BED20)
#define KBECKAMICJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BF2A0)
#define KBECKAMICJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BF260)
#define KBECKAMICJF_MPEEDLNBONK_OFFSET UNITYSDK_OFFSET(0x1E7BEE00)
#define KBECKAMICJF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7BEE10)
#define KBECKAMICJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7BED50)
#define KBECKAMICJF_PGLNJEILMKB_OFFSET UNITYSDK_OFFSET(0x1E7BEDF0)
#define KBECKAMICJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BF010)
#define KBECKAMICJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BF070)

inline static constexpr unsigned int KBECKAMICJF_TypeDefinitionIndex = 30550;

	class KBECKAMICJF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NFGNEEGBNIF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KBECKAMICJF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBECKAMICJF*>**)UnitySDK::FromName("", "KBECKAMICJF")->GetStaticField(0xDF00);
		}

		// static const ::System::Object KPGNEGMDKCI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBECKAMICJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBECKAMICJF*))((::PBYTE)hIl2Cpp + KBECKAMICJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBECKAMICJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBECKAMICJF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBECKAMICJF*>*(*)())((::PBYTE)hIl2Cpp + KBECKAMICJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBECKAMICJF* Clone()
		{
			return ((::KBECKAMICJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGLNJEILMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_PGLNJEILMKB_OFFSET))(this);
		}

		::System::Void MPEEDLNBONK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBECKAMICJF_MPEEDLNBONK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBECKAMICJF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBECKAMICJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBECKAMICJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBECKAMICJF*))((::PBYTE)hIl2Cpp + KBECKAMICJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBECKAMICJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBECKAMICJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBECKAMICJF*))((::PBYTE)hIl2Cpp + KBECKAMICJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBECKAMICJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

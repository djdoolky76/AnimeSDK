#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCFLLCPLMHF;
class JJEFLBCLBFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCFLLCPLMHF_AIMFOPOGNMN_OFFSET UNITYSDK_OFFSET(0x1F831C00)
#define HCFLLCPLMHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8321A0)
#define HCFLLCPLMHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F832420)
#define HCFLLCPLMHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F831B60)
#define HCFLLCPLMHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F831AE0)
#define HCFLLCPLMHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F831AD0)
#define HCFLLCPLMHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F831D80)
#define HCFLLCPLMHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F831C10)
#define HCFLLCPLMHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F832050)
#define HCFLLCPLMHF_JEBPFHPGDON_OFFSET UNITYSDK_OFFSET(0x1F831BF0)
#define HCFLLCPLMHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F831A90)
#define HCFLLCPLMHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8322A0)
#define HCFLLCPLMHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F832200)
#define HCFLLCPLMHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F831AC0)
#define HCFLLCPLMHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8320B0)
#define HCFLLCPLMHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F832110)

inline static constexpr unsigned int HCFLLCPLMHF_TypeDefinitionIndex = 31384;

	class HCFLLCPLMHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JJEFLBCLBFN* ONKMMNBOFHL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HCFLLCPLMHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCFLLCPLMHF*>**)UnitySDK::FromName("", "HCFLLCPLMHF")->GetStaticField(0x25050);
		}

		// static const ::System::Object EKOEIMNIIMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCFLLCPLMHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLLCPLMHF*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCFLLCPLMHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCFLLCPLMHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCFLLCPLMHF*>*(*)())((::PBYTE)hIl2Cpp + HCFLLCPLMHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCFLLCPLMHF* Clone()
		{
			return ((::HCFLLCPLMHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_CLONE_OFFSET))(this);
		}

		::JJEFLBCLBFN* JEBPFHPGDON()
		{
			return ((::JJEFLBCLBFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_JEBPFHPGDON_OFFSET))(this);
		}

		::System::Void AIMFOPOGNMN(::JJEFLBCLBFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJEFLBCLBFN*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_AIMFOPOGNMN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCFLLCPLMHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCFLLCPLMHF*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCFLLCPLMHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLLCPLMHF*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCFLLCPLMHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

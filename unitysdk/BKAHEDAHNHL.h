#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKAHEDAHNHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKAHEDAHNHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F16F850)
#define BKAHEDAHNHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F16FB20)
#define BKAHEDAHNHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F16F4A0)
#define BKAHEDAHNHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F16F470)
#define BKAHEDAHNHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F16F460)
#define BKAHEDAHNHL_DCBGNJCLMPF_OFFSET UNITYSDK_OFFSET(0x1F16F500)
#define BKAHEDAHNHL_EPOCFHFKPFP_OFFSET UNITYSDK_OFFSET(0x1F16F520)
#define BKAHEDAHNHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F16F610)
#define BKAHEDAHNHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F16F530)
#define BKAHEDAHNHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F16F6E0)
#define BKAHEDAHNHL_GGKMPPEPAAG_OFFSET UNITYSDK_OFFSET(0x1F16F510)
#define BKAHEDAHNHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F16F420)
#define BKAHEDAHNHL_LMMJLJJDMGD_OFFSET UNITYSDK_OFFSET(0x1F16F4F0)
#define BKAHEDAHNHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F16F9A0)
#define BKAHEDAHNHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F16F960)
#define BKAHEDAHNHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F16F450)
#define BKAHEDAHNHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F16F710)
#define BKAHEDAHNHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F16F770)

inline static constexpr unsigned int BKAHEDAHNHL_TypeDefinitionIndex = 31792;

	class BKAHEDAHNHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EFLHLEJELBG; // 0x18
		::System::UInt32 LHJILAOOJMF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BKAHEDAHNHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKAHEDAHNHL*>**)UnitySDK::FromName("", "BKAHEDAHNHL")->GetStaticField(0x13FE0);
		}

		// static const ::System::Object EPPBJAMAMGC; // 0x0
		// static const ::System::Object BJCGEAIJBFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKAHEDAHNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKAHEDAHNHL*))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKAHEDAHNHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKAHEDAHNHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKAHEDAHNHL*>*(*)())((::PBYTE)hIl2Cpp + BKAHEDAHNHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKAHEDAHNHL* Clone()
		{
			return ((::BKAHEDAHNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 LMMJLJJDMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_LMMJLJJDMGD_OFFSET))(this);
		}

		::System::Void DCBGNJCLMPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_DCBGNJCLMPF_OFFSET))(this, a1);
		}

		::System::UInt32 GGKMPPEPAAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_GGKMPPEPAAG_OFFSET))(this);
		}

		::System::Void EPOCFHFKPFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_EPOCFHFKPFP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKAHEDAHNHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKAHEDAHNHL*))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKAHEDAHNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKAHEDAHNHL*))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKAHEDAHNHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/System/Object.h"
class AEGCDIIGMHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEGCDIIGMHF_BJNBLLGKIEB_OFFSET UNITYSDK_OFFSET(0x1DDBE0B0)
#define AEGCDIIGMHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBE430)
#define AEGCDIIGMHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE690)
#define AEGCDIIGMHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBE060)
#define AEGCDIIGMHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBE030)
#define AEGCDIIGMHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE020)
#define AEGCDIIGMHF_EMAAFBHHJBI_OFFSET UNITYSDK_OFFSET(0x1DDBE0A0)
#define AEGCDIIGMHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBE190)
#define AEGCDIIGMHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBE0C0)
#define AEGCDIIGMHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBE300)
#define AEGCDIIGMHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBDFE0)
#define AEGCDIIGMHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBE530)
#define AEGCDIIGMHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBE500)
#define AEGCDIIGMHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE010)
#define AEGCDIIGMHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBE330)
#define AEGCDIIGMHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBE390)

inline static constexpr unsigned int AEGCDIIGMHF_TypeDefinitionIndex = 34227;

	class AEGCDIIGMHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CBPDACMBHGL AOCFCLGNENH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AEGCDIIGMHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEGCDIIGMHF*>**)UnitySDK::FromName("", "AEGCDIIGMHF")->GetStaticField(0x33E10);
		}

		// static const ::System::Object JOFLFBJMGKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEGCDIIGMHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEGCDIIGMHF*))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGCDIIGMHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEGCDIIGMHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEGCDIIGMHF*>*(*)())((::PBYTE)hIl2Cpp + AEGCDIIGMHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEGCDIIGMHF* Clone()
		{
			return ((::AEGCDIIGMHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_CLONE_OFFSET))(this);
		}

		::CBPDACMBHGL EMAAFBHHJBI()
		{
			return ((::CBPDACMBHGL(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_EMAAFBHHJBI_OFFSET))(this);
		}

		::System::Void BJNBLLGKIEB(::CBPDACMBHGL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_BJNBLLGKIEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEGCDIIGMHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEGCDIIGMHF*))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEGCDIIGMHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEGCDIIGMHF*))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEGCDIIGMHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

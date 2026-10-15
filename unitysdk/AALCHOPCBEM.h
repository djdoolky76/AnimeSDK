#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AALCHOPCBEM;
class CABCPFKAOPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AALCHOPCBEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD90C00)
#define AALCHOPCBEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD90FA0)
#define AALCHOPCBEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD905C0)
#define AALCHOPCBEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD90530)
#define AALCHOPCBEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD90520)
#define AALCHOPCBEM_DENONFMPGCP_OFFSET UNITYSDK_OFFSET(0x1DD90660)
#define AALCHOPCBEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD907F0)
#define AALCHOPCBEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD90680)
#define AALCHOPCBEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD90AC0)
#define AALCHOPCBEM_JEEADKJKEFI_OFFSET UNITYSDK_OFFSET(0x1DD90670)
#define AALCHOPCBEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD904E0)
#define AALCHOPCBEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD90D80)
#define AALCHOPCBEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD90C60)
#define AALCHOPCBEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD90510)
#define AALCHOPCBEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD90B10)
#define AALCHOPCBEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD90B70)

inline static constexpr unsigned int AALCHOPCBEM_TypeDefinitionIndex = 27059;

	class AALCHOPCBEM : public ::System::Object
	{
	public:
		::CABCPFKAOPP* DENODEMLGKN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AALCHOPCBEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AALCHOPCBEM*>**)UnitySDK::FromName("", "AALCHOPCBEM")->GetStaticField(0x2EDB0);
		}

		// static const ::System::Object HEGJOINAIFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AALCHOPCBEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AALCHOPCBEM*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AALCHOPCBEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AALCHOPCBEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AALCHOPCBEM*>*(*)())((::PBYTE)hIl2Cpp + AALCHOPCBEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AALCHOPCBEM* Clone()
		{
			return ((::AALCHOPCBEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_CLONE_OFFSET))(this);
		}

		::CABCPFKAOPP* DENONFMPGCP()
		{
			return ((::CABCPFKAOPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_DENONFMPGCP_OFFSET))(this);
		}

		::System::Void JEEADKJKEFI(::CABCPFKAOPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABCPFKAOPP*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_JEEADKJKEFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AALCHOPCBEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AALCHOPCBEM*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AALCHOPCBEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AALCHOPCBEM*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AALCHOPCBEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

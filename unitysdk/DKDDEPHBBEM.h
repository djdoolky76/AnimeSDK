#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKDDEPHBBEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKDDEPHBBEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4B0520)
#define DKDDEPHBBEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4B07F0)
#define DKDDEPHBBEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4B0170)
#define DKDDEPHBBEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4B0140)
#define DKDDEPHBBEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B0130)
#define DKDDEPHBBEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4B02E0)
#define DKDDEPHBBEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4B0200)
#define DKDDEPHBBEM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F4B01F0)
#define DKDDEPHBBEM_GDPMEINFOOP_OFFSET UNITYSDK_OFFSET(0x1F4B01D0)
#define DKDDEPHBBEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4B03B0)
#define DKDDEPHBBEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4B00F0)
#define DKDDEPHBBEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4B0670)
#define DKDDEPHBBEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4B0630)
#define DKDDEPHBBEM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F4B01E0)
#define DKDDEPHBBEM_OCEGDJPPGOA_OFFSET UNITYSDK_OFFSET(0x1F4B01C0)
#define DKDDEPHBBEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4B0120)
#define DKDDEPHBBEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4B03E0)
#define DKDDEPHBBEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4B0440)

inline static constexpr unsigned int DKDDEPHBBEM_TypeDefinitionIndex = 31966;

	class DKDDEPHBBEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 OFNPDNJPFMI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DKDDEPHBBEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKDDEPHBBEM*>**)UnitySDK::FromName("", "DKDDEPHBBEM")->GetStaticField(0x35AF0);
		}

		// static const ::System::Object NICBEDFOJKF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKDDEPHBBEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKDDEPHBBEM*))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKDDEPHBBEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKDDEPHBBEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKDDEPHBBEM*>*(*)())((::PBYTE)hIl2Cpp + DKDDEPHBBEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKDDEPHBBEM* Clone()
		{
			return ((::DKDDEPHBBEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCEGDJPPGOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_OCEGDJPPGOA_OFFSET))(this);
		}

		::System::Void GDPMEINFOOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_GDPMEINFOOP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKDDEPHBBEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKDDEPHBBEM*))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKDDEPHBBEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKDDEPHBBEM*))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKDDEPHBBEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

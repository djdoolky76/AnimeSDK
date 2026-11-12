#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class LGKMBABPKPJ;
class OENDLKLJHPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGKMBABPKPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC76180)
#define LGKMBABPKPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC76570)
#define LGKMBABPKPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC75A50)
#define LGKMBABPKPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC75990)
#define LGKMBABPKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC75980)
#define LGKMBABPKPJ_DCDPEPKAPJL_OFFSET UNITYSDK_OFFSET(0x1FC75B20)
#define LGKMBABPKPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC75D90)
#define LGKMBABPKPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC75B60)
#define LGKMBABPKPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC75FC0)
#define LGKMBABPKPJ_IGBBKPENBMC_OFFSET UNITYSDK_OFFSET(0x1FC75B50)
#define LGKMBABPKPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC75940)
#define LGKMBABPKPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC76360)
#define LGKMBABPKPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC76210)
#define LGKMBABPKPJ_NANIBACJAIP_OFFSET UNITYSDK_OFFSET(0x1FC75B40)
#define LGKMBABPKPJ_OCHKDCEGOPP_OFFSET UNITYSDK_OFFSET(0x1FC75B30)
#define LGKMBABPKPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC75970)
#define LGKMBABPKPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC76040)
#define LGKMBABPKPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC760A0)

inline static constexpr unsigned int LGKMBABPKPJ_TypeDefinitionIndex = 35273;

	class LGKMBABPKPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ENHOPAHGCMA* PAHHDMPBJNA; // 0x18
		::OENDLKLJHPF* PHBNBOCMCEB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LGKMBABPKPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGKMBABPKPJ*>**)UnitySDK::FromName("", "LGKMBABPKPJ")->GetStaticField(0x32AB0);
		}

		// static const ::System::Object ICADKMJGPAF; // 0x0
		// static const ::System::Object GOHNIEONGJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGKMBABPKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGKMBABPKPJ*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKMBABPKPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGKMBABPKPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGKMBABPKPJ*>*(*)())((::PBYTE)hIl2Cpp + LGKMBABPKPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGKMBABPKPJ* Clone()
		{
			return ((::LGKMBABPKPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* DCDPEPKAPJL()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_DCDPEPKAPJL_OFFSET))(this);
		}

		::System::Void OCHKDCEGOPP(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_OCHKDCEGOPP_OFFSET))(this, a1);
		}

		::OENDLKLJHPF* NANIBACJAIP()
		{
			return ((::OENDLKLJHPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_NANIBACJAIP_OFFSET))(this);
		}

		::System::Void IGBBKPENBMC(::OENDLKLJHPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OENDLKLJHPF*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_IGBBKPENBMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGKMBABPKPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGKMBABPKPJ*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGKMBABPKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGKMBABPKPJ*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGKMBABPKPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

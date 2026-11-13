#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPENACKJJE;
class GDHFMHKFEAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDHFMHKFEAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20235F50)
#define GDHFMHKFEAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x202362F0)
#define GDHFMHKFEAL_CLONE_OFFSET UNITYSDK_OFFSET(0x202359B0)
#define GDHFMHKFEAL_COPKFEHECPG_OFFSET UNITYSDK_OFFSET(0x20235A40)
#define GDHFMHKFEAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20235930)
#define GDHFMHKFEAL_CTOR_OFFSET UNITYSDK_OFFSET(0x20235920)
#define GDHFMHKFEAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20235C00)
#define GDHFMHKFEAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20235A80)
#define GDHFMHKFEAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20235D80)
#define GDHFMHKFEAL_IHAGEIAIJFP_OFFSET UNITYSDK_OFFSET(0x20235A70)
#define GDHFMHKFEAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202358E0)
#define GDHFMHKFEAL_KDILIJCPJJA_OFFSET UNITYSDK_OFFSET(0x20235A60)
#define GDHFMHKFEAL_KDNCAKPEJEL_OFFSET UNITYSDK_OFFSET(0x20235A50)
#define GDHFMHKFEAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20236100)
#define GDHFMHKFEAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20236020)
#define GDHFMHKFEAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20235910)
#define GDHFMHKFEAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20235E10)
#define GDHFMHKFEAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x20235E70)

inline static constexpr unsigned int GDHFMHKFEAL_TypeDefinitionIndex = 30162;

	class GDHFMHKFEAL : public ::System::Object
	{
	public:
		::CLPENACKJJE* PCMEBEOHJCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DMBLLABHKAD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GDHFMHKFEAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDHFMHKFEAL*>**)UnitySDK::FromName("", "GDHFMHKFEAL")->GetStaticField(0x5CD20);
		}

		// static const ::System::Object EPHNANAABHK; // 0x0
		// static const ::System::Object ONPFLOJLCEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDHFMHKFEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDHFMHKFEAL*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDHFMHKFEAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDHFMHKFEAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDHFMHKFEAL*>*(*)())((::PBYTE)hIl2Cpp + GDHFMHKFEAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDHFMHKFEAL* Clone()
		{
			return ((::GDHFMHKFEAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_CLONE_OFFSET))(this);
		}

		::System::UInt32 COPKFEHECPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_COPKFEHECPG_OFFSET))(this);
		}

		::System::Void KDNCAKPEJEL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_KDNCAKPEJEL_OFFSET))(this, a1);
		}

		::CLPENACKJJE* KDILIJCPJJA()
		{
			return ((::CLPENACKJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_KDILIJCPJJA_OFFSET))(this);
		}

		::System::Void IHAGEIAIJFP(::CLPENACKJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPENACKJJE*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_IHAGEIAIJFP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDHFMHKFEAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDHFMHKFEAL*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDHFMHKFEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDHFMHKFEAL*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDHFMHKFEAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

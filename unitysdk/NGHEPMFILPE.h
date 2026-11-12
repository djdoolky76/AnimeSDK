#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEOAIPAPA;
class NGHEPMFILPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGHEPMFILPE_BFGNHKMBCIK_OFFSET UNITYSDK_OFFSET(0x1FE525B0)
#define NGHEPMFILPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE52A80)
#define NGHEPMFILPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE52D90)
#define NGHEPMFILPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE52500)
#define NGHEPMFILPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE524B0)
#define NGHEPMFILPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE524A0)
#define NGHEPMFILPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE52780)
#define NGHEPMFILPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE525D0)
#define NGHEPMFILPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE52900)
#define NGHEPMFILPE_JGGGJOALNNB_OFFSET UNITYSDK_OFFSET(0x1FE525C0)
#define NGHEPMFILPE_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1FE525A0)
#define NGHEPMFILPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE52430)
#define NGHEPMFILPE_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1FE52590)
#define NGHEPMFILPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE52BE0)
#define NGHEPMFILPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE52B50)
#define NGHEPMFILPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE52490)
#define NGHEPMFILPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE52940)
#define NGHEPMFILPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE529A0)

inline static constexpr unsigned int NGHEPMFILPE_TypeDefinitionIndex = 27709;

	class NGHEPMFILPE : public ::System::Object
	{
	public:
		::AKHEOAIPAPA* IOCPEKGNGLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NGHEPMFILPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGHEPMFILPE*>**)UnitySDK::FromName("", "NGHEPMFILPE")->GetStaticField(0x6A3A0);
		}

		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		// static const ::System::Object LCJGDOLCIKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGHEPMFILPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHEPMFILPE*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHEPMFILPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGHEPMFILPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGHEPMFILPE*>*(*)())((::PBYTE)hIl2Cpp + NGHEPMFILPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGHEPMFILPE* Clone()
		{
			return ((::NGHEPMFILPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGHEPMFILPE_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::AKHEOAIPAPA* BFGNHKMBCIK()
		{
			return ((::AKHEOAIPAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_BFGNHKMBCIK_OFFSET))(this);
		}

		::System::Void JGGGJOALNNB(::AKHEOAIPAPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKHEOAIPAPA*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_JGGGJOALNNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGHEPMFILPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGHEPMFILPE*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGHEPMFILPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHEPMFILPE*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGHEPMFILPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

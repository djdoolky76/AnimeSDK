#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHNCGCPBEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMHNCGCPBEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E86DCF0)
#define KMHNCGCPBEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86DF10)
#define KMHNCGCPBEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E86D940)
#define KMHNCGCPBEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E86D910)
#define KMHNCGCPBEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86D900)
#define KMHNCGCPBEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E86DA70)
#define KMHNCGCPBEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E86D9A0)
#define KMHNCGCPBEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E86DBE0)
#define KMHNCGCPBEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E86D8C0)
#define KMHNCGCPBEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E86DDB0)
#define KMHNCGCPBEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E86DD80)
#define KMHNCGCPBEF_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E86D990)
#define KMHNCGCPBEF_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E86D980)
#define KMHNCGCPBEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E86D8F0)
#define KMHNCGCPBEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E86DC10)
#define KMHNCGCPBEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E86DC70)

inline static constexpr unsigned int KMHNCGCPBEF_TypeDefinitionIndex = 26135;

	class KMHNCGCPBEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KMHNCGCPBEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KMHNCGCPBEF*>**)UnitySDK::FromName("", "KMHNCGCPBEF")->GetStaticField(0x1F070);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMHNCGCPBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMHNCGCPBEF*))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMHNCGCPBEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KMHNCGCPBEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KMHNCGCPBEF*>*(*)())((::PBYTE)hIl2Cpp + KMHNCGCPBEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMHNCGCPBEF* Clone()
		{
			return ((::KMHNCGCPBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMHNCGCPBEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMHNCGCPBEF*))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMHNCGCPBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMHNCGCPBEF*))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMHNCGCPBEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

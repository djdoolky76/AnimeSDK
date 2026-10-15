#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMJAOMBHJNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMJAOMBHJNL_BDCOHACJLKJ_OFFSET UNITYSDK_OFFSET(0x1E102A00)
#define CMJAOMBHJNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E102D30)
#define CMJAOMBHJNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E103000)
#define CMJAOMBHJNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E102980)
#define CMJAOMBHJNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E102950)
#define CMJAOMBHJNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E102940)
#define CMJAOMBHJNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E102AF0)
#define CMJAOMBHJNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E102A10)
#define CMJAOMBHJNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E102BC0)
#define CMJAOMBHJNL_GONODELMECK_OFFSET UNITYSDK_OFFSET(0x1E1029F0)
#define CMJAOMBHJNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E102900)
#define CMJAOMBHJNL_KPECOJJBKDA_OFFSET UNITYSDK_OFFSET(0x1E1029D0)
#define CMJAOMBHJNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E102E80)
#define CMJAOMBHJNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E102E40)
#define CMJAOMBHJNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E102930)
#define CMJAOMBHJNL_PKMFJLKJJKP_OFFSET UNITYSDK_OFFSET(0x1E1029E0)
#define CMJAOMBHJNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E102BF0)
#define CMJAOMBHJNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E102C50)

inline static constexpr unsigned int CMJAOMBHJNL_TypeDefinitionIndex = 28859;

	class CMJAOMBHJNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MBECAOPLBLM; // 0x18
		::System::UInt32 FMLIJGKGANB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CMJAOMBHJNL")->GetStaticField(0x1E130);
		}

		// static const ::System::Object HGFGLFMGDON; // 0x0
		// static const ::System::Object DOLMHHADCMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMJAOMBHJNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJAOMBHJNL*))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMJAOMBHJNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CMJAOMBHJNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMJAOMBHJNL* Clone()
		{
			return ((::CMJAOMBHJNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KPECOJJBKDA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_KPECOJJBKDA_OFFSET))(this);
		}

		::System::Void PKMFJLKJJKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_PKMFJLKJJKP_OFFSET))(this, a1);
		}

		::System::UInt32 GONODELMECK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_GONODELMECK_OFFSET))(this);
		}

		::System::Void BDCOHACJLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_BDCOHACJLKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMJAOMBHJNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMJAOMBHJNL*))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMJAOMBHJNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJAOMBHJNL*))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMJAOMBHJNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFKIFOKEFMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFKIFOKEFMC_AAMADCFBHAI_OFFSET UNITYSDK_OFFSET(0x1DEF7CC0)
#define PFKIFOKEFMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF8050)
#define PFKIFOKEFMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF8270)
#define PFKIFOKEFMC_CIFHIKOAFKM_OFFSET UNITYSDK_OFFSET(0x1DEF7CB0)
#define PFKIFOKEFMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF7C40)
#define PFKIFOKEFMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF7C10)
#define PFKIFOKEFMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7C00)
#define PFKIFOKEFMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF7DD0)
#define PFKIFOKEFMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF7CD0)
#define PFKIFOKEFMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF7F40)
#define PFKIFOKEFMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF7B90)
#define PFKIFOKEFMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF8110)
#define PFKIFOKEFMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF80E0)
#define PFKIFOKEFMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7BF0)
#define PFKIFOKEFMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF7F70)
#define PFKIFOKEFMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF7FD0)

inline static constexpr unsigned int PFKIFOKEFMC_TypeDefinitionIndex = 25209;

	class PFKIFOKEFMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CFAGHFHBBLE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PFKIFOKEFMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFKIFOKEFMC*>**)UnitySDK::FromName("", "PFKIFOKEFMC")->GetStaticField(0x31BB0);
		}

		// static const ::System::Object JODCNGGNOIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFKIFOKEFMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFKIFOKEFMC*))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKIFOKEFMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFKIFOKEFMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFKIFOKEFMC*>*(*)())((::PBYTE)hIl2Cpp + PFKIFOKEFMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFKIFOKEFMC* Clone()
		{
			return ((::PFKIFOKEFMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIFHIKOAFKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_CIFHIKOAFKM_OFFSET))(this);
		}

		::System::Void AAMADCFBHAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_AAMADCFBHAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFKIFOKEFMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFKIFOKEFMC*))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFKIFOKEFMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFKIFOKEFMC*))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFKIFOKEFMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

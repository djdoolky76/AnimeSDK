#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIFMGAFOBPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIFMGAFOBPC_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1FC8DE40)
#define LIFMGAFOBPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC8E2F0)
#define LIFMGAFOBPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC8E530)
#define LIFMGAFOBPC_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1FC8DE50)
#define LIFMGAFOBPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC8DDF0)
#define LIFMGAFOBPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC8DDB0)
#define LIFMGAFOBPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8DDA0)
#define LIFMGAFOBPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC8DFA0)
#define LIFMGAFOBPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC8DEA0)
#define LIFMGAFOBPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC8E140)
#define LIFMGAFOBPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC8DD60)
#define LIFMGAFOBPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC8E3A0)
#define LIFMGAFOBPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC8E360)
#define LIFMGAFOBPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC8DD90)
#define LIFMGAFOBPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC8E200)
#define LIFMGAFOBPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC8E260)

inline static constexpr unsigned int LIFMGAFOBPC_TypeDefinitionIndex = 31861;

	class LIFMGAFOBPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* PDKNJCIEBHA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LIFMGAFOBPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIFMGAFOBPC*>**)UnitySDK::FromName("", "LIFMGAFOBPC")->GetStaticField(0x363C0);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIFMGAFOBPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFMGAFOBPC*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFMGAFOBPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIFMGAFOBPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIFMGAFOBPC*>*(*)())((::PBYTE)hIl2Cpp + LIFMGAFOBPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIFMGAFOBPC* Clone()
		{
			return ((::LIFMGAFOBPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_CLONE_OFFSET))(this);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIFMGAFOBPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIFMGAFOBPC*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIFMGAFOBPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFMGAFOBPC*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIFMGAFOBPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

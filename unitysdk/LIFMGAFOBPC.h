#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIFMGAFOBPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIFMGAFOBPC_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E96CD80)
#define LIFMGAFOBPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96D230)
#define LIFMGAFOBPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96D470)
#define LIFMGAFOBPC_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E96CD90)
#define LIFMGAFOBPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96CD30)
#define LIFMGAFOBPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96CCF0)
#define LIFMGAFOBPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96CCE0)
#define LIFMGAFOBPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96CEE0)
#define LIFMGAFOBPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96CDE0)
#define LIFMGAFOBPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96D080)
#define LIFMGAFOBPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96CCA0)
#define LIFMGAFOBPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96D2E0)
#define LIFMGAFOBPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96D2A0)
#define LIFMGAFOBPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96CCD0)
#define LIFMGAFOBPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96D140)
#define LIFMGAFOBPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96D1A0)

inline static constexpr unsigned int LIFMGAFOBPC_TypeDefinitionIndex = 30948;

	class LIFMGAFOBPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* PDKNJCIEBHA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LIFMGAFOBPC")->GetStaticField(0x44FF0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LIFMGAFOBPC_JJGHOBBFNJD_OFFSET))();
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

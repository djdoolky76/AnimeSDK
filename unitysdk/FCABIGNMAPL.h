#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCABIGNMAPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCABIGNMAPL_BCALKHPEGGP_OFFSET UNITYSDK_OFFSET(0x1E33CE10)
#define FCABIGNMAPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E33D1B0)
#define FCABIGNMAPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33D3D0)
#define FCABIGNMAPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E33CDA0)
#define FCABIGNMAPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E33CD70)
#define FCABIGNMAPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33CD60)
#define FCABIGNMAPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E33CF30)
#define FCABIGNMAPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E33CE30)
#define FCABIGNMAPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E33D0A0)
#define FCABIGNMAPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E33CCF0)
#define FCABIGNMAPL_KIEPFJLMCCE_OFFSET UNITYSDK_OFFSET(0x1E33CE20)
#define FCABIGNMAPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E33D270)
#define FCABIGNMAPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E33D240)
#define FCABIGNMAPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E33CD50)
#define FCABIGNMAPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E33D0D0)
#define FCABIGNMAPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E33D130)

inline static constexpr unsigned int FCABIGNMAPL_TypeDefinitionIndex = 29310;

	class FCABIGNMAPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KPFGMKPPEKD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FCABIGNMAPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCABIGNMAPL*>**)UnitySDK::FromName("", "FCABIGNMAPL")->GetStaticField(0x59F10);
		}

		// static const ::System::Object GNCNCFNGDFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCABIGNMAPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCABIGNMAPL*))((::PBYTE)hIl2Cpp + FCABIGNMAPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCABIGNMAPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCABIGNMAPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCABIGNMAPL*>*(*)())((::PBYTE)hIl2Cpp + FCABIGNMAPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCABIGNMAPL* Clone()
		{
			return ((::FCABIGNMAPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCALKHPEGGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_BCALKHPEGGP_OFFSET))(this);
		}

		::System::Void KIEPFJLMCCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCABIGNMAPL_KIEPFJLMCCE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCABIGNMAPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCABIGNMAPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCABIGNMAPL*))((::PBYTE)hIl2Cpp + FCABIGNMAPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCABIGNMAPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCABIGNMAPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCABIGNMAPL*))((::PBYTE)hIl2Cpp + FCABIGNMAPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCABIGNMAPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

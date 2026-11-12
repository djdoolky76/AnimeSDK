#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPIFCANPPEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPIFCANPPEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9ECE50)
#define IPIFCANPPEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9ECEF0)
#define IPIFCANPPEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9ECB40)
#define IPIFCANPPEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9ECB10)
#define IPIFCANPPEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9ECB00)
#define IPIFCANPPEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9ECC50)
#define IPIFCANPPEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9ECB80)
#define IPIFCANPPEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9ECDB0)
#define IPIFCANPPEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9ECAC0)
#define IPIFCANPPEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9ECEA0)
#define IPIFCANPPEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9ECE70)
#define IPIFCANPPEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9ECAF0)
#define IPIFCANPPEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9ECDE0)
#define IPIFCANPPEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9ECE40)

inline static constexpr unsigned int IPIFCANPPEO_TypeDefinitionIndex = 34454;

	class IPIFCANPPEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IPIFCANPPEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPIFCANPPEO*>**)UnitySDK::FromName("", "IPIFCANPPEO")->GetStaticField(0x59630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPIFCANPPEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPIFCANPPEO*))((::PBYTE)hIl2Cpp + IPIFCANPPEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIFCANPPEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPIFCANPPEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPIFCANPPEO*>*(*)())((::PBYTE)hIl2Cpp + IPIFCANPPEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPIFCANPPEO* Clone()
		{
			return ((::IPIFCANPPEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPIFCANPPEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPIFCANPPEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPIFCANPPEO*))((::PBYTE)hIl2Cpp + IPIFCANPPEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPIFCANPPEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPIFCANPPEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPIFCANPPEO*))((::PBYTE)hIl2Cpp + IPIFCANPPEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPIFCANPPEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

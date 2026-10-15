#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJOHIOHPMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELJOHIOHPMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A73B0)
#define ELJOHIOHPMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A75D0)
#define ELJOHIOHPMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A6FA0)
#define ELJOHIOHPMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A6F70)
#define ELJOHIOHPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6F60)
#define ELJOHIOHPMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A7130)
#define ELJOHIOHPMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A7030)
#define ELJOHIOHPMJ_FABKMOMAOOM_OFFSET UNITYSDK_OFFSET(0x1E2A7010)
#define ELJOHIOHPMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A72A0)
#define ELJOHIOHPMJ_IFILAFCHPHH_OFFSET UNITYSDK_OFFSET(0x1E2A7020)
#define ELJOHIOHPMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A6EF0)
#define ELJOHIOHPMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A7470)
#define ELJOHIOHPMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A7440)
#define ELJOHIOHPMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6F50)
#define ELJOHIOHPMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A72D0)
#define ELJOHIOHPMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A7330)

inline static constexpr unsigned int ELJOHIOHPMJ_TypeDefinitionIndex = 29190;

	class ELJOHIOHPMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AAJMMCOEPAA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELJOHIOHPMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELJOHIOHPMJ*>**)UnitySDK::FromName("", "ELJOHIOHPMJ")->GetStaticField(0x51BB0);
		}

		// static const ::System::Object DEDLJNIMGBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELJOHIOHPMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJOHIOHPMJ*))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELJOHIOHPMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELJOHIOHPMJ*>*(*)())((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELJOHIOHPMJ* Clone()
		{
			return ((::ELJOHIOHPMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FABKMOMAOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_FABKMOMAOOM_OFFSET))(this);
		}

		::System::Void IFILAFCHPHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_IFILAFCHPHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELJOHIOHPMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELJOHIOHPMJ*))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELJOHIOHPMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJOHIOHPMJ*))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

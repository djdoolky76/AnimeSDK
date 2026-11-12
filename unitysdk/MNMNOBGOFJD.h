#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNMNOBGOFJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNMNOBGOFJD_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1FDDA370)
#define MNMNOBGOFJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDDA700)
#define MNMNOBGOFJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDA920)
#define MNMNOBGOFJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDDA2F0)
#define MNMNOBGOFJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDDA2C0)
#define MNMNOBGOFJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDA2B0)
#define MNMNOBGOFJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDDA480)
#define MNMNOBGOFJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDDA380)
#define MNMNOBGOFJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDDA5F0)
#define MNMNOBGOFJD_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1FDDA360)
#define MNMNOBGOFJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDDA240)
#define MNMNOBGOFJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDDA7C0)
#define MNMNOBGOFJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDDA790)
#define MNMNOBGOFJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDDA2A0)
#define MNMNOBGOFJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDDA620)
#define MNMNOBGOFJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDDA680)

inline static constexpr unsigned int MNMNOBGOFJD_TypeDefinitionIndex = 29973;

	class MNMNOBGOFJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MNMNOBGOFJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNMNOBGOFJD*>**)UnitySDK::FromName("", "MNMNOBGOFJD")->GetStaticField(0x62020);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNMNOBGOFJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNMNOBGOFJD*))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNMNOBGOFJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNMNOBGOFJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNMNOBGOFJD*>*(*)())((::PBYTE)hIl2Cpp + MNMNOBGOFJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNMNOBGOFJD* Clone()
		{
			return ((::MNMNOBGOFJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNMNOBGOFJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNMNOBGOFJD*))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNMNOBGOFJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNMNOBGOFJD*))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNMNOBGOFJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

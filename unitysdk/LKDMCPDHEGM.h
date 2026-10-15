#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKDMCPDHEGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKDMCPDHEGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98D2C0)
#define LKDMCPDHEGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98D360)
#define LKDMCPDHEGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E98CFB0)
#define LKDMCPDHEGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E98CF80)
#define LKDMCPDHEGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98CF70)
#define LKDMCPDHEGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E98D0C0)
#define LKDMCPDHEGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E98CFF0)
#define LKDMCPDHEGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E98D220)
#define LKDMCPDHEGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E98CF30)
#define LKDMCPDHEGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98D310)
#define LKDMCPDHEGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98D2E0)
#define LKDMCPDHEGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E98CF60)
#define LKDMCPDHEGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E98D250)
#define LKDMCPDHEGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E98D2B0)

inline static constexpr unsigned int LKDMCPDHEGM_TypeDefinitionIndex = 29446;

	class LKDMCPDHEGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LKDMCPDHEGM")->GetStaticField(0x4A460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKDMCPDHEGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKDMCPDHEGM*))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKDMCPDHEGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LKDMCPDHEGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKDMCPDHEGM* Clone()
		{
			return ((::LKDMCPDHEGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKDMCPDHEGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKDMCPDHEGM*))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKDMCPDHEGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKDMCPDHEGM*))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKDMCPDHEGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

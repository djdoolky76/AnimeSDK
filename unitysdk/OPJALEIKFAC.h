#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPJALEIKFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPJALEIKFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE4190)
#define OPJALEIKFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE4230)
#define OPJALEIKFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE3E30)
#define OPJALEIKFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE3E00)
#define OPJALEIKFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3DF0)
#define OPJALEIKFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE3F90)
#define OPJALEIKFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE3EA0)
#define OPJALEIKFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE40F0)
#define OPJALEIKFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE3D80)
#define OPJALEIKFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE41E0)
#define OPJALEIKFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE41B0)
#define OPJALEIKFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3DE0)
#define OPJALEIKFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE4120)
#define OPJALEIKFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE4180)

inline static constexpr unsigned int OPJALEIKFAC_TypeDefinitionIndex = 29282;

	class OPJALEIKFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OPJALEIKFAC")->GetStaticField(0x303B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPJALEIKFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPJALEIKFAC*))((::PBYTE)hIl2Cpp + OPJALEIKFAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPJALEIKFAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OPJALEIKFAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPJALEIKFAC* Clone()
		{
			return ((::OPJALEIKFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPJALEIKFAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPJALEIKFAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPJALEIKFAC*))((::PBYTE)hIl2Cpp + OPJALEIKFAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPJALEIKFAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPJALEIKFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPJALEIKFAC*))((::PBYTE)hIl2Cpp + OPJALEIKFAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPJALEIKFAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

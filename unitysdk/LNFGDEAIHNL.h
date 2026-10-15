#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNFGDEAIHNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNFGDEAIHNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B39E0)
#define LNFGDEAIHNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B3A80)
#define LNFGDEAIHNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B36D0)
#define LNFGDEAIHNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B36A0)
#define LNFGDEAIHNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B3690)
#define LNFGDEAIHNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B37E0)
#define LNFGDEAIHNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B3710)
#define LNFGDEAIHNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B3940)
#define LNFGDEAIHNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B3650)
#define LNFGDEAIHNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B3A30)
#define LNFGDEAIHNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B3A00)
#define LNFGDEAIHNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B3680)
#define LNFGDEAIHNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B3970)
#define LNFGDEAIHNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B39D0)

inline static constexpr unsigned int LNFGDEAIHNL_TypeDefinitionIndex = 26530;

	class LNFGDEAIHNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LNFGDEAIHNL")->GetStaticField(0x50030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNFGDEAIHNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNFGDEAIHNL*))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNFGDEAIHNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LNFGDEAIHNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNFGDEAIHNL* Clone()
		{
			return ((::LNFGDEAIHNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNFGDEAIHNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNFGDEAIHNL*))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNFGDEAIHNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNFGDEAIHNL*))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNFGDEAIHNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

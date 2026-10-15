#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFOFPDMELCL;
class HGABLJFOKDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFOFPDMELCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E475830)
#define GFOFPDMELCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E475AB0)
#define GFOFPDMELCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4751F0)
#define GFOFPDMELCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4751A0)
#define GFOFPDMELCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E475190)
#define GFOFPDMELCL_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x1E475250)
#define GFOFPDMELCL_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0x1E475260)
#define GFOFPDMELCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4753E0)
#define GFOFPDMELCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E475270)
#define GFOFPDMELCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4756B0)
#define GFOFPDMELCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E475150)
#define GFOFPDMELCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E475920)
#define GFOFPDMELCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E475890)
#define GFOFPDMELCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E475180)
#define GFOFPDMELCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E475740)
#define GFOFPDMELCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4757A0)

inline static constexpr unsigned int GFOFPDMELCL_TypeDefinitionIndex = 32533;

	class GFOFPDMELCL : public ::System::Object
	{
	public:
		::HGABLJFOKDG* PNPIJDDLCFJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFOFPDMELCL")->GetStaticField(0x15590);
		}

		// static const ::System::Object HPADICLJPCP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFOFPDMELCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFOFPDMELCL*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFOFPDMELCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFOFPDMELCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFOFPDMELCL* Clone()
		{
			return ((::GFOFPDMELCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_CLONE_OFFSET))(this);
		}

		::HGABLJFOKDG* DJMOOLAIGEO()
		{
			return ((::HGABLJFOKDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::Void EKMNONOLBPG(::HGABLJFOKDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGABLJFOKDG*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_EKMNONOLBPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFOFPDMELCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFOFPDMELCL*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFOFPDMELCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFOFPDMELCL*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFOFPDMELCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

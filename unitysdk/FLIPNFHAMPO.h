#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIPNFHAMPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLIPNFHAMPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E390340)
#define FLIPNFHAMPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ABFA0)
#define FLIPNFHAMPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38FF30)
#define FLIPNFHAMPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38FF00)
#define FLIPNFHAMPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38FEF0)
#define FLIPNFHAMPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3900C0)
#define FLIPNFHAMPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38FFC0)
#define FLIPNFHAMPO_FPDJOAGAMIC_OFFSET UNITYSDK_OFFSET(0x1E38FFB0)
#define FLIPNFHAMPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E390230)
#define FLIPNFHAMPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38FE80)
#define FLIPNFHAMPO_KMHIPICMOFF_OFFSET UNITYSDK_OFFSET(0x1E38FFA0)
#define FLIPNFHAMPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3ABE40)
#define FLIPNFHAMPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3903D0)
#define FLIPNFHAMPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38FEE0)
#define FLIPNFHAMPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E390260)
#define FLIPNFHAMPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3902C0)

inline static constexpr unsigned int FLIPNFHAMPO_TypeDefinitionIndex = 26967;

	class FLIPNFHAMPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EMGNDFECDJC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FLIPNFHAMPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLIPNFHAMPO*>**)UnitySDK::FromName("", "FLIPNFHAMPO")->GetStaticField(0x5BAF0);
		}

		// static const ::System::Object JJENEEKNAHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLIPNFHAMPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLIPNFHAMPO*))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIPNFHAMPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLIPNFHAMPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLIPNFHAMPO*>*(*)())((::PBYTE)hIl2Cpp + FLIPNFHAMPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLIPNFHAMPO* Clone()
		{
			return ((::FLIPNFHAMPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_CLONE_OFFSET))(this);
		}

		::System::UInt32 KMHIPICMOFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_KMHIPICMOFF_OFFSET))(this);
		}

		::System::Void FPDJOAGAMIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_FPDJOAGAMIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLIPNFHAMPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLIPNFHAMPO*))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLIPNFHAMPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLIPNFHAMPO*))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLIPNFHAMPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

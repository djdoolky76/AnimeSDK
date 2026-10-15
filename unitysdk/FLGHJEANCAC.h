#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLGHJEANCAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLGHJEANCAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3BA890)
#define FLGHJEANCAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA930)
#define FLGHJEANCAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3BA580)
#define FLGHJEANCAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3BA550)
#define FLGHJEANCAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA540)
#define FLGHJEANCAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3BA690)
#define FLGHJEANCAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3BA5C0)
#define FLGHJEANCAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3BA7F0)
#define FLGHJEANCAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3BA500)
#define FLGHJEANCAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BA8E0)
#define FLGHJEANCAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BA8B0)
#define FLGHJEANCAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA530)
#define FLGHJEANCAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BA820)
#define FLGHJEANCAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3BA880)

inline static constexpr unsigned int FLGHJEANCAC_TypeDefinitionIndex = 32766;

	class FLGHJEANCAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FLGHJEANCAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLGHJEANCAC*>**)UnitySDK::FromName("", "FLGHJEANCAC")->GetStaticField(0x64340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLGHJEANCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLGHJEANCAC*))((::PBYTE)hIl2Cpp + FLGHJEANCAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLGHJEANCAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLGHJEANCAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLGHJEANCAC*>*(*)())((::PBYTE)hIl2Cpp + FLGHJEANCAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLGHJEANCAC* Clone()
		{
			return ((::FLGHJEANCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLGHJEANCAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLGHJEANCAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLGHJEANCAC*))((::PBYTE)hIl2Cpp + FLGHJEANCAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLGHJEANCAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLGHJEANCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLGHJEANCAC*))((::PBYTE)hIl2Cpp + FLGHJEANCAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLGHJEANCAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

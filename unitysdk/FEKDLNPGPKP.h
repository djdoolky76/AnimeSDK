#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEKDLNPGPKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEKDLNPGPKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20545580)
#define FEKDLNPGPKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x20545620)
#define FEKDLNPGPKP_CLONE_OFFSET UNITYSDK_OFFSET(0x20545270)
#define FEKDLNPGPKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20545240)
#define FEKDLNPGPKP_CTOR_OFFSET UNITYSDK_OFFSET(0x20545230)
#define FEKDLNPGPKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20545380)
#define FEKDLNPGPKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x205452B0)
#define FEKDLNPGPKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205454E0)
#define FEKDLNPGPKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205451F0)
#define FEKDLNPGPKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205455D0)
#define FEKDLNPGPKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205455A0)
#define FEKDLNPGPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20545220)
#define FEKDLNPGPKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20545510)
#define FEKDLNPGPKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x20545570)

inline static constexpr unsigned int FEKDLNPGPKP_TypeDefinitionIndex = 28434;

	class FEKDLNPGPKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FEKDLNPGPKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEKDLNPGPKP*>**)UnitySDK::FromName("", "FEKDLNPGPKP")->GetStaticField(0x4B4D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEKDLNPGPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEKDLNPGPKP*))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEKDLNPGPKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FEKDLNPGPKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEKDLNPGPKP*>*(*)())((::PBYTE)hIl2Cpp + FEKDLNPGPKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEKDLNPGPKP* Clone()
		{
			return ((::FEKDLNPGPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEKDLNPGPKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEKDLNPGPKP*))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEKDLNPGPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEKDLNPGPKP*))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEKDLNPGPKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

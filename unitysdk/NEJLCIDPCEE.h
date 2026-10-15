#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJLCIDPCEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEJLCIDPCEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF7310)
#define NEJLCIDPCEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF75E0)
#define NEJLCIDPCEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF6F60)
#define NEJLCIDPCEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF6F30)
#define NEJLCIDPCEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF6F20)
#define NEJLCIDPCEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF70D0)
#define NEJLCIDPCEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF6FF0)
#define NEJLCIDPCEE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAF6FC0)
#define NEJLCIDPCEE_FJLENKEAHEN_OFFSET UNITYSDK_OFFSET(0x1EAF6FE0)
#define NEJLCIDPCEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF71A0)
#define NEJLCIDPCEE_JHEGBMMFLFK_OFFSET UNITYSDK_OFFSET(0x1EAF6FD0)
#define NEJLCIDPCEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF6EE0)
#define NEJLCIDPCEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF7460)
#define NEJLCIDPCEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF7420)
#define NEJLCIDPCEE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAF6FB0)
#define NEJLCIDPCEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF6F10)
#define NEJLCIDPCEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF71D0)
#define NEJLCIDPCEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF7230)

inline static constexpr unsigned int NEJLCIDPCEE_TypeDefinitionIndex = 34574;

	class NEJLCIDPCEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MJLJNCEJAMP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEJLCIDPCEE")->GetStaticField(0x5DEC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NNLOBPKKJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEJLCIDPCEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJLCIDPCEE*))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJLCIDPCEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEJLCIDPCEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEJLCIDPCEE* Clone()
		{
			return ((::NEJLCIDPCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JHEGBMMFLFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_JHEGBMMFLFK_OFFSET))(this);
		}

		::System::Void FJLENKEAHEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_FJLENKEAHEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEJLCIDPCEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEJLCIDPCEE*))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEJLCIDPCEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJLCIDPCEE*))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEJLCIDPCEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

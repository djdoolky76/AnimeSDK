#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJMIAMJLMPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJMIAMJLMPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF81940)
#define PJMIAMJLMPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF81B60)
#define PJMIAMJLMPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF81590)
#define PJMIAMJLMPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF81560)
#define PJMIAMJLMPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF81550)
#define PJMIAMJLMPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF816C0)
#define PJMIAMJLMPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF815F0)
#define PJMIAMJLMPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF815E0)
#define PJMIAMJLMPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF81830)
#define PJMIAMJLMPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF81510)
#define PJMIAMJLMPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF81A00)
#define PJMIAMJLMPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF819D0)
#define PJMIAMJLMPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF815D0)
#define PJMIAMJLMPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF81540)
#define PJMIAMJLMPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF81860)
#define PJMIAMJLMPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF818C0)

inline static constexpr unsigned int PJMIAMJLMPA_TypeDefinitionIndex = 26918;

	class PJMIAMJLMPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PJMIAMJLMPA")->GetStaticField(0x472A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJMIAMJLMPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMIAMJLMPA*))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJMIAMJLMPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PJMIAMJLMPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJMIAMJLMPA* Clone()
		{
			return ((::PJMIAMJLMPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJMIAMJLMPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJMIAMJLMPA*))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJMIAMJLMPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMIAMJLMPA*))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJMIAMJLMPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

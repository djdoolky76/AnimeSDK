#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGBCIDLGCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIGBCIDLGCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF45790)
#define PIGBCIDLGCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF459B0)
#define PIGBCIDLGCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF453E0)
#define PIGBCIDLGCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF453B0)
#define PIGBCIDLGCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF453A0)
#define PIGBCIDLGCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF45510)
#define PIGBCIDLGCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF45440)
#define PIGBCIDLGCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF45680)
#define PIGBCIDLGCA_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DF45430)
#define PIGBCIDLGCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF45360)
#define PIGBCIDLGCA_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DF45420)
#define PIGBCIDLGCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF45850)
#define PIGBCIDLGCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF45820)
#define PIGBCIDLGCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF45390)
#define PIGBCIDLGCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF456B0)
#define PIGBCIDLGCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF45710)

inline static constexpr unsigned int PIGBCIDLGCA_TypeDefinitionIndex = 25980;

	class PIGBCIDLGCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIGBCIDLGCA")->GetStaticField(0x40F10);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIGBCIDLGCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGBCIDLGCA*))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGBCIDLGCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIGBCIDLGCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIGBCIDLGCA* Clone()
		{
			return ((::PIGBCIDLGCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIGBCIDLGCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIGBCIDLGCA*))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIGBCIDLGCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGBCIDLGCA*))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIGBCIDLGCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

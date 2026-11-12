#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGBCIDLGCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIGBCIDLGCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2164F0)
#define PIGBCIDLGCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F216710)
#define PIGBCIDLGCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F216140)
#define PIGBCIDLGCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F216110)
#define PIGBCIDLGCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F216100)
#define PIGBCIDLGCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F216270)
#define PIGBCIDLGCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2161A0)
#define PIGBCIDLGCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2163E0)
#define PIGBCIDLGCA_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1F216190)
#define PIGBCIDLGCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2160C0)
#define PIGBCIDLGCA_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1F216180)
#define PIGBCIDLGCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2165B0)
#define PIGBCIDLGCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F216580)
#define PIGBCIDLGCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2160F0)
#define PIGBCIDLGCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F216410)
#define PIGBCIDLGCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F216470)

inline static constexpr unsigned int PIGBCIDLGCA_TypeDefinitionIndex = 26477;

	class PIGBCIDLGCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIGBCIDLGCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIGBCIDLGCA*>**)UnitySDK::FromName("", "PIGBCIDLGCA")->GetStaticField(0x37DF0);
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

		static ::Google::Protobuf::MessageParser_1<::PIGBCIDLGCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIGBCIDLGCA*>*(*)())((::PBYTE)hIl2Cpp + PIGBCIDLGCA_JJGHOBBFNJD_OFFSET))();
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

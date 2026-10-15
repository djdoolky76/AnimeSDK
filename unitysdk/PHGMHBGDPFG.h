#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHGMHBGDPFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHGMHBGDPFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0C830)
#define PHGMHBGDPFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C8D0)
#define PHGMHBGDPFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0C520)
#define PHGMHBGDPFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0C4F0)
#define PHGMHBGDPFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C4E0)
#define PHGMHBGDPFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0C630)
#define PHGMHBGDPFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0C560)
#define PHGMHBGDPFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0C790)
#define PHGMHBGDPFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF0C4A0)
#define PHGMHBGDPFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0C880)
#define PHGMHBGDPFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0C850)
#define PHGMHBGDPFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C4D0)
#define PHGMHBGDPFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0C7C0)
#define PHGMHBGDPFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0C820)

inline static constexpr unsigned int PHGMHBGDPFG_TypeDefinitionIndex = 32229;

	class PHGMHBGDPFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PHGMHBGDPFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHGMHBGDPFG*>**)UnitySDK::FromName("", "PHGMHBGDPFG")->GetStaticField(0x33880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHGMHBGDPFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHGMHBGDPFG*))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHGMHBGDPFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHGMHBGDPFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHGMHBGDPFG*>*(*)())((::PBYTE)hIl2Cpp + PHGMHBGDPFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHGMHBGDPFG* Clone()
		{
			return ((::PHGMHBGDPFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHGMHBGDPFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHGMHBGDPFG*))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHGMHBGDPFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHGMHBGDPFG*))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHGMHBGDPFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

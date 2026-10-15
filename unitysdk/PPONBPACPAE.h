#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPONBPACPAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPONBPACPAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB47F0)
#define PPONBPACPAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB4890)
#define PPONBPACPAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB44E0)
#define PPONBPACPAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB44B0)
#define PPONBPACPAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB44A0)
#define PPONBPACPAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB45F0)
#define PPONBPACPAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB4520)
#define PPONBPACPAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB4750)
#define PPONBPACPAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB4460)
#define PPONBPACPAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB4840)
#define PPONBPACPAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB4810)
#define PPONBPACPAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB4490)
#define PPONBPACPAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB4780)
#define PPONBPACPAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB47E0)

inline static constexpr unsigned int PPONBPACPAE_TypeDefinitionIndex = 32290;

	class PPONBPACPAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PPONBPACPAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPONBPACPAE*>**)UnitySDK::FromName("", "PPONBPACPAE")->GetStaticField(0x47790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPONBPACPAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONBPACPAE*))((::PBYTE)hIl2Cpp + PPONBPACPAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPONBPACPAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPONBPACPAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPONBPACPAE*>*(*)())((::PBYTE)hIl2Cpp + PPONBPACPAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPONBPACPAE* Clone()
		{
			return ((::PPONBPACPAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPONBPACPAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPONBPACPAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPONBPACPAE*))((::PBYTE)hIl2Cpp + PPONBPACPAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPONBPACPAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPONBPACPAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONBPACPAE*))((::PBYTE)hIl2Cpp + PPONBPACPAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPONBPACPAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

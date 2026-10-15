#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNKOABEBAIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNKOABEBAIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E2A40)
#define GNKOABEBAIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E2AE0)
#define GNKOABEBAIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E2730)
#define GNKOABEBAIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E2700)
#define GNKOABEBAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E26F0)
#define GNKOABEBAIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E2840)
#define GNKOABEBAIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E2770)
#define GNKOABEBAIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E29A0)
#define GNKOABEBAIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E26B0)
#define GNKOABEBAIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E2A90)
#define GNKOABEBAIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E2A60)
#define GNKOABEBAIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E26E0)
#define GNKOABEBAIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E29D0)
#define GNKOABEBAIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E2A30)

inline static constexpr unsigned int GNKOABEBAIA_TypeDefinitionIndex = 32014;

	class GNKOABEBAIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GNKOABEBAIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNKOABEBAIA*>**)UnitySDK::FromName("", "GNKOABEBAIA")->GetStaticField(0x237F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNKOABEBAIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNKOABEBAIA*))((::PBYTE)hIl2Cpp + GNKOABEBAIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNKOABEBAIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNKOABEBAIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNKOABEBAIA*>*(*)())((::PBYTE)hIl2Cpp + GNKOABEBAIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNKOABEBAIA* Clone()
		{
			return ((::GNKOABEBAIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNKOABEBAIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNKOABEBAIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNKOABEBAIA*))((::PBYTE)hIl2Cpp + GNKOABEBAIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNKOABEBAIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNKOABEBAIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNKOABEBAIA*))((::PBYTE)hIl2Cpp + GNKOABEBAIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNKOABEBAIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

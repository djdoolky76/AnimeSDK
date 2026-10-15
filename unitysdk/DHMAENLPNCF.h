#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHMAENLPNCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHMAENLPNCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18AEC0)
#define DHMAENLPNCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18AF60)
#define DHMAENLPNCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18ABB0)
#define DHMAENLPNCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E18AB80)
#define DHMAENLPNCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18AB70)
#define DHMAENLPNCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18ACC0)
#define DHMAENLPNCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18ABF0)
#define DHMAENLPNCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18AE20)
#define DHMAENLPNCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E18AB30)
#define DHMAENLPNCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18AF10)
#define DHMAENLPNCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18AEE0)
#define DHMAENLPNCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E18AB60)
#define DHMAENLPNCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18AE50)
#define DHMAENLPNCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18AEB0)

inline static constexpr unsigned int DHMAENLPNCF_TypeDefinitionIndex = 34269;

	class DHMAENLPNCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DHMAENLPNCF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHMAENLPNCF*>**)UnitySDK::FromName("", "DHMAENLPNCF")->GetStaticField(0x30E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHMAENLPNCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHMAENLPNCF*))((::PBYTE)hIl2Cpp + DHMAENLPNCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHMAENLPNCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DHMAENLPNCF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHMAENLPNCF*>*(*)())((::PBYTE)hIl2Cpp + DHMAENLPNCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHMAENLPNCF* Clone()
		{
			return ((::DHMAENLPNCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHMAENLPNCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHMAENLPNCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHMAENLPNCF*))((::PBYTE)hIl2Cpp + DHMAENLPNCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHMAENLPNCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHMAENLPNCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHMAENLPNCF*))((::PBYTE)hIl2Cpp + DHMAENLPNCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHMAENLPNCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

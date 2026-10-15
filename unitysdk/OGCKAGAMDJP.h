#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGCKAGAMDJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGCKAGAMDJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4FAF0)
#define OGCKAGAMDJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4FB90)
#define OGCKAGAMDJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4F7E0)
#define OGCKAGAMDJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4F7B0)
#define OGCKAGAMDJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F7A0)
#define OGCKAGAMDJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4F8F0)
#define OGCKAGAMDJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4F820)
#define OGCKAGAMDJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4FA50)
#define OGCKAGAMDJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4F760)
#define OGCKAGAMDJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4FB40)
#define OGCKAGAMDJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4FB10)
#define OGCKAGAMDJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F790)
#define OGCKAGAMDJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4FA80)
#define OGCKAGAMDJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4FAE0)

inline static constexpr unsigned int OGCKAGAMDJP_TypeDefinitionIndex = 28384;

	class OGCKAGAMDJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OGCKAGAMDJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OGCKAGAMDJP*>**)UnitySDK::FromName("", "OGCKAGAMDJP")->GetStaticField(0x17D20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGCKAGAMDJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGCKAGAMDJP*))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGCKAGAMDJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OGCKAGAMDJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OGCKAGAMDJP*>*(*)())((::PBYTE)hIl2Cpp + OGCKAGAMDJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGCKAGAMDJP* Clone()
		{
			return ((::OGCKAGAMDJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGCKAGAMDJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGCKAGAMDJP*))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGCKAGAMDJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGCKAGAMDJP*))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGCKAGAMDJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

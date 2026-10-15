#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODKKAPPADGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODKKAPPADGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1F8C0)
#define ODKKAPPADGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1F960)
#define ODKKAPPADGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1F5B0)
#define ODKKAPPADGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1F580)
#define ODKKAPPADGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1F570)
#define ODKKAPPADGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1F6C0)
#define ODKKAPPADGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1F5F0)
#define ODKKAPPADGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1F820)
#define ODKKAPPADGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1F530)
#define ODKKAPPADGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1F910)
#define ODKKAPPADGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1F8E0)
#define ODKKAPPADGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1F560)
#define ODKKAPPADGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1F850)
#define ODKKAPPADGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1F8B0)

inline static constexpr unsigned int ODKKAPPADGE_TypeDefinitionIndex = 34554;

	class ODKKAPPADGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ODKKAPPADGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ODKKAPPADGE*>**)UnitySDK::FromName("", "ODKKAPPADGE")->GetStaticField(0x13C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODKKAPPADGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKKAPPADGE*))((::PBYTE)hIl2Cpp + ODKKAPPADGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKKAPPADGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ODKKAPPADGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ODKKAPPADGE*>*(*)())((::PBYTE)hIl2Cpp + ODKKAPPADGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODKKAPPADGE* Clone()
		{
			return ((::ODKKAPPADGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODKKAPPADGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODKKAPPADGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODKKAPPADGE*))((::PBYTE)hIl2Cpp + ODKKAPPADGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODKKAPPADGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODKKAPPADGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKKAPPADGE*))((::PBYTE)hIl2Cpp + ODKKAPPADGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODKKAPPADGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

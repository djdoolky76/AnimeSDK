#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILHOOGLKAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NILHOOGLKAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB08F00)
#define NILHOOGLKAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB08FA0)
#define NILHOOGLKAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB08BF0)
#define NILHOOGLKAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB08BC0)
#define NILHOOGLKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB08BB0)
#define NILHOOGLKAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB08D00)
#define NILHOOGLKAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB08C30)
#define NILHOOGLKAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB08E60)
#define NILHOOGLKAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB08B70)
#define NILHOOGLKAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB08F50)
#define NILHOOGLKAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB08F20)
#define NILHOOGLKAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB08BA0)
#define NILHOOGLKAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB08E90)
#define NILHOOGLKAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB08EF0)

inline static constexpr unsigned int NILHOOGLKAP_TypeDefinitionIndex = 32799;

	class NILHOOGLKAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NILHOOGLKAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NILHOOGLKAP*>**)UnitySDK::FromName("", "NILHOOGLKAP")->GetStaticField(0x68430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NILHOOGLKAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILHOOGLKAP*))((::PBYTE)hIl2Cpp + NILHOOGLKAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILHOOGLKAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NILHOOGLKAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NILHOOGLKAP*>*(*)())((::PBYTE)hIl2Cpp + NILHOOGLKAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NILHOOGLKAP* Clone()
		{
			return ((::NILHOOGLKAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NILHOOGLKAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NILHOOGLKAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NILHOOGLKAP*))((::PBYTE)hIl2Cpp + NILHOOGLKAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NILHOOGLKAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NILHOOGLKAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILHOOGLKAP*))((::PBYTE)hIl2Cpp + NILHOOGLKAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NILHOOGLKAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

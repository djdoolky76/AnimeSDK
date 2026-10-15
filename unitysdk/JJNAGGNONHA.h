#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJNAGGNONHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJNAGGNONHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E735290)
#define JJNAGGNONHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E735330)
#define JJNAGGNONHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E734F80)
#define JJNAGGNONHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E734F50)
#define JJNAGGNONHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E734F40)
#define JJNAGGNONHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E735090)
#define JJNAGGNONHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E734FC0)
#define JJNAGGNONHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7351F0)
#define JJNAGGNONHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E734F00)
#define JJNAGGNONHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7352E0)
#define JJNAGGNONHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7352B0)
#define JJNAGGNONHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E734F30)
#define JJNAGGNONHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E735220)
#define JJNAGGNONHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E735280)

inline static constexpr unsigned int JJNAGGNONHA_TypeDefinitionIndex = 34692;

	class JJNAGGNONHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JJNAGGNONHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJNAGGNONHA*>**)UnitySDK::FromName("", "JJNAGGNONHA")->GetStaticField(0x62C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJNAGGNONHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJNAGGNONHA*))((::PBYTE)hIl2Cpp + JJNAGGNONHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNAGGNONHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJNAGGNONHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJNAGGNONHA*>*(*)())((::PBYTE)hIl2Cpp + JJNAGGNONHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJNAGGNONHA* Clone()
		{
			return ((::JJNAGGNONHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJNAGGNONHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJNAGGNONHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJNAGGNONHA*))((::PBYTE)hIl2Cpp + JJNAGGNONHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJNAGGNONHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJNAGGNONHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJNAGGNONHA*))((::PBYTE)hIl2Cpp + JJNAGGNONHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJNAGGNONHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

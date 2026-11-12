#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFIEAIJBHIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFIEAIJBHIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F571A80)
#define EFIEAIJBHIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F571B20)
#define EFIEAIJBHIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F571720)
#define EFIEAIJBHIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5716F0)
#define EFIEAIJBHIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5716E0)
#define EFIEAIJBHIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F571880)
#define EFIEAIJBHIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F571790)
#define EFIEAIJBHIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5719E0)
#define EFIEAIJBHIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F571670)
#define EFIEAIJBHIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F571AD0)
#define EFIEAIJBHIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F571AA0)
#define EFIEAIJBHIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5716D0)
#define EFIEAIJBHIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F571A10)
#define EFIEAIJBHIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F571A70)

inline static constexpr unsigned int EFIEAIJBHIB_TypeDefinitionIndex = 30625;

	class EFIEAIJBHIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EFIEAIJBHIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFIEAIJBHIB*>**)UnitySDK::FromName("", "EFIEAIJBHIB")->GetStaticField(0x52950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFIEAIJBHIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFIEAIJBHIB*))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFIEAIJBHIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFIEAIJBHIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFIEAIJBHIB*>*(*)())((::PBYTE)hIl2Cpp + EFIEAIJBHIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFIEAIJBHIB* Clone()
		{
			return ((::EFIEAIJBHIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFIEAIJBHIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFIEAIJBHIB*))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFIEAIJBHIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFIEAIJBHIB*))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFIEAIJBHIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

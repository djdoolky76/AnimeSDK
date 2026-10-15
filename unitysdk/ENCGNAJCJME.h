#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENCGNAJCJME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENCGNAJCJME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2BC5B0)
#define ENCGNAJCJME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BC650)
#define ENCGNAJCJME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2BC2A0)
#define ENCGNAJCJME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2BC270)
#define ENCGNAJCJME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BC260)
#define ENCGNAJCJME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2BC3B0)
#define ENCGNAJCJME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2BC2E0)
#define ENCGNAJCJME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2BC510)
#define ENCGNAJCJME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2BC220)
#define ENCGNAJCJME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2BC600)
#define ENCGNAJCJME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2BC5D0)
#define ENCGNAJCJME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2BC250)
#define ENCGNAJCJME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2BC540)
#define ENCGNAJCJME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2BC5A0)

inline static constexpr unsigned int ENCGNAJCJME_TypeDefinitionIndex = 30204;

	class ENCGNAJCJME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ENCGNAJCJME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENCGNAJCJME*>**)UnitySDK::FromName("", "ENCGNAJCJME")->GetStaticField(0x44460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENCGNAJCJME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENCGNAJCJME*))((::PBYTE)hIl2Cpp + ENCGNAJCJME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCGNAJCJME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENCGNAJCJME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENCGNAJCJME*>*(*)())((::PBYTE)hIl2Cpp + ENCGNAJCJME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENCGNAJCJME* Clone()
		{
			return ((::ENCGNAJCJME*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENCGNAJCJME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENCGNAJCJME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENCGNAJCJME*))((::PBYTE)hIl2Cpp + ENCGNAJCJME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENCGNAJCJME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENCGNAJCJME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENCGNAJCJME*))((::PBYTE)hIl2Cpp + ENCGNAJCJME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENCGNAJCJME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

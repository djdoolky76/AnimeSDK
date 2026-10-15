#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFGLGFMMNJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFGLGFMMNJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E261B70)
#define EFGLGFMMNJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E261C10)
#define EFGLGFMMNJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E261860)
#define EFGLGFMMNJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E261830)
#define EFGLGFMMNJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E261820)
#define EFGLGFMMNJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E261970)
#define EFGLGFMMNJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2618A0)
#define EFGLGFMMNJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E261AD0)
#define EFGLGFMMNJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2617E0)
#define EFGLGFMMNJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E261BC0)
#define EFGLGFMMNJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E261B90)
#define EFGLGFMMNJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E261810)
#define EFGLGFMMNJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E261B00)
#define EFGLGFMMNJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E261B60)

inline static constexpr unsigned int EFGLGFMMNJI_TypeDefinitionIndex = 28428;

	class EFGLGFMMNJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EFGLGFMMNJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFGLGFMMNJI*>**)UnitySDK::FromName("", "EFGLGFMMNJI")->GetStaticField(0x46E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFGLGFMMNJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFGLGFMMNJI*))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGLGFMMNJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFGLGFMMNJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFGLGFMMNJI*>*(*)())((::PBYTE)hIl2Cpp + EFGLGFMMNJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFGLGFMMNJI* Clone()
		{
			return ((::EFGLGFMMNJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFGLGFMMNJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFGLGFMMNJI*))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFGLGFMMNJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFGLGFMMNJI*))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFGLGFMMNJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

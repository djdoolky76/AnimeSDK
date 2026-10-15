#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABIFJNADLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DABIFJNADLI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11C810)
#define DABIFJNADLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11C8B0)
#define DABIFJNADLI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11C500)
#define DABIFJNADLI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11C4D0)
#define DABIFJNADLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11C4C0)
#define DABIFJNADLI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11C610)
#define DABIFJNADLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11C540)
#define DABIFJNADLI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11C770)
#define DABIFJNADLI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11C480)
#define DABIFJNADLI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11C860)
#define DABIFJNADLI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11C830)
#define DABIFJNADLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11C4B0)
#define DABIFJNADLI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11C7A0)
#define DABIFJNADLI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11C800)

inline static constexpr unsigned int DABIFJNADLI_TypeDefinitionIndex = 32030;

	class DABIFJNADLI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DABIFJNADLI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DABIFJNADLI*>**)UnitySDK::FromName("", "DABIFJNADLI")->GetStaticField(0x20BB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DABIFJNADLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABIFJNADLI*))((::PBYTE)hIl2Cpp + DABIFJNADLI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABIFJNADLI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DABIFJNADLI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DABIFJNADLI*>*(*)())((::PBYTE)hIl2Cpp + DABIFJNADLI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DABIFJNADLI* Clone()
		{
			return ((::DABIFJNADLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DABIFJNADLI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DABIFJNADLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DABIFJNADLI*))((::PBYTE)hIl2Cpp + DABIFJNADLI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DABIFJNADLI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DABIFJNADLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABIFJNADLI*))((::PBYTE)hIl2Cpp + DABIFJNADLI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DABIFJNADLI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

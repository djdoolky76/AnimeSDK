#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHPNIEAMLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPHPNIEAMLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCF3C10)
#define LPHPNIEAMLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCF3CB0)
#define LPHPNIEAMLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCF38B0)
#define LPHPNIEAMLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCF3880)
#define LPHPNIEAMLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCF3870)
#define LPHPNIEAMLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCF3A10)
#define LPHPNIEAMLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCF3920)
#define LPHPNIEAMLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCF3B70)
#define LPHPNIEAMLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCF3800)
#define LPHPNIEAMLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCF3C60)
#define LPHPNIEAMLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCF3C30)
#define LPHPNIEAMLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCF3860)
#define LPHPNIEAMLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCF3BA0)
#define LPHPNIEAMLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCF3C00)

inline static constexpr unsigned int LPHPNIEAMLL_TypeDefinitionIndex = 30598;

	class LPHPNIEAMLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LPHPNIEAMLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPHPNIEAMLL*>**)UnitySDK::FromName("", "LPHPNIEAMLL")->GetStaticField(0x48620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPHPNIEAMLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHPNIEAMLL*))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPHPNIEAMLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPHPNIEAMLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPHPNIEAMLL*>*(*)())((::PBYTE)hIl2Cpp + LPHPNIEAMLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPHPNIEAMLL* Clone()
		{
			return ((::LPHPNIEAMLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPHPNIEAMLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHPNIEAMLL*))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPHPNIEAMLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHPNIEAMLL*))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPHPNIEAMLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

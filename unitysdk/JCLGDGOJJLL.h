#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCLGDGOJJLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCLGDGOJJLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E703E90)
#define JCLGDGOJJLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E703F30)
#define JCLGDGOJJLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E703B80)
#define JCLGDGOJJLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E703B50)
#define JCLGDGOJJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E703B40)
#define JCLGDGOJJLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E703C90)
#define JCLGDGOJJLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E703BC0)
#define JCLGDGOJJLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E703DF0)
#define JCLGDGOJJLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E703B00)
#define JCLGDGOJJLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E703EE0)
#define JCLGDGOJJLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E703EB0)
#define JCLGDGOJJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E703B30)
#define JCLGDGOJJLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E703E20)
#define JCLGDGOJJLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E703E80)

inline static constexpr unsigned int JCLGDGOJJLL_TypeDefinitionIndex = 27485;

	class JCLGDGOJJLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JCLGDGOJJLL")->GetStaticField(0x5D900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCLGDGOJJLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLGDGOJJLL*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JCLGDGOJJLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCLGDGOJJLL* Clone()
		{
			return ((::JCLGDGOJJLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCLGDGOJJLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCLGDGOJJLL*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCLGDGOJJLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLGDGOJJLL*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

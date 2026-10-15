#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGEMJLFIHHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGEMJLFIHHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E34DBF0)
#define FGEMJLFIHHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34DC90)
#define FGEMJLFIHHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E34D8E0)
#define FGEMJLFIHHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E34D8B0)
#define FGEMJLFIHHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34D8A0)
#define FGEMJLFIHHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E34D9F0)
#define FGEMJLFIHHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E34D920)
#define FGEMJLFIHHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E34DB50)
#define FGEMJLFIHHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E34D860)
#define FGEMJLFIHHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E34DC40)
#define FGEMJLFIHHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E34DC10)
#define FGEMJLFIHHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E34D890)
#define FGEMJLFIHHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E34DB80)
#define FGEMJLFIHHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E34DBE0)

inline static constexpr unsigned int FGEMJLFIHHL_TypeDefinitionIndex = 28418;

	class FGEMJLFIHHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FGEMJLFIHHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGEMJLFIHHL*>**)UnitySDK::FromName("", "FGEMJLFIHHL")->GetStaticField(0x55140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGEMJLFIHHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGEMJLFIHHL*))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGEMJLFIHHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGEMJLFIHHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGEMJLFIHHL*>*(*)())((::PBYTE)hIl2Cpp + FGEMJLFIHHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGEMJLFIHHL* Clone()
		{
			return ((::FGEMJLFIHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGEMJLFIHHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGEMJLFIHHL*))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGEMJLFIHHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGEMJLFIHHL*))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGEMJLFIHHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

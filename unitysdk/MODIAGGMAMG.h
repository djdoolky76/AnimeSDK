#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MODIAGGMAMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MODIAGGMAMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA78310)
#define MODIAGGMAMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA783B0)
#define MODIAGGMAMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA78000)
#define MODIAGGMAMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA77FD0)
#define MODIAGGMAMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA77FC0)
#define MODIAGGMAMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA78110)
#define MODIAGGMAMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA78040)
#define MODIAGGMAMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA78270)
#define MODIAGGMAMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA77F80)
#define MODIAGGMAMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA78360)
#define MODIAGGMAMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA78330)
#define MODIAGGMAMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA77FB0)
#define MODIAGGMAMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA782A0)
#define MODIAGGMAMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA78300)

inline static constexpr unsigned int MODIAGGMAMG_TypeDefinitionIndex = 34666;

	class MODIAGGMAMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MODIAGGMAMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MODIAGGMAMG*>**)UnitySDK::FromName("", "MODIAGGMAMG")->GetStaticField(0x5A550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MODIAGGMAMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MODIAGGMAMG*))((::PBYTE)hIl2Cpp + MODIAGGMAMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MODIAGGMAMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MODIAGGMAMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MODIAGGMAMG*>*(*)())((::PBYTE)hIl2Cpp + MODIAGGMAMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MODIAGGMAMG* Clone()
		{
			return ((::MODIAGGMAMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MODIAGGMAMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MODIAGGMAMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MODIAGGMAMG*))((::PBYTE)hIl2Cpp + MODIAGGMAMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MODIAGGMAMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MODIAGGMAMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MODIAGGMAMG*))((::PBYTE)hIl2Cpp + MODIAGGMAMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MODIAGGMAMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

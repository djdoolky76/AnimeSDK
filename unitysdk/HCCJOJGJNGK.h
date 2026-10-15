#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCCJOJGJNGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCCJOJGJNGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E507BF0)
#define HCCJOJGJNGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E507C90)
#define HCCJOJGJNGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E507890)
#define HCCJOJGJNGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E507860)
#define HCCJOJGJNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E507850)
#define HCCJOJGJNGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5079F0)
#define HCCJOJGJNGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E507900)
#define HCCJOJGJNGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E507B50)
#define HCCJOJGJNGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5077E0)
#define HCCJOJGJNGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E507C40)
#define HCCJOJGJNGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E507C10)
#define HCCJOJGJNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E507840)
#define HCCJOJGJNGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E507B80)
#define HCCJOJGJNGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E507BE0)

inline static constexpr unsigned int HCCJOJGJNGK_TypeDefinitionIndex = 28627;

	class HCCJOJGJNGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HCCJOJGJNGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCCJOJGJNGK*>**)UnitySDK::FromName("", "HCCJOJGJNGK")->GetStaticField(0x2A290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCCJOJGJNGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCCJOJGJNGK*))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCCJOJGJNGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCCJOJGJNGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCCJOJGJNGK*>*(*)())((::PBYTE)hIl2Cpp + HCCJOJGJNGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCCJOJGJNGK* Clone()
		{
			return ((::HCCJOJGJNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCCJOJGJNGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCCJOJGJNGK*))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCCJOJGJNGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCCJOJGJNGK*))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCCJOJGJNGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

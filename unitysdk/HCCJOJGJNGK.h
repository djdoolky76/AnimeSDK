#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCCJOJGJNGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCCJOJGJNGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E535200)
#define HCCJOJGJNGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5352A0)
#define HCCJOJGJNGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E534EA0)
#define HCCJOJGJNGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E534E70)
#define HCCJOJGJNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E534E60)
#define HCCJOJGJNGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E535000)
#define HCCJOJGJNGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E534F10)
#define HCCJOJGJNGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E535160)
#define HCCJOJGJNGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E534DF0)
#define HCCJOJGJNGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E535250)
#define HCCJOJGJNGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E535220)
#define HCCJOJGJNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E534E50)
#define HCCJOJGJNGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E535190)
#define HCCJOJGJNGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5351F0)

inline static constexpr unsigned int HCCJOJGJNGK_TypeDefinitionIndex = 28627;

	class HCCJOJGJNGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCCJOJGJNGK")->GetStaticField(0x2F720);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCCJOJGJNGK_JJGHOBBFNJD_OFFSET))();
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

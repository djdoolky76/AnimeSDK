#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGOBMEOAEBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGOBMEOAEBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83BE20)
#define KGOBMEOAEBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83BFE0)
#define KGOBMEOAEBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83B9B0)
#define KGOBMEOAEBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83B980)
#define KGOBMEOAEBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83B970)
#define KGOBMEOAEBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83BB50)
#define KGOBMEOAEBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83BA40)
#define KGOBMEOAEBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83BCD0)
#define KGOBMEOAEBL_GLEEAFEHBHL_OFFSET UNITYSDK_OFFSET(0x1E83BA20)
#define KGOBMEOAEBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83B900)
#define KGOBMEOAEBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83BE80)
#define KGOBMEOAEBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83BE50)
#define KGOBMEOAEBL_NIDFCNIKJLJ_OFFSET UNITYSDK_OFFSET(0x1E83BA30)
#define KGOBMEOAEBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83B960)
#define KGOBMEOAEBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83BD00)
#define KGOBMEOAEBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83BD60)

inline static constexpr unsigned int KGOBMEOAEBL_TypeDefinitionIndex = 28317;

	class KGOBMEOAEBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean GKDKOFFHGKM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KGOBMEOAEBL")->GetStaticField(0x168D0);
		}

		// static const ::System::Object PDEBIOLECAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGOBMEOAEBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGOBMEOAEBL*))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGOBMEOAEBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KGOBMEOAEBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGOBMEOAEBL* Clone()
		{
			return ((::KGOBMEOAEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_CLONE_OFFSET))(this);
		}

		::System::Boolean GLEEAFEHBHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_GLEEAFEHBHL_OFFSET))(this);
		}

		::System::Void NIDFCNIKJLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_NIDFCNIKJLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGOBMEOAEBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGOBMEOAEBL*))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGOBMEOAEBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGOBMEOAEBL*))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGOBMEOAEBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

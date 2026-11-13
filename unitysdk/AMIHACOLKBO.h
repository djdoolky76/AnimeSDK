#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMIHACOLKBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMIHACOLKBO_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x20030640)
#define AMIHACOLKBO_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x20030650)
#define AMIHACOLKBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20030980)
#define AMIHACOLKBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x20030C50)
#define AMIHACOLKBO_CLONE_OFFSET UNITYSDK_OFFSET(0x200305D0)
#define AMIHACOLKBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200305A0)
#define AMIHACOLKBO_CTOR_OFFSET UNITYSDK_OFFSET(0x20030590)
#define AMIHACOLKBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20030740)
#define AMIHACOLKBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20030660)
#define AMIHACOLKBO_FEBAAKOEDBM_OFFSET UNITYSDK_OFFSET(0x20030630)
#define AMIHACOLKBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20030810)
#define AMIHACOLKBO_HHNOCOEPMEH_OFFSET UNITYSDK_OFFSET(0x20030620)
#define AMIHACOLKBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20030550)
#define AMIHACOLKBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20030AD0)
#define AMIHACOLKBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20030A90)
#define AMIHACOLKBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20030580)
#define AMIHACOLKBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20030840)
#define AMIHACOLKBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x200308A0)

inline static constexpr unsigned int AMIHACOLKBO_TypeDefinitionIndex = 29689;

	class AMIHACOLKBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 PPCKJOJIPEK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AMIHACOLKBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMIHACOLKBO*>**)UnitySDK::FromName("", "AMIHACOLKBO")->GetStaticField(0x3A940);
		}

		// static const ::System::Object IGBPOIIKLCM; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMIHACOLKBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMIHACOLKBO*))((::PBYTE)hIl2Cpp + AMIHACOLKBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIHACOLKBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMIHACOLKBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMIHACOLKBO*>*(*)())((::PBYTE)hIl2Cpp + AMIHACOLKBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMIHACOLKBO* Clone()
		{
			return ((::AMIHACOLKBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HHNOCOEPMEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_HHNOCOEPMEH_OFFSET))(this);
		}

		::System::Void FEBAAKOEDBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMIHACOLKBO_FEBAAKOEDBM_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMIHACOLKBO_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMIHACOLKBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMIHACOLKBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMIHACOLKBO*))((::PBYTE)hIl2Cpp + AMIHACOLKBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMIHACOLKBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMIHACOLKBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMIHACOLKBO*))((::PBYTE)hIl2Cpp + AMIHACOLKBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMIHACOLKBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

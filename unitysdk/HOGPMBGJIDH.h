#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHILEFFPFL.h"
#include "unitysdk/System/Object.h"
class HOGPMBGJIDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOGPMBGJIDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BB260)
#define HOGPMBGJIDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB4C0)
#define HOGPMBGJIDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BAE90)
#define HOGPMBGJIDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BAE60)
#define HOGPMBGJIDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BAE50)
#define HOGPMBGJIDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BAFC0)
#define HOGPMBGJIDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BAEF0)
#define HOGPMBGJIDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BB130)
#define HOGPMBGJIDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BAE10)
#define HOGPMBGJIDH_KELHNBBBLHA_OFFSET UNITYSDK_OFFSET(0x1E5BAEE0)
#define HOGPMBGJIDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BB360)
#define HOGPMBGJIDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BB330)
#define HOGPMBGJIDH_NEICKKPFHOK_OFFSET UNITYSDK_OFFSET(0x1E5BAED0)
#define HOGPMBGJIDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BAE40)
#define HOGPMBGJIDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BB160)
#define HOGPMBGJIDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BB1C0)

inline static constexpr unsigned int HOGPMBGJIDH_TypeDefinitionIndex = 30410;

	class HOGPMBGJIDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DMHILEFFPFL KOCAPDILNCE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HOGPMBGJIDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOGPMBGJIDH*>**)UnitySDK::FromName("", "HOGPMBGJIDH")->GetStaticField(0x3D2A0);
		}

		// static const ::System::Object LEBHDCNOCAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOGPMBGJIDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOGPMBGJIDH*))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGPMBGJIDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOGPMBGJIDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOGPMBGJIDH*>*(*)())((::PBYTE)hIl2Cpp + HOGPMBGJIDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOGPMBGJIDH* Clone()
		{
			return ((::HOGPMBGJIDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_CLONE_OFFSET))(this);
		}

		::DMHILEFFPFL NEICKKPFHOK()
		{
			return ((::DMHILEFFPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_NEICKKPFHOK_OFFSET))(this);
		}

		::System::Void KELHNBBBLHA(::DMHILEFFPFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHILEFFPFL))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_KELHNBBBLHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOGPMBGJIDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOGPMBGJIDH*))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOGPMBGJIDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOGPMBGJIDH*))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOGPMBGJIDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDOMJOBANO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKDOMJOBANO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDA75E0)
#define MKDOMJOBANO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA7820)
#define MKDOMJOBANO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDA70E0)
#define MKDOMJOBANO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDA70A0)
#define MKDOMJOBANO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA7090)
#define MKDOMJOBANO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDA7290)
#define MKDOMJOBANO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDA7190)
#define MKDOMJOBANO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDA7430)
#define MKDOMJOBANO_JCPCNNHDFFF_OFFSET UNITYSDK_OFFSET(0x1FDA7130)
#define MKDOMJOBANO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDA7050)
#define MKDOMJOBANO_LGIFCDCIBMF_OFFSET UNITYSDK_OFFSET(0x1FDA7140)
#define MKDOMJOBANO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDA7690)
#define MKDOMJOBANO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDA7650)
#define MKDOMJOBANO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDA7080)
#define MKDOMJOBANO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDA74F0)
#define MKDOMJOBANO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDA7550)

inline static constexpr unsigned int MKDOMJOBANO_TypeDefinitionIndex = 33113;

	class MKDOMJOBANO : public ::System::Object
	{
	public:
		::System::String* DDINDNFEBKH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKDOMJOBANO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKDOMJOBANO*>**)UnitySDK::FromName("", "MKDOMJOBANO")->GetStaticField(0x5B370);
		}

		// static const ::System::Object HICAGFIFOCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKDOMJOBANO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDOMJOBANO*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDOMJOBANO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKDOMJOBANO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKDOMJOBANO*>*(*)())((::PBYTE)hIl2Cpp + MKDOMJOBANO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKDOMJOBANO* Clone()
		{
			return ((::MKDOMJOBANO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_CLONE_OFFSET))(this);
		}

		::System::String* JCPCNNHDFFF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_JCPCNNHDFFF_OFFSET))(this);
		}

		::System::Void LGIFCDCIBMF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_LGIFCDCIBMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKDOMJOBANO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKDOMJOBANO*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKDOMJOBANO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDOMJOBANO*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKDOMJOBANO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

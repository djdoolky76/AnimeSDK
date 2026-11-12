#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLOFPKHFPJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLOFPKHFPJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F153E30)
#define OLOFPKHFPJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F154100)
#define OLOFPKHFPJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F153A80)
#define OLOFPKHFPJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F153A50)
#define OLOFPKHFPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F153A40)
#define OLOFPKHFPJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F153BF0)
#define OLOFPKHFPJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F153B10)
#define OLOFPKHFPJL_FLKPPAKPLHM_OFFSET UNITYSDK_OFFSET(0x1F153AD0)
#define OLOFPKHFPJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F153CC0)
#define OLOFPKHFPJL_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1F153AF0)
#define OLOFPKHFPJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F153A00)
#define OLOFPKHFPJL_MBCGMKOAHIM_OFFSET UNITYSDK_OFFSET(0x1F153AE0)
#define OLOFPKHFPJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F153F80)
#define OLOFPKHFPJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F153F40)
#define OLOFPKHFPJL_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1F153B00)
#define OLOFPKHFPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F153A30)
#define OLOFPKHFPJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F153CF0)
#define OLOFPKHFPJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F153D50)

inline static constexpr unsigned int OLOFPKHFPJL_TypeDefinitionIndex = 27509;

	class OLOFPKHFPJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJHOJKFPMLL; // 0x18
		::System::UInt32 ONKGPIBKMPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OLOFPKHFPJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLOFPKHFPJL*>**)UnitySDK::FromName("", "OLOFPKHFPJL")->GetStaticField(0x1FBD0);
		}

		// static const ::System::Object KABHDCOPEGH; // 0x0
		// static const ::System::Object EMAAFDGEFOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLOFPKHFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLOFPKHFPJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLOFPKHFPJL*>*(*)())((::PBYTE)hIl2Cpp + OLOFPKHFPJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLOFPKHFPJL* Clone()
		{
			return ((::OLOFPKHFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FLKPPAKPLHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_FLKPPAKPLHM_OFFSET))(this);
		}

		::System::Void MBCGMKOAHIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MBCGMKOAHIM_OFFSET))(this, a1);
		}

		::System::UInt32 HADLEOMNCJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_HADLEOMNCJC_OFFSET))(this);
		}

		::System::Void MKBAHHJODPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MKBAHHJODPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLOFPKHFPJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLOFPKHFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

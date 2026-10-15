#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJDPLLIJDNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJDPLLIJDNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B1FE0)
#define EJDPLLIJDNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2270)
#define EJDPLLIJDNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B1BB0)
#define EJDPLLIJDNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B1B80)
#define EJDPLLIJDNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B1B70)
#define EJDPLLIJDNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B1D40)
#define EJDPLLIJDNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B1C40)
#define EJDPLLIJDNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B1EB0)
#define EJDPLLIJDNK_GJLDLNIPCPE_OFFSET UNITYSDK_OFFSET(0x1E2B1C20)
#define EJDPLLIJDNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B1B00)
#define EJDPLLIJDNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B2110)
#define EJDPLLIJDNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B20D0)
#define EJDPLLIJDNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B1B60)
#define EJDPLLIJDNK_PFFBAACGNNH_OFFSET UNITYSDK_OFFSET(0x1E2B1C30)
#define EJDPLLIJDNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B1EF0)
#define EJDPLLIJDNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B1F50)

inline static constexpr unsigned int EJDPLLIJDNK_TypeDefinitionIndex = 27192;

	class EJDPLLIJDNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 KEFCHELCOMG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJDPLLIJDNK")->GetStaticField(0x4B020);
		}

		// static const ::System::Object PAOGLMLOJHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJDPLLIJDNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJDPLLIJDNK*))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJDPLLIJDNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJDPLLIJDNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJDPLLIJDNK* Clone()
		{
			return ((::EJDPLLIJDNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_CLONE_OFFSET))(this);
		}

		::System::UInt64 GJLDLNIPCPE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_GJLDLNIPCPE_OFFSET))(this);
		}

		::System::Void PFFBAACGNNH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_PFFBAACGNNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJDPLLIJDNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJDPLLIJDNK*))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJDPLLIJDNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJDPLLIJDNK*))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJDPLLIJDNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

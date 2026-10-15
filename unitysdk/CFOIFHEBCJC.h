#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFOIFHEBCJC;
class LPADDGPLIKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFOIFHEBCJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07AC20)
#define CFOIFHEBCJC_CANFDLPDPJP_OFFSET UNITYSDK_OFFSET(0x1E07A690)
#define CFOIFHEBCJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07AE70)
#define CFOIFHEBCJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07A600)
#define CFOIFHEBCJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07A590)
#define CFOIFHEBCJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07A580)
#define CFOIFHEBCJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07A810)
#define CFOIFHEBCJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07A6A0)
#define CFOIFHEBCJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07AAE0)
#define CFOIFHEBCJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07A540)
#define CFOIFHEBCJC_LCDMABPIMNM_OFFSET UNITYSDK_OFFSET(0x1E07A680)
#define CFOIFHEBCJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07ACF0)
#define CFOIFHEBCJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07AC80)
#define CFOIFHEBCJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07A570)
#define CFOIFHEBCJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07AB30)
#define CFOIFHEBCJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07AB90)

inline static constexpr unsigned int CFOIFHEBCJC_TypeDefinitionIndex = 33647;

	class CFOIFHEBCJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LPADDGPLIKK* PNMHKGKFPLF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CFOIFHEBCJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFOIFHEBCJC*>**)UnitySDK::FromName("", "CFOIFHEBCJC")->GetStaticField(0x12730);
		}

		// static const ::System::Object DMMPMIMOGDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFOIFHEBCJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFOIFHEBCJC*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFOIFHEBCJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFOIFHEBCJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFOIFHEBCJC*>*(*)())((::PBYTE)hIl2Cpp + CFOIFHEBCJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFOIFHEBCJC* Clone()
		{
			return ((::CFOIFHEBCJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_CLONE_OFFSET))(this);
		}

		::LPADDGPLIKK* LCDMABPIMNM()
		{
			return ((::LPADDGPLIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_LCDMABPIMNM_OFFSET))(this);
		}

		::System::Void CANFDLPDPJP(::LPADDGPLIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPADDGPLIKK*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_CANFDLPDPJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFOIFHEBCJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFOIFHEBCJC*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFOIFHEBCJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFOIFHEBCJC*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFOIFHEBCJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLEKMNPBNKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLEKMNPBNKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9ED80)
#define PLEKMNPBNKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9F050)
#define PLEKMNPBNKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9E9D0)
#define PLEKMNPBNKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9E9A0)
#define PLEKMNPBNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9E990)
#define PLEKMNPBNKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9EB40)
#define PLEKMNPBNKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9EA60)
#define PLEKMNPBNKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9EC10)
#define PLEKMNPBNKG_GLCNDPKHHAK_OFFSET UNITYSDK_OFFSET(0x1DF9EA30)
#define PLEKMNPBNKG_ICOJDCCJMEM_OFFSET UNITYSDK_OFFSET(0x1DF9EA40)
#define PLEKMNPBNKG_JCLAIBFMENP_OFFSET UNITYSDK_OFFSET(0x1DF9EA50)
#define PLEKMNPBNKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9E950)
#define PLEKMNPBNKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9EED0)
#define PLEKMNPBNKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9EE90)
#define PLEKMNPBNKG_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x1DF9EA20)
#define PLEKMNPBNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9E980)
#define PLEKMNPBNKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9EC40)
#define PLEKMNPBNKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9ECA0)

inline static constexpr unsigned int PLEKMNPBNKG_TypeDefinitionIndex = 26354;

	class PLEKMNPBNKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HEKOAJFHMJJ; // 0x18
		::System::UInt32 IMJCALAFOMD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PLEKMNPBNKG")->GetStaticField(0x4B8D0);
		}

		// static const ::System::Object DJAHPPOHHCF; // 0x0
		// static const ::System::Object ADFLIGDHDDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLEKMNPBNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLEKMNPBNKG*))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLEKMNPBNKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PLEKMNPBNKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLEKMNPBNKG* Clone()
		{
			return ((::PLEKMNPBNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 NGOHCBGKBKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_NGOHCBGKBKN_OFFSET))(this);
		}

		::System::Void GLCNDPKHHAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_GLCNDPKHHAK_OFFSET))(this, a1);
		}

		::System::UInt32 ICOJDCCJMEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_ICOJDCCJMEM_OFFSET))(this);
		}

		::System::Void JCLAIBFMENP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_JCLAIBFMENP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLEKMNPBNKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLEKMNPBNKG*))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLEKMNPBNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLEKMNPBNKG*))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLEKMNPBNKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

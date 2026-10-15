#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKOHCHDMNOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKOHCHDMNOB_BLPGEIBMOBK_OFFSET UNITYSDK_OFFSET(0x1EA30560)
#define MKOHCHDMNOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA308F0)
#define MKOHCHDMNOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA30B30)
#define MKOHCHDMNOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA30520)
#define MKOHCHDMNOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA304F0)
#define MKOHCHDMNOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA304E0)
#define MKOHCHDMNOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA30650)
#define MKOHCHDMNOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA30580)
#define MKOHCHDMNOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA307C0)
#define MKOHCHDMNOB_HFEDEOGFLLB_OFFSET UNITYSDK_OFFSET(0x1EA30570)
#define MKOHCHDMNOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA304A0)
#define MKOHCHDMNOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA309D0)
#define MKOHCHDMNOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA309A0)
#define MKOHCHDMNOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA304D0)
#define MKOHCHDMNOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA307F0)
#define MKOHCHDMNOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA30850)

inline static constexpr unsigned int MKOHCHDMNOB_TypeDefinitionIndex = 27395;

	class MKOHCHDMNOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 PPLBKEKIJFN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKOHCHDMNOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKOHCHDMNOB*>**)UnitySDK::FromName("", "MKOHCHDMNOB")->GetStaticField(0x55570);
		}

		// static const ::System::Object OHEBCLEOLEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKOHCHDMNOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKOHCHDMNOB*))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKOHCHDMNOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKOHCHDMNOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKOHCHDMNOB*>*(*)())((::PBYTE)hIl2Cpp + MKOHCHDMNOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKOHCHDMNOB* Clone()
		{
			return ((::MKOHCHDMNOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_CLONE_OFFSET))(this);
		}

		::System::Int32 BLPGEIBMOBK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_BLPGEIBMOBK_OFFSET))(this);
		}

		::System::Void HFEDEOGFLLB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_HFEDEOGFLLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKOHCHDMNOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKOHCHDMNOB*))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKOHCHDMNOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKOHCHDMNOB*))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKOHCHDMNOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

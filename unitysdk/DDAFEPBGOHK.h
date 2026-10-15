#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAFEPBGOHK;
class FDBDLBAPDBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDAFEPBGOHK_BJFDHLBAOPD_OFFSET UNITYSDK_OFFSET(0x1E178A50)
#define DDAFEPBGOHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E178F40)
#define DDAFEPBGOHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E179260)
#define DDAFEPBGOHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1789B0)
#define DDAFEPBGOHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E178940)
#define DDAFEPBGOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E178930)
#define DDAFEPBGOHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E178BF0)
#define DDAFEPBGOHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E178A70)
#define DDAFEPBGOHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E178D70)
#define DDAFEPBGOHK_IHOIMOOAEEE_OFFSET UNITYSDK_OFFSET(0x1E178A30)
#define DDAFEPBGOHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1788F0)
#define DDAFEPBGOHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1790A0)
#define DDAFEPBGOHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E179010)
#define DDAFEPBGOHK_MKJGILCLJAP_OFFSET UNITYSDK_OFFSET(0x1E178A60)
#define DDAFEPBGOHK_NKICJALKDGG_OFFSET UNITYSDK_OFFSET(0x1E178A40)
#define DDAFEPBGOHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E178920)
#define DDAFEPBGOHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E178E00)
#define DDAFEPBGOHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E178E60)

inline static constexpr unsigned int DDAFEPBGOHK_TypeDefinitionIndex = 27473;

	class DDAFEPBGOHK : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* AGGPKBHPKPE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CEAHPOGMPMB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDAFEPBGOHK")->GetStaticField(0x2D220);
		}

		// static const ::System::Object EAIHKAPNKDA; // 0x0
		// static const ::System::Object LMODIONDKJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDAFEPBGOHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAFEPBGOHK*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAFEPBGOHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDAFEPBGOHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDAFEPBGOHK* Clone()
		{
			return ((::DDAFEPBGOHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_CLONE_OFFSET))(this);
		}

		::System::UInt32 IHOIMOOAEEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_IHOIMOOAEEE_OFFSET))(this);
		}

		::System::Void NKICJALKDGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_NKICJALKDGG_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* BJFDHLBAOPD()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_BJFDHLBAOPD_OFFSET))(this);
		}

		::System::Void MKJGILCLJAP(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_MKJGILCLJAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDAFEPBGOHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDAFEPBGOHK*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDAFEPBGOHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAFEPBGOHK*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDAFEPBGOHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

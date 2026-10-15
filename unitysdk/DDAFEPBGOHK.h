#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAFEPBGOHK;
class FDBDLBAPDBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDAFEPBGOHK_BJFDHLBAOPD_OFFSET UNITYSDK_OFFSET(0x1E14B4E0)
#define DDAFEPBGOHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E14B9D0)
#define DDAFEPBGOHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14BCF0)
#define DDAFEPBGOHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E14B440)
#define DDAFEPBGOHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E14B3D0)
#define DDAFEPBGOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14B3C0)
#define DDAFEPBGOHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E14B680)
#define DDAFEPBGOHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E14B500)
#define DDAFEPBGOHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E14B800)
#define DDAFEPBGOHK_IHOIMOOAEEE_OFFSET UNITYSDK_OFFSET(0x1E14B4C0)
#define DDAFEPBGOHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E14B380)
#define DDAFEPBGOHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E14BB30)
#define DDAFEPBGOHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E14BAA0)
#define DDAFEPBGOHK_MKJGILCLJAP_OFFSET UNITYSDK_OFFSET(0x1E14B4F0)
#define DDAFEPBGOHK_NKICJALKDGG_OFFSET UNITYSDK_OFFSET(0x1E14B4D0)
#define DDAFEPBGOHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E14B3B0)
#define DDAFEPBGOHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E14B890)
#define DDAFEPBGOHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E14B8F0)

inline static constexpr unsigned int DDAFEPBGOHK_TypeDefinitionIndex = 27473;

	class DDAFEPBGOHK : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* AGGPKBHPKPE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CEAHPOGMPMB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DDAFEPBGOHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDAFEPBGOHK*>**)UnitySDK::FromName("", "DDAFEPBGOHK")->GetStaticField(0x25750);
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

		static ::Google::Protobuf::MessageParser_1<::DDAFEPBGOHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDAFEPBGOHK*>*(*)())((::PBYTE)hIl2Cpp + DDAFEPBGOHK_JJGHOBBFNJD_OFFSET))();
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLNEBBMMOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJLNEBBMMOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1B2F0)
#define BJLNEBBMMOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1B600)
#define BJLNEBBMMOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1AE70)
#define BJLNEBBMMOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1AE30)
#define BJLNEBBMMOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1AE20)
#define BJLNEBBMMOE_DJPFPJMHKHE_OFFSET UNITYSDK_OFFSET(0x1DF1AEC0)
#define BJLNEBBMMOE_ECNKBMOOAKL_OFFSET UNITYSDK_OFFSET(0x1DF1AEF0)
#define BJLNEBBMMOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1B010)
#define BJLNEBBMMOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1AF20)
#define BJLNEBBMMOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1B0F0)
#define BJLNEBBMMOE_HFPEAHDDOOD_OFFSET UNITYSDK_OFFSET(0x1DF1AEE0)
#define BJLNEBBMMOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1ADE0)
#define BJLNEBBMMOE_KCMAPJCFCJP_OFFSET UNITYSDK_OFFSET(0x1DF1AED0)
#define BJLNEBBMMOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1B460)
#define BJLNEBBMMOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1B410)
#define BJLNEBBMMOE_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1DF1AF00)
#define BJLNEBBMMOE_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1DF1AF10)
#define BJLNEBBMMOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1AE10)
#define BJLNEBBMMOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1B120)
#define BJLNEBBMMOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1B180)

inline static constexpr unsigned int BJLNEBBMMOE_TypeDefinitionIndex = 33634;

	class BJLNEBBMMOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LOEPIAFBCIJ; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DAFLDHJNIIH; // 0x1C
		::System::UInt32 MKOFJNDPGAP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BJLNEBBMMOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJLNEBBMMOE*>**)UnitySDK::FromName("", "BJLNEBBMMOE")->GetStaticField(0x59C60);
		}

		// static const ::System::Object GPIEHBNGOIH; // 0x0
		// static const ::System::Object ILFPDNIPLGL; // 0x0
		// static const ::System::Object OPKLCINAFJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJLNEBBMMOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJLNEBBMMOE*))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJLNEBBMMOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJLNEBBMMOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJLNEBBMMOE*>*(*)())((::PBYTE)hIl2Cpp + BJLNEBBMMOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJLNEBBMMOE* Clone()
		{
			return ((::BJLNEBBMMOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJPFPJMHKHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_DJPFPJMHKHE_OFFSET))(this);
		}

		::System::Void KCMAPJCFCJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_KCMAPJCFCJP_OFFSET))(this, a1);
		}

		::System::UInt32 HFPEAHDDOOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_HFPEAHDDOOD_OFFSET))(this);
		}

		::System::Void ECNKBMOOAKL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_ECNKBMOOAKL_OFFSET))(this, a1);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJLNEBBMMOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJLNEBBMMOE*))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJLNEBBMMOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJLNEBBMMOE*))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJLNEBBMMOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

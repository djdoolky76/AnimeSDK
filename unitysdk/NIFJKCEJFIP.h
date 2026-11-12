#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOGKOJCAFAE.h"
#include "unitysdk/System/Object.h"
class NIFJKCEJFIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIFJKCEJFIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F014170)
#define NIFJKCEJFIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F014410)
#define NIFJKCEJFIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F013D60)
#define NIFJKCEJFIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F013D20)
#define NIFJKCEJFIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F013D10)
#define NIFJKCEJFIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F013ED0)
#define NIFJKCEJFIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F013DF0)
#define NIFJKCEJFIP_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1F013DE0)
#define NIFJKCEJFIP_GBKGLOIJKGB_OFFSET UNITYSDK_OFFSET(0x1F013DB0)
#define NIFJKCEJFIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F013FB0)
#define NIFJKCEJFIP_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1F013DD0)
#define NIFJKCEJFIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F013CD0)
#define NIFJKCEJFIP_KLANGIPIANN_OFFSET UNITYSDK_OFFSET(0x1F013DC0)
#define NIFJKCEJFIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F014290)
#define NIFJKCEJFIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F014250)
#define NIFJKCEJFIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F013D00)
#define NIFJKCEJFIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F013FE0)
#define NIFJKCEJFIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F014040)

inline static constexpr unsigned int NIFJKCEJFIP_TypeDefinitionIndex = 33699;

	class NIFJKCEJFIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NOGKOJCAFAE AFHHMCKLLAJ; // 0x18
		::System::Boolean NJMEGDBCOOJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NIFJKCEJFIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIFJKCEJFIP*>**)UnitySDK::FromName("", "NIFJKCEJFIP")->GetStaticField(0x6CBC0);
		}

		// static const ::System::Object GOKAKCPJDDI; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIFJKCEJFIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFJKCEJFIP*))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFJKCEJFIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIFJKCEJFIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIFJKCEJFIP*>*(*)())((::PBYTE)hIl2Cpp + NIFJKCEJFIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIFJKCEJFIP* Clone()
		{
			return ((::NIFJKCEJFIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_CLONE_OFFSET))(this);
		}

		::System::Boolean GBKGLOIJKGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_GBKGLOIJKGB_OFFSET))(this);
		}

		::System::Void KLANGIPIANN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_KLANGIPIANN_OFFSET))(this, a1);
		}

		::NOGKOJCAFAE JBENBABCOGB()
		{
			return ((::NOGKOJCAFAE(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::NOGKOJCAFAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOGKOJCAFAE))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIFJKCEJFIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIFJKCEJFIP*))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIFJKCEJFIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFJKCEJFIP*))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIFJKCEJFIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

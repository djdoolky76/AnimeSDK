#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMOAPECAPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHMOAPECAPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48DD30)
#define GHMOAPECAPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48DFD0)
#define GHMOAPECAPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48D8B0)
#define GHMOAPECAPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48D870)
#define GHMOAPECAPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48D860)
#define GHMOAPECAPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48D9E0)
#define GHMOAPECAPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48D980)
#define GHMOAPECAPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48DAD0)
#define GHMOAPECAPB_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E48D950)
#define GHMOAPECAPB_GPLGNELNBFG_OFFSET UNITYSDK_OFFSET(0x1E48D960)
#define GHMOAPECAPB_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E48D920)
#define GHMOAPECAPB_JCCGLGLOPMO_OFFSET UNITYSDK_OFFSET(0x1E48D900)
#define GHMOAPECAPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48D820)
#define GHMOAPECAPB_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E48D940)
#define GHMOAPECAPB_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E48D930)
#define GHMOAPECAPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48DF20)
#define GHMOAPECAPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48DED0)
#define GHMOAPECAPB_MOPJGCNPGBO_OFFSET UNITYSDK_OFFSET(0x1E48D910)
#define GHMOAPECAPB_NPJOLKEIFCC_OFFSET UNITYSDK_OFFSET(0x1E48D970)
#define GHMOAPECAPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48D850)
#define GHMOAPECAPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48DB00)
#define GHMOAPECAPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48DB60)

	class GHMOAPECAPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		::System::UInt32 JNDHOBKBLAC; // 0x1C
		::System::UInt32 BHFEEGICLMK; // 0x20
		::System::Boolean MHOGFFCMBII; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHMOAPECAPB")->GetStaticField(0x17490);
		}

		// static const ::System::Object GHEBLALOOAB; // 0x0
		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object KAOOHFDFFIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHMOAPECAPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMOAPECAPB*))((::PBYTE)hIl2Cpp + GHMOAPECAPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMOAPECAPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHMOAPECAPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHMOAPECAPB* Clone()
		{
			return ((::GHMOAPECAPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_CLONE_OFFSET))(this);
		}

		::System::Boolean JCCGLGLOPMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_JCCGLGLOPMO_OFFSET))(this);
		}

		::System::Void MOPJGCNPGBO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMOAPECAPB_MOPJGCNPGBO_OFFSET))(this, a1);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMOAPECAPB_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMOAPECAPB_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 GPLGNELNBFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_GPLGNELNBFG_OFFSET))(this);
		}

		::System::Void NPJOLKEIFCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMOAPECAPB_NPJOLKEIFCC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHMOAPECAPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHMOAPECAPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMOAPECAPB*))((::PBYTE)hIl2Cpp + GHMOAPECAPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHMOAPECAPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHMOAPECAPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMOAPECAPB*))((::PBYTE)hIl2Cpp + GHMOAPECAPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHMOAPECAPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

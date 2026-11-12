#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGPLPCCDBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBGPLPCCDBJ_BPPENIHOBFG_OFFSET UNITYSDK_OFFSET(0x1FA01820)
#define JBGPLPCCDBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA01B70)
#define JBGPLPCCDBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA01EF0)
#define JBGPLPCCDBJ_CINJALCLAFN_OFFSET UNITYSDK_OFFSET(0x1FA01840)
#define JBGPLPCCDBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA01780)
#define JBGPLPCCDBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA01740)
#define JBGPLPCCDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA01730)
#define JBGPLPCCDBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA018E0)
#define JBGPLPCCDBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA01860)
#define JBGPLPCCDBJ_FLCMCHBMEFM_OFFSET UNITYSDK_OFFSET(0x1FA01830)
#define JBGPLPCCDBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA019B0)
#define JBGPLPCCDBJ_HLAPICBIGPN_OFFSET UNITYSDK_OFFSET(0x1FA01810)
#define JBGPLPCCDBJ_JGACMHLOJCM_OFFSET UNITYSDK_OFFSET(0x1FA01800)
#define JBGPLPCCDBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA016C0)
#define JBGPLPCCDBJ_LCCNHNMCFJN_OFFSET UNITYSDK_OFFSET(0x1FA01850)
#define JBGPLPCCDBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA01D50)
#define JBGPLPCCDBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA01D00)
#define JBGPLPCCDBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA01720)
#define JBGPLPCCDBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA019E0)
#define JBGPLPCCDBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA01A40)

inline static constexpr unsigned int JBGPLPCCDBJ_TypeDefinitionIndex = 33392;

	class JBGPLPCCDBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BEFDCKOBILO; // 0x18
		::System::UInt32 DFIACPBCHPP; // 0x1C
		::System::UInt32 PPGOGDKDEKE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JBGPLPCCDBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBGPLPCCDBJ*>**)UnitySDK::FromName("", "JBGPLPCCDBJ")->GetStaticField(0x59090);
		}

		// static const ::System::Object MDCKIFAGLOL; // 0x0
		// static const ::System::Object DIBBDIDBKGK; // 0x0
		// static const ::System::Object KBKIFFJBFIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBGPLPCCDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGPLPCCDBJ*))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBGPLPCCDBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBGPLPCCDBJ*>*(*)())((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBGPLPCCDBJ* Clone()
		{
			return ((::JBGPLPCCDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGACMHLOJCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_JGACMHLOJCM_OFFSET))(this);
		}

		::System::Void HLAPICBIGPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_HLAPICBIGPN_OFFSET))(this, a1);
		}

		::System::UInt32 BPPENIHOBFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_BPPENIHOBFG_OFFSET))(this);
		}

		::System::Void FLCMCHBMEFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_FLCMCHBMEFM_OFFSET))(this, a1);
		}

		::System::UInt32 CINJALCLAFN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_CINJALCLAFN_OFFSET))(this);
		}

		::System::Void LCCNHNMCFJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_LCCNHNMCFJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBGPLPCCDBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBGPLPCCDBJ*))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBGPLPCCDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGPLPCCDBJ*))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

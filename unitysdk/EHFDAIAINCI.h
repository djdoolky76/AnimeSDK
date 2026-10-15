#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
class EHFDAIAINCI;
class GCBCKOKEAJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHFDAIAINCI_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E29F360)
#define EHFDAIAINCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E29FA70)
#define EHFDAIAINCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29FE40)
#define EHFDAIAINCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E29F280)
#define EHFDAIAINCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E29F1B0)
#define EHFDAIAINCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29F1A0)
#define EHFDAIAINCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E29F5F0)
#define EHFDAIAINCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E29F3C0)
#define EHFDAIAINCI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E29F3B0)
#define EHFDAIAINCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E29F820)
#define EHFDAIAINCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E29F160)
#define EHFDAIAINCI_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E29F370)
#define EHFDAIAINCI_LIAOBOCBJEG_OFFSET UNITYSDK_OFFSET(0x1E29F380)
#define EHFDAIAINCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E29FC60)
#define EHFDAIAINCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E29FB80)
#define EHFDAIAINCI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E29F3A0)
#define EHFDAIAINCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E29F190)
#define EHFDAIAINCI_PCHLPNFKCFH_OFFSET UNITYSDK_OFFSET(0x1E29F390)
#define EHFDAIAINCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E29F8D0)
#define EHFDAIAINCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E29F930)

inline static constexpr unsigned int EHFDAIAINCI_TypeDefinitionIndex = 33497;

	class EHFDAIAINCI : public ::System::Object
	{
	public:
		::GCBCKOKEAJH* DKCCHALJNAD; // 0x10
		::EEILAINOLPO* NLIJNNMCAAO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EHFDAIAINCI")->GetStaticField(0x48500);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object KAJMJPDMGMF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHFDAIAINCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHFDAIAINCI*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHFDAIAINCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EHFDAIAINCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHFDAIAINCI* Clone()
		{
			return ((::EHFDAIAINCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_CLONE_OFFSET))(this);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::GCBCKOKEAJH* LIAOBOCBJEG()
		{
			return ((::GCBCKOKEAJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_LIAOBOCBJEG_OFFSET))(this);
		}

		::System::Void PCHLPNFKCFH(::GCBCKOKEAJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCBCKOKEAJH*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_PCHLPNFKCFH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHFDAIAINCI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHFDAIAINCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHFDAIAINCI*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHFDAIAINCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHFDAIAINCI*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHFDAIAINCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

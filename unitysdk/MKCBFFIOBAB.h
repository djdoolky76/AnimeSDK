#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKCBFFIOBAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKCBFFIOBAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA24AA0)
#define MKCBFFIOBAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA24D50)
#define MKCBFFIOBAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA1B870)
#define MKCBFFIOBAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA24690)
#define MKCBFFIOBAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1C060)
#define MKCBFFIOBAB_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1EA24720)
#define MKCBFFIOBAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA247D0)
#define MKCBFFIOBAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA24740)
#define MKCBFFIOBAB_GCGOOAMNMLD_OFFSET UNITYSDK_OFFSET(0x1EA246C0)
#define MKCBFFIOBAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA1BCD0)
#define MKCBFFIOBAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA24620)
#define MKCBFFIOBAB_KFAHDNKOLEH_OFFSET UNITYSDK_OFFSET(0x1EA246D0)
#define MKCBFFIOBAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA24CB0)
#define MKCBFFIOBAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA1C070)
#define MKCBFFIOBAB_MIDEENHDCBN_OFFSET UNITYSDK_OFFSET(0x1EA246F0)
#define MKCBFFIOBAB_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1EA24730)
#define MKCBFFIOBAB_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1EA24710)
#define MKCBFFIOBAB_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1EA24700)
#define MKCBFFIOBAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA24680)
#define MKCBFFIOBAB_PJABOILJECC_OFFSET UNITYSDK_OFFSET(0x1EA246E0)
#define MKCBFFIOBAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA248B0)
#define MKCBFFIOBAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA24910)

inline static constexpr unsigned int MKCBFFIOBAB_TypeDefinitionIndex = 34115;

	class MKCBFFIOBAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		::System::UInt32 GPFGKJCGBDG; // 0x1C
		::System::UInt32 MIJMCFOKJCH; // 0x20
		::System::UInt32 MNDOFKKKKDA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MKCBFFIOBAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKCBFFIOBAB*>**)UnitySDK::FromName("", "MKCBFFIOBAB")->GetStaticField(0x54230);
		}

		// static const ::System::Object IDLMCHBOGFI; // 0x0
		// static const ::System::Object GIECAIPKMDO; // 0x0
		// static const ::System::Object ELMGEBCLLFP; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKCBFFIOBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCBFFIOBAB*))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCBFFIOBAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKCBFFIOBAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKCBFFIOBAB*>*(*)())((::PBYTE)hIl2Cpp + MKCBFFIOBAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKCBFFIOBAB* Clone()
		{
			return ((::MKCBFFIOBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GCGOOAMNMLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_GCGOOAMNMLD_OFFSET))(this);
		}

		::System::Void KFAHDNKOLEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_KFAHDNKOLEH_OFFSET))(this, a1);
		}

		::System::UInt32 PJABOILJECC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_PJABOILJECC_OFFSET))(this);
		}

		::System::Void MIDEENHDCBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_MIDEENHDCBN_OFFSET))(this, a1);
		}

		::System::UInt32 OPFINOFMACO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_OPFINOFMACO_OFFSET))(this);
		}

		::System::Void OIFCKGODKON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_OIFCKGODKON_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKCBFFIOBAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKCBFFIOBAB*))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKCBFFIOBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCBFFIOBAB*))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKCBFFIOBAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

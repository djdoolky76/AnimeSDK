#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJGNLLAHEM;
class DGHPIDMDOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCJGNLLAHEM_BBANGNDIKIK_OFFSET UNITYSDK_OFFSET(0x1E171720)
#define DCJGNLLAHEM_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1E171750)
#define DCJGNLLAHEM_BPEHHMGGGDN_OFFSET UNITYSDK_OFFSET(0x1E171710)
#define DCJGNLLAHEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E171CC0)
#define DCJGNLLAHEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E171FD0)
#define DCJGNLLAHEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1716B0)
#define DCJGNLLAHEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E171660)
#define DCJGNLLAHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E171650)
#define DCJGNLLAHEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E171910)
#define DCJGNLLAHEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E171770)
#define DCJGNLLAHEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E171AB0)
#define DCJGNLLAHEM_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1E171760)
#define DCJGNLLAHEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E171610)
#define DCJGNLLAHEM_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x1E171730)
#define DCJGNLLAHEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E171E10)
#define DCJGNLLAHEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E171D90)
#define DCJGNLLAHEM_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x1E171740)
#define DCJGNLLAHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E171640)
#define DCJGNLLAHEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E171AF0)
#define DCJGNLLAHEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E171B50)

	class DCJGNLLAHEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DGHPIDMDOJM* JIHIDBNIKAG; // 0x18
		::System::UInt32 MEGGDDIDHFM; // 0x20
		::System::Boolean HEFABPKIIPD; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DCJGNLLAHEM")->GetStaticField(0x2C3B0);
		}

		// static const ::System::Object GELCINOKBDJ; // 0x0
		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object MCEJJGELGPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCJGNLLAHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJGNLLAHEM*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJGNLLAHEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DCJGNLLAHEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCJGNLLAHEM* Clone()
		{
			return ((::DCJGNLLAHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_CLONE_OFFSET))(this);
		}

		::System::Boolean BPEHHMGGGDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_BPEHHMGGGDN_OFFSET))(this);
		}

		::System::Void BBANGNDIKIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_BBANGNDIKIK_OFFSET))(this, a1);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::DGHPIDMDOJM* BGHKDLONBOD()
		{
			return ((::DGHPIDMDOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::DGHPIDMDOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHPIDMDOJM*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCJGNLLAHEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCJGNLLAHEM*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCJGNLLAHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJGNLLAHEM*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCJGNLLAHEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNBIPFELFOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNBIPFELFOG_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E89DFE0)
#define KNBIPFELFOG_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E89E010)
#define KNBIPFELFOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E89E370)
#define KNBIPFELFOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89E710)
#define KNBIPFELFOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E89DF40)
#define KNBIPFELFOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E89DF00)
#define KNBIPFELFOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89DEF0)
#define KNBIPFELFOG_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E89DFB0)
#define KNBIPFELFOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E89E090)
#define KNBIPFELFOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E89E030)
#define KNBIPFELFOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E89E0E0)
#define KNBIPFELFOG_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E89DF90)
#define KNBIPFELFOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E89DEB0)
#define KNBIPFELFOG_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E89E020)
#define KNBIPFELFOG_LLNGAFMENHJ_OFFSET UNITYSDK_OFFSET(0x1E89E000)
#define KNBIPFELFOG_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E89DFA0)
#define KNBIPFELFOG_MAIEHOGHEHO_OFFSET UNITYSDK_OFFSET(0x1E89DFF0)
#define KNBIPFELFOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E89E660)
#define KNBIPFELFOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E89E600)
#define KNBIPFELFOG_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E89DFC0)
#define KNBIPFELFOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E89DEE0)
#define KNBIPFELFOG_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E89DFD0)
#define KNBIPFELFOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E89E120)
#define KNBIPFELFOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E89E180)

inline static constexpr unsigned int KNBIPFELFOG_TypeDefinitionIndex = 30565;

	class KNBIPFELFOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FOBLPJCIGJE; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		::System::UInt32 DKLCPIAINIK; // 0x20
		::System::UInt32 BHFEEGICLMK; // 0x24
		::System::UInt32 JOPMPABJNHF; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNBIPFELFOG")->GetStaticField(0x1C620);
		}

		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		// static const ::System::Object EEBDIHEMEMG; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNBIPFELFOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNBIPFELFOG*))((::PBYTE)hIl2Cpp + KNBIPFELFOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBIPFELFOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNBIPFELFOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNBIPFELFOG* Clone()
		{
			return ((::KNBIPFELFOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBIPFELFOG_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBIPFELFOG_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBIPFELFOG_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::System::UInt32 MAIEHOGHEHO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_MAIEHOGHEHO_OFFSET))(this);
		}

		::System::Void LLNGAFMENHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBIPFELFOG_LLNGAFMENHJ_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBIPFELFOG_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNBIPFELFOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNBIPFELFOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNBIPFELFOG*))((::PBYTE)hIl2Cpp + KNBIPFELFOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNBIPFELFOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNBIPFELFOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNBIPFELFOG*))((::PBYTE)hIl2Cpp + KNBIPFELFOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNBIPFELFOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

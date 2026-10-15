#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBEPMABCBGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBEPMABCBGF_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E7C0D70)
#define BBEPMABCBGF_AJLCBHHOCGJ_OFFSET UNITYSDK_OFFSET(0x1E7C0D40)
#define BBEPMABCBGF_AKNAIPIKDHM_OFFSET UNITYSDK_OFFSET(0x1E7C0DA0)
#define BBEPMABCBGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C1150)
#define BBEPMABCBGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C14F0)
#define BBEPMABCBGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C0CC0)
#define BBEPMABCBGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C0C80)
#define BBEPMABCBGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0C70)
#define BBEPMABCBGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C0E70)
#define BBEPMABCBGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C0DE0)
#define BBEPMABCBGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C0EC0)
#define BBEPMABCBGF_HBGBMKONGFE_OFFSET UNITYSDK_OFFSET(0x1E7C0D80)
#define BBEPMABCBGF_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E7C0D60)
#define BBEPMABCBGF_JCGGPIJDNHA_OFFSET UNITYSDK_OFFSET(0x1E7C0D50)
#define BBEPMABCBGF_JCMKCHHEFDG_OFFSET UNITYSDK_OFFSET(0x1E7C0DD0)
#define BBEPMABCBGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C0C00)
#define BBEPMABCBGF_JMILPIHFEMD_OFFSET UNITYSDK_OFFSET(0x1E7C0DB0)
#define BBEPMABCBGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C1440)
#define BBEPMABCBGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C13E0)
#define BBEPMABCBGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0C60)
#define BBEPMABCBGF_PLOLNFKPHJN_OFFSET UNITYSDK_OFFSET(0x1E7C0DC0)
#define BBEPMABCBGF_PMBJGINOGFP_OFFSET UNITYSDK_OFFSET(0x1E7C0D90)
#define BBEPMABCBGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C0F00)
#define BBEPMABCBGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C0F60)

inline static constexpr unsigned int BBEPMABCBGF_TypeDefinitionIndex = 31179;

	class BBEPMABCBGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CDLPJPGOGMN; // 0x18
		::System::UInt32 DCAFMCGNJHE; // 0x1C
		::System::UInt32 JFBFIKADIEK; // 0x20
		::System::UInt32 MNFEMCJGAOD; // 0x24
		::System::UInt32 IBEBBFIHLLP; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BBEPMABCBGF")->GetStaticField(0x37020);
		}

		// static const ::System::Object DEJILEKOCFL; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object AJLMKACOOAG; // 0x0
		// static const ::System::Object MOKDJLMAKCE; // 0x0
		// static const ::System::Object LJCHENNEOPL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBEPMABCBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBEPMABCBGF*))((::PBYTE)hIl2Cpp + BBEPMABCBGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBEPMABCBGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BBEPMABCBGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBEPMABCBGF* Clone()
		{
			return ((::BBEPMABCBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AJLCBHHOCGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_AJLCBHHOCGJ_OFFSET))(this);
		}

		::System::Void JCGGPIJDNHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBEPMABCBGF_JCGGPIJDNHA_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBEPMABCBGF_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 HBGBMKONGFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_HBGBMKONGFE_OFFSET))(this);
		}

		::System::Void PMBJGINOGFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBEPMABCBGF_PMBJGINOGFP_OFFSET))(this, a1);
		}

		::System::UInt32 AKNAIPIKDHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_AKNAIPIKDHM_OFFSET))(this);
		}

		::System::Void JMILPIHFEMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBEPMABCBGF_JMILPIHFEMD_OFFSET))(this, a1);
		}

		::System::UInt32 PLOLNFKPHJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_PLOLNFKPHJN_OFFSET))(this);
		}

		::System::Void JCMKCHHEFDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBEPMABCBGF_JCMKCHHEFDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBEPMABCBGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBEPMABCBGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBEPMABCBGF*))((::PBYTE)hIl2Cpp + BBEPMABCBGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBEPMABCBGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBEPMABCBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBEPMABCBGF*))((::PBYTE)hIl2Cpp + BBEPMABCBGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBEPMABCBGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

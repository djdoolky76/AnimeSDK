#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBEPMABCBGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBEPMABCBGF_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E793770)
#define BBEPMABCBGF_AJLCBHHOCGJ_OFFSET UNITYSDK_OFFSET(0x1E793740)
#define BBEPMABCBGF_AKNAIPIKDHM_OFFSET UNITYSDK_OFFSET(0x1E7937A0)
#define BBEPMABCBGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E793B50)
#define BBEPMABCBGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E793EF0)
#define BBEPMABCBGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7936C0)
#define BBEPMABCBGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E793680)
#define BBEPMABCBGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E793670)
#define BBEPMABCBGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E793870)
#define BBEPMABCBGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7937E0)
#define BBEPMABCBGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7938C0)
#define BBEPMABCBGF_HBGBMKONGFE_OFFSET UNITYSDK_OFFSET(0x1E793780)
#define BBEPMABCBGF_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E793760)
#define BBEPMABCBGF_JCGGPIJDNHA_OFFSET UNITYSDK_OFFSET(0x1E793750)
#define BBEPMABCBGF_JCMKCHHEFDG_OFFSET UNITYSDK_OFFSET(0x1E7937D0)
#define BBEPMABCBGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E793600)
#define BBEPMABCBGF_JMILPIHFEMD_OFFSET UNITYSDK_OFFSET(0x1E7937B0)
#define BBEPMABCBGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E793E40)
#define BBEPMABCBGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E793DE0)
#define BBEPMABCBGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E793660)
#define BBEPMABCBGF_PLOLNFKPHJN_OFFSET UNITYSDK_OFFSET(0x1E7937C0)
#define BBEPMABCBGF_PMBJGINOGFP_OFFSET UNITYSDK_OFFSET(0x1E793790)
#define BBEPMABCBGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E793900)
#define BBEPMABCBGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E793960)

inline static constexpr unsigned int BBEPMABCBGF_TypeDefinitionIndex = 31179;

	class BBEPMABCBGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 JFBFIKADIEK; // 0x1C
		::System::UInt32 DCAFMCGNJHE; // 0x20
		::System::UInt32 CDLPJPGOGMN; // 0x24
		::System::UInt32 MNFEMCJGAOD; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BBEPMABCBGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBEPMABCBGF*>**)UnitySDK::FromName("", "BBEPMABCBGF")->GetStaticField(0x2F620);
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

		static ::Google::Protobuf::MessageParser_1<::BBEPMABCBGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBEPMABCBGF*>*(*)())((::PBYTE)hIl2Cpp + BBEPMABCBGF_JJGHOBBFNJD_OFFSET))();
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

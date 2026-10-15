#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDLBFFKAGBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDLBFFKAGBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EABBFD0)
#define NDLBFFKAGBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABC3F0)
#define NDLBFFKAGBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EABBAA0)
#define NDLBFFKAGBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EABBA60)
#define NDLBFFKAGBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABBA50)
#define NDLBFFKAGBN_DCOIMNBGBCI_OFFSET UNITYSDK_OFFSET(0x1EABBB40)
#define NDLBFFKAGBN_EDDFOHAEEFN_OFFSET UNITYSDK_OFFSET(0x1EABBB60)
#define NDLBFFKAGBN_EEHIAKDDIPJ_OFFSET UNITYSDK_OFFSET(0x1EABBBC0)
#define NDLBFFKAGBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EABBC80)
#define NDLBFFKAGBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EABBBE0)
#define NDLBFFKAGBN_FPEPFFODNNK_OFFSET UNITYSDK_OFFSET(0x1EABBB90)
#define NDLBFFKAGBN_FPLDAOMDHIP_OFFSET UNITYSDK_OFFSET(0x1EABBB80)
#define NDLBFFKAGBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EABBCD0)
#define NDLBFFKAGBN_HDAMMDIBGFM_OFFSET UNITYSDK_OFFSET(0x1EABBB30)
#define NDLBFFKAGBN_HFJHOOJLFPE_OFFSET UNITYSDK_OFFSET(0x1EABBB70)
#define NDLBFFKAGBN_HIFAHCDEOJE_OFFSET UNITYSDK_OFFSET(0x1EABBB20)
#define NDLBFFKAGBN_IKPJCLHOJKF_OFFSET UNITYSDK_OFFSET(0x1EABBBA0)
#define NDLBFFKAGBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EABB9E0)
#define NDLBFFKAGBN_KKEAJKOFMNL_OFFSET UNITYSDK_OFFSET(0x1EABBBD0)
#define NDLBFFKAGBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EABC330)
#define NDLBFFKAGBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EABC2D0)
#define NDLBFFKAGBN_MNAHHCGMEED_OFFSET UNITYSDK_OFFSET(0x1EABBB50)
#define NDLBFFKAGBN_NFGDMLBCEPK_OFFSET UNITYSDK_OFFSET(0x1EABBBB0)
#define NDLBFFKAGBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EABBA40)
#define NDLBFFKAGBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EABBD20)
#define NDLBFFKAGBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EABBD80)

inline static constexpr unsigned int NDLBFFKAGBN_TypeDefinitionIndex = 27610;

	class NDLBFFKAGBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OOHMPMHFAEK; // 0x18
		::System::UInt32 FABLENILNGO; // 0x1C
		::System::UInt32 FEGHIPGIONK; // 0x20
		::System::UInt32 ELPJEGFBIDO; // 0x24
		::System::UInt32 CMIIEOEKIBD; // 0x28
		::System::UInt32 GCJOLFCNBOL; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::NDLBFFKAGBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDLBFFKAGBN*>**)UnitySDK::FromName("", "NDLBFFKAGBN")->GetStaticField(0x5FCA0);
		}

		// static const ::System::Object FNLJNNHJBLG; // 0x0
		// static const ::System::Object JBDOIFCHBDL; // 0x0
		// static const ::System::Object KIEIGAOPPAC; // 0x0
		// static const ::System::Object LJEILHGGFKK; // 0x0
		// static const ::System::Object FICPNCIGCLC; // 0x0
		// static const ::System::Object JKJGDMJJIAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDLBFFKAGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLBFFKAGBN*))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDLBFFKAGBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDLBFFKAGBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDLBFFKAGBN*>*(*)())((::PBYTE)hIl2Cpp + NDLBFFKAGBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDLBFFKAGBN* Clone()
		{
			return ((::NDLBFFKAGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HIFAHCDEOJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_HIFAHCDEOJE_OFFSET))(this);
		}

		::System::Void HDAMMDIBGFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_HDAMMDIBGFM_OFFSET))(this, a1);
		}

		::System::UInt32 DCOIMNBGBCI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_DCOIMNBGBCI_OFFSET))(this);
		}

		::System::Void MNAHHCGMEED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_MNAHHCGMEED_OFFSET))(this, a1);
		}

		::System::UInt32 EDDFOHAEEFN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_EDDFOHAEEFN_OFFSET))(this);
		}

		::System::Void HFJHOOJLFPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_HFJHOOJLFPE_OFFSET))(this, a1);
		}

		::System::UInt32 FPLDAOMDHIP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_FPLDAOMDHIP_OFFSET))(this);
		}

		::System::Void FPEPFFODNNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_FPEPFFODNNK_OFFSET))(this, a1);
		}

		::System::UInt32 IKPJCLHOJKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_IKPJCLHOJKF_OFFSET))(this);
		}

		::System::Void NFGDMLBCEPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_NFGDMLBCEPK_OFFSET))(this, a1);
		}

		::System::UInt32 EEHIAKDDIPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_EEHIAKDDIPJ_OFFSET))(this);
		}

		::System::Void KKEAJKOFMNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_KKEAJKOFMNL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDLBFFKAGBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDLBFFKAGBN*))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDLBFFKAGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLBFFKAGBN*))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDLBFFKAGBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

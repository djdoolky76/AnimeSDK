#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAMOHABJIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALAMOHABJIP_APMGDDHNOJG_OFFSET UNITYSDK_OFFSET(0x1E3A43A0)
#define ALAMOHABJIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A4730)
#define ALAMOHABJIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4A30)
#define ALAMOHABJIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A4300)
#define ALAMOHABJIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A42D0)
#define ALAMOHABJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A42C0)
#define ALAMOHABJIP_DBFLKMOKPMI_OFFSET UNITYSDK_OFFSET(0x1E3A4360)
#define ALAMOHABJIP_EJOKOLHBKGC_OFFSET UNITYSDK_OFFSET(0x1E3A4380)
#define ALAMOHABJIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A4420)
#define ALAMOHABJIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A43D0)
#define ALAMOHABJIP_FOGAPFCOPDM_OFFSET UNITYSDK_OFFSET(0x1E3A4390)
#define ALAMOHABJIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A4500)
#define ALAMOHABJIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A4280)
#define ALAMOHABJIP_MBIJLCCNLBE_OFFSET UNITYSDK_OFFSET(0x1E3A43B0)
#define ALAMOHABJIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A4990)
#define ALAMOHABJIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A4940)
#define ALAMOHABJIP_NBFKPHKCMGN_OFFSET UNITYSDK_OFFSET(0x1E3A4350)
#define ALAMOHABJIP_NFEFKGGMBKM_OFFSET UNITYSDK_OFFSET(0x1E3A43C0)
#define ALAMOHABJIP_OGIMILOAOIC_OFFSET UNITYSDK_OFFSET(0x1E3A4370)
#define ALAMOHABJIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A42B0)
#define ALAMOHABJIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A4540)
#define ALAMOHABJIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A45A0)

inline static constexpr unsigned int ALAMOHABJIP_TypeDefinitionIndex = 30702;

	class ALAMOHABJIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ICDANOLIPIH; // 0x18
		::System::UInt32 OLGFGGLIBKB; // 0x1C
		::System::UInt32 MCEHAHKDHMC; // 0x20
		::System::UInt32 CCPNMCHBGFA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::ALAMOHABJIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALAMOHABJIP*>**)UnitySDK::FromName("", "ALAMOHABJIP")->GetStaticField(0x40350);
		}

		// static const ::System::Object BAIFBDDHIBH; // 0x0
		// static const ::System::Object HKBJJPGHGKC; // 0x0
		// static const ::System::Object LKHKGMDFDIH; // 0x0
		// static const ::System::Object MGPDNEBCELN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALAMOHABJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAMOHABJIP*))((::PBYTE)hIl2Cpp + ALAMOHABJIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAMOHABJIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALAMOHABJIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALAMOHABJIP*>*(*)())((::PBYTE)hIl2Cpp + ALAMOHABJIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALAMOHABJIP* Clone()
		{
			return ((::ALAMOHABJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NBFKPHKCMGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_NBFKPHKCMGN_OFFSET))(this);
		}

		::System::Void DBFLKMOKPMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALAMOHABJIP_DBFLKMOKPMI_OFFSET))(this, a1);
		}

		::System::UInt32 OGIMILOAOIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_OGIMILOAOIC_OFFSET))(this);
		}

		::System::Void EJOKOLHBKGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALAMOHABJIP_EJOKOLHBKGC_OFFSET))(this, a1);
		}

		::System::UInt32 FOGAPFCOPDM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_FOGAPFCOPDM_OFFSET))(this);
		}

		::System::Void APMGDDHNOJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALAMOHABJIP_APMGDDHNOJG_OFFSET))(this, a1);
		}

		::System::UInt32 MBIJLCCNLBE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_MBIJLCCNLBE_OFFSET))(this);
		}

		::System::Void NFEFKGGMBKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALAMOHABJIP_NFEFKGGMBKM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALAMOHABJIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALAMOHABJIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALAMOHABJIP*))((::PBYTE)hIl2Cpp + ALAMOHABJIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALAMOHABJIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALAMOHABJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAMOHABJIP*))((::PBYTE)hIl2Cpp + ALAMOHABJIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALAMOHABJIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

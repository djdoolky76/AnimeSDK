#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOLCGIOGIBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BOLCGIOGIBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E00F500)
#define BOLCGIOGIBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00FA40)
#define BOLCGIOGIBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E00EEE0)
#define BOLCGIOGIBP_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E00F010)
#define BOLCGIOGIBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E00EE60)
#define BOLCGIOGIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00EE50)
#define BOLCGIOGIBP_DDKGEDKLFHC_OFFSET UNITYSDK_OFFSET(0x1E00EFC0)
#define BOLCGIOGIBP_DNPBHEMIBPK_OFFSET UNITYSDK_OFFSET(0x1E00EFE0)
#define BOLCGIOGIBP_EMCNLKPLJCK_OFFSET UNITYSDK_OFFSET(0x1E00EF80)
#define BOLCGIOGIBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E00F0E0)
#define BOLCGIOGIBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E00F050)
#define BOLCGIOGIBP_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E00F040)
#define BOLCGIOGIBP_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E00F020)
#define BOLCGIOGIBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E00F160)
#define BOLCGIOGIBP_GHCLHFDNGCM_OFFSET UNITYSDK_OFFSET(0x1E00EFB0)
#define BOLCGIOGIBP_GIIOBLCKKLC_OFFSET UNITYSDK_OFFSET(0x1E00EFA0)
#define BOLCGIOGIBP_HJKPPODFDFH_OFFSET UNITYSDK_OFFSET(0x1E00EFF0)
#define BOLCGIOGIBP_IMFBLHADADC_OFFSET UNITYSDK_OFFSET(0x1E00EFD0)
#define BOLCGIOGIBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E00EE10)
#define BOLCGIOGIBP_KGPCPDAFLFF_OFFSET UNITYSDK_OFFSET(0x1E00EF70)
#define BOLCGIOGIBP_LGFIMPKGOKF_OFFSET UNITYSDK_OFFSET(0x1E00EF90)
#define BOLCGIOGIBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E00F900)
#define BOLCGIOGIBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E00F830)
#define BOLCGIOGIBP_NLPCHMIGHDP_OFFSET UNITYSDK_OFFSET(0x1E00F000)
#define BOLCGIOGIBP_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E00F030)
#define BOLCGIOGIBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E00EE40)
#define BOLCGIOGIBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E00F200)
#define BOLCGIOGIBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E00F260)

inline static constexpr unsigned int BOLCGIOGIBP_TypeDefinitionIndex = 26236;

	class BOLCGIOGIBP : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BDLHPBLODJJ; // 0x20
		::System::UInt32 MLILCOBLIBK; // 0x24
		::System::UInt32 AFFBGDFNCBG; // 0x28
		::System::UInt32 PANHBLLDMGI; // 0x2C
		::System::UInt32 PECKCNAOPMD; // 0x30
		::System::UInt32 NIJCHKPIBLB; // 0x34
		static ::Google::Protobuf::MessageParser_1<::BOLCGIOGIBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BOLCGIOGIBP*>**)UnitySDK::FromName("", "BOLCGIOGIBP")->GetStaticField(0x10F80);
		}

		// static const ::System::Object MKLPBDFJKJG; // 0x0
		// static const ::System::Object LKAIPLIDKDM; // 0x0
		// static const ::System::Object NOLOJHKBLFC; // 0x0
		// static const ::System::Object EMPDMPHKKGB; // 0x0
		// static const ::System::Object HBACCMOEAHI; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOLCGIOGIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOLCGIOGIBP*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOLCGIOGIBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BOLCGIOGIBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BOLCGIOGIBP*>*(*)())((::PBYTE)hIl2Cpp + BOLCGIOGIBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOLCGIOGIBP* Clone()
		{
			return ((::BOLCGIOGIBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 KGPCPDAFLFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_KGPCPDAFLFF_OFFSET))(this);
		}

		::System::Void EMCNLKPLJCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_EMCNLKPLJCK_OFFSET))(this, a1);
		}

		::System::UInt32 LGFIMPKGOKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_LGFIMPKGOKF_OFFSET))(this);
		}

		::System::Void GIIOBLCKKLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_GIIOBLCKKLC_OFFSET))(this, a1);
		}

		::System::UInt32 GHCLHFDNGCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_GHCLHFDNGCM_OFFSET))(this);
		}

		::System::Void DDKGEDKLFHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_DDKGEDKLFHC_OFFSET))(this, a1);
		}

		::System::UInt32 IMFBLHADADC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_IMFBLHADADC_OFFSET))(this);
		}

		::System::Void DNPBHEMIBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_DNPBHEMIBPK_OFFSET))(this, a1);
		}

		::System::UInt32 HJKPPODFDFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_HJKPPODFDFH_OFFSET))(this);
		}

		::System::Void NLPCHMIGHDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_NLPCHMIGHDP_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOLCGIOGIBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOLCGIOGIBP*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOLCGIOGIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOLCGIOGIBP*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOLCGIOGIBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

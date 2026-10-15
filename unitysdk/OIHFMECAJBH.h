#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class OIHFMECAJBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIHFMECAJBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6E320)
#define OIHFMECAJBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6E6F0)
#define OIHFMECAJBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6DE70)
#define OIHFMECAJBH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DE6DF30)
#define OIHFMECAJBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6DE30)
#define OIHFMECAJBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6DE20)
#define OIHFMECAJBH_DCDJIDBEFGD_OFFSET UNITYSDK_OFFSET(0x1DE6DF70)
#define OIHFMECAJBH_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1DE6DF10)
#define OIHFMECAJBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6E020)
#define OIHFMECAJBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6DF90)
#define OIHFMECAJBH_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1DE6DF00)
#define OIHFMECAJBH_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1DE6DF20)
#define OIHFMECAJBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6E070)
#define OIHFMECAJBH_JBIGLLIFOFB_OFFSET UNITYSDK_OFFSET(0x1DE6DF80)
#define OIHFMECAJBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6DDB0)
#define OIHFMECAJBH_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1DE6DF60)
#define OIHFMECAJBH_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1DE6DEF0)
#define OIHFMECAJBH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DE6DF40)
#define OIHFMECAJBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6E640)
#define OIHFMECAJBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6E5E0)
#define OIHFMECAJBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6DE10)
#define OIHFMECAJBH_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1DE6DF50)
#define OIHFMECAJBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6E0B0)
#define OIHFMECAJBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6E110)

inline static constexpr unsigned int OIHFMECAJBH_TypeDefinitionIndex = 25173;

	class OIHFMECAJBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CIDFPJJEONE; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		::System::UInt32 KCIKBKIBOPB; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		::System::UInt32 GEMFJILOPLL; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OIHFMECAJBH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIHFMECAJBH*>**)UnitySDK::FromName("", "OIHFMECAJBH")->GetStaticField(0x1C250);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object IOJCIGNHNOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIHFMECAJBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIHFMECAJBH*))((::PBYTE)hIl2Cpp + OIHFMECAJBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHFMECAJBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIHFMECAJBH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIHFMECAJBH*>*(*)())((::PBYTE)hIl2Cpp + OIHFMECAJBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIHFMECAJBH* Clone()
		{
			return ((::OIHFMECAJBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + OIHFMECAJBH_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHFMECAJBH_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHFMECAJBH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHFMECAJBH_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::UInt32 DCDJIDBEFGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_DCDJIDBEFGD_OFFSET))(this);
		}

		::System::Void JBIGLLIFOFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHFMECAJBH_JBIGLLIFOFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIHFMECAJBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIHFMECAJBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIHFMECAJBH*))((::PBYTE)hIl2Cpp + OIHFMECAJBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIHFMECAJBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIHFMECAJBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIHFMECAJBH*))((::PBYTE)hIl2Cpp + OIHFMECAJBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIHFMECAJBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

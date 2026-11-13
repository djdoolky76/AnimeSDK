#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class HDHLHNEACHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDHLHNEACHP_BJHICMHGDNI_OFFSET UNITYSDK_OFFSET(0x1F874250)
#define HDHLHNEACHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F874670)
#define HDHLHNEACHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F874930)
#define HDHLHNEACHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F874180)
#define HDHLHNEACHP_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1F874220)
#define HDHLHNEACHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F874140)
#define HDHLHNEACHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F874130)
#define HDHLHNEACHP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1F874260)
#define HDHLHNEACHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F874310)
#define HDHLHNEACHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F874280)
#define HDHLHNEACHP_FJGFBJMAGHH_OFFSET UNITYSDK_OFFSET(0x1F874240)
#define HDHLHNEACHP_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1F874210)
#define HDHLHNEACHP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1F874270)
#define HDHLHNEACHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F874400)
#define HDHLHNEACHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8740C0)
#define HDHLHNEACHP_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1F874200)
#define HDHLHNEACHP_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1F874230)
#define HDHLHNEACHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F874890)
#define HDHLHNEACHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F874840)
#define HDHLHNEACHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F874120)
#define HDHLHNEACHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F874430)
#define HDHLHNEACHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F874490)

inline static constexpr unsigned int HDHLHNEACHP_TypeDefinitionIndex = 29012;

	class HDHLHNEACHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::Boolean DNNPMFOBHJO; // 0x1C
		::System::Byte _padding0[0x3];
		::ACINIALAFDE CFCAMOAGIDE; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HDHLHNEACHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDHLHNEACHP*>**)UnitySDK::FromName("", "HDHLHNEACHP")->GetStaticField(0x27C30);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object MKAHGIIFABL; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDHLHNEACHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDHLHNEACHP*))((::PBYTE)hIl2Cpp + HDHLHNEACHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDHLHNEACHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDHLHNEACHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDHLHNEACHP*>*(*)())((::PBYTE)hIl2Cpp + HDHLHNEACHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDHLHNEACHP* Clone()
		{
			return ((::HDHLHNEACHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + HDHLHNEACHP_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDHLHNEACHP_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean FJGFBJMAGHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_FJGFBJMAGHH_OFFSET))(this);
		}

		::System::Void BJHICMHGDNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDHLHNEACHP_BJHICMHGDNI_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDHLHNEACHP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDHLHNEACHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDHLHNEACHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDHLHNEACHP*))((::PBYTE)hIl2Cpp + HDHLHNEACHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDHLHNEACHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDHLHNEACHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDHLHNEACHP*))((::PBYTE)hIl2Cpp + HDHLHNEACHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDHLHNEACHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

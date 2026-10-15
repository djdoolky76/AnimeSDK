#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIFHAMFCFE_GPEOCCLHCMD.h"
#include "unitysdk/System/Object.h"
class AMFIFNOCDOF;
class BDDDLOFNCHN;
class BEBIJAKFNLO;
class GBJHJGCOJBC;
class HPJKBFKAKJH;
class LMIFHAMFCFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMIFHAMFCFE_APMAIJGCNNL_OFFSET UNITYSDK_OFFSET(0x1E9A4300)
#define LMIFHAMFCFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A4EF0)
#define LMIFHAMFCFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A5D70)
#define LMIFHAMFCFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A4100)
#define LMIFHAMFCFE_COMIMHCAGMH_OFFSET UNITYSDK_OFFSET(0x1E9A4020)
#define LMIFHAMFCFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A3C50)
#define LMIFHAMFCFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3C40)
#define LMIFHAMFCFE_EJMLEDOBBOG_OFFSET UNITYSDK_OFFSET(0x1E9A40A0)
#define LMIFHAMFCFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A4370)
#define LMIFHAMFCFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A4310)
#define LMIFHAMFCFE_FBGGIIBMELB_OFFSET UNITYSDK_OFFSET(0x1E9A4170)
#define LMIFHAMFCFE_FJDBBADEIML_OFFSET UNITYSDK_OFFSET(0x1E9A4080)
#define LMIFHAMFCFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A4990)
#define LMIFHAMFCFE_GGFNABHFPEC_OFFSET UNITYSDK_OFFSET(0x1E9A4270)
#define LMIFHAMFCFE_GOJKLGMHHKL_OFFSET UNITYSDK_OFFSET(0x1E9A42F0)
#define LMIFHAMFCFE_HHPJBOJBMKP_OFFSET UNITYSDK_OFFSET(0x1E9A4250)
#define LMIFHAMFCFE_IJBLBIIEOGH_OFFSET UNITYSDK_OFFSET(0x1E9A4150)
#define LMIFHAMFCFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A3BD0)
#define LMIFHAMFCFE_MBIBIIFOIOF_OFFSET UNITYSDK_OFFSET(0x1E9A42D0)
#define LMIFHAMFCFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A5880)
#define LMIFHAMFCFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A5200)
#define LMIFHAMFCFE_MFJOJPABNLL_OFFSET UNITYSDK_OFFSET(0x1E9A41D0)
#define LMIFHAMFCFE_OPOGAOELABO_OFFSET UNITYSDK_OFFSET(0x1E9A41F0)
#define LMIFHAMFCFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3C30)
#define LMIFHAMFCFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A4C20)
#define LMIFHAMFCFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A4C80)

inline static constexpr unsigned int LMIFHAMFCFE_TypeDefinitionIndex = 29425;

	class LMIFHAMFCFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* NMABHKCOLCM; // 0x18
		::LMIFHAMFCFE_GPEOCCLHCMD KMIDFEPFPFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMIFHAMFCFE")->GetStaticField(0x4CE00);
		}

		// static const ::System::Object MFHAINDKEAA; // 0x0
		// static const ::System::Object CIPOFJPEBLE; // 0x0
		// static const ::System::Object DCABMEIACGE; // 0x0
		// static const ::System::Object OAJIMNFCBMJ; // 0x0
		// static const ::System::Object PHCJLINNPIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMIFHAMFCFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMIFHAMFCFE*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMIFHAMFCFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMIFHAMFCFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMIFHAMFCFE* Clone()
		{
			return ((::LMIFHAMFCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_CLONE_OFFSET))(this);
		}

		::BDDDLOFNCHN* COMIMHCAGMH()
		{
			return ((::BDDDLOFNCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_COMIMHCAGMH_OFFSET))(this);
		}

		::System::Void FJDBBADEIML(::BDDDLOFNCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDDDLOFNCHN*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_FJDBBADEIML_OFFSET))(this, a1);
		}

		::HPJKBFKAKJH* EJMLEDOBBOG()
		{
			return ((::HPJKBFKAKJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_EJMLEDOBBOG_OFFSET))(this);
		}

		::System::Void IJBLBIIEOGH(::HPJKBFKAKJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPJKBFKAKJH*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_IJBLBIIEOGH_OFFSET))(this, a1);
		}

		::BEBIJAKFNLO* FBGGIIBMELB()
		{
			return ((::BEBIJAKFNLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_FBGGIIBMELB_OFFSET))(this);
		}

		::System::Void MFJOJPABNLL(::BEBIJAKFNLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEBIJAKFNLO*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_MFJOJPABNLL_OFFSET))(this, a1);
		}

		::GBJHJGCOJBC* OPOGAOELABO()
		{
			return ((::GBJHJGCOJBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_OPOGAOELABO_OFFSET))(this);
		}

		::System::Void HHPJBOJBMKP(::GBJHJGCOJBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHJGCOJBC*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_HHPJBOJBMKP_OFFSET))(this, a1);
		}

		::AMFIFNOCDOF* GGFNABHFPEC()
		{
			return ((::AMFIFNOCDOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_GGFNABHFPEC_OFFSET))(this);
		}

		::System::Void MBIBIIFOIOF(::AMFIFNOCDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFIFNOCDOF*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_MBIBIIFOIOF_OFFSET))(this, a1);
		}

		::LMIFHAMFCFE_GPEOCCLHCMD GOJKLGMHHKL()
		{
			return ((::LMIFHAMFCFE_GPEOCCLHCMD(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_GOJKLGMHHKL_OFFSET))(this);
		}

		::System::Void APMAIJGCNNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_APMAIJGCNNL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMIFHAMFCFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMIFHAMFCFE*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMIFHAMFCFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMIFHAMFCFE*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMIFHAMFCFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

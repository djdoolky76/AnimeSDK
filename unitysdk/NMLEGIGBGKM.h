#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/GLHOLLOPOOB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CHDFDOGABHI;
class EENKDDFKHNJ;
class EJHHPFFPFOJ;
class FKNIEPCILLG;
class GEAPPLEFPJJ;
class IHPKKNHNLHF;
class OFEOCBBINAC;
class PCFMJDNECHN;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace MoleMole::Config { class ConfigFloorMetaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMLEGIGBGKM_ABGCNKNMEDG_OFFSET UNITYSDK_OFFSET(0xE768EF0)
#define NMLEGIGBGKM_ANEIDJPIGBI_OFFSET UNITYSDK_OFFSET(0xE768F70)
#define NMLEGIGBGKM_BABICJCMOOD_OFFSET UNITYSDK_OFFSET(0xE7691C0)
#define NMLEGIGBGKM_BKJLCKGPEDK_OFFSET UNITYSDK_OFFSET(0xE768AD0)
#define NMLEGIGBGKM_CIPKGLANDJB_OFFSET UNITYSDK_OFFSET(0xE768F10)
#define NMLEGIGBGKM_DJBAMLAFPMM_OFFSET UNITYSDK_OFFSET(0xE768E90)
#define NMLEGIGBGKM_ECBNGKBGOLI_OFFSET UNITYSDK_OFFSET(0xE768AB0)
#define NMLEGIGBGKM_FMPOIGCKNLA_OFFSET UNITYSDK_OFFSET(0xE769140)
#define NMLEGIGBGKM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE768090)
#define NMLEGIGBGKM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE766690)
#define NMLEGIGBGKM_HLIPGAMELAK_OFFSET UNITYSDK_OFFSET(0xE769160)
#define NMLEGIGBGKM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE7680F0)
#define NMLEGIGBGKM_LHPBCBDJMBF_OFFSET UNITYSDK_OFFSET(0xE768F90)
#define NMLEGIGBGKM_NKEPJMCKKFK_OFFSET UNITYSDK_OFFSET(0xE768E30)
#define NMLEGIGBGKM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE766710)
#define NMLEGIGBGKM__CTOR_OFFSET UNITYSDK_OFFSET(0xE768AA0)

inline static constexpr unsigned int NMLEGIGBGKM_TypeDefinitionIndex = 52149;

class NMLEGIGBGKM : public ::System::Object
{
public:
	::System::String* MEEGOLKKJLJ; // 0x10
	::OFEOCBBINAC* NGMJEPKNHND; // 0x18
	::MoleMole::Config::ConfigFloorMetaData* OGBEIADHMOO; // 0x20
	::System::String* NOLFMJCDADD; // 0x28
	::System::Collections::Generic::List_1<::IHPKKNHNLHF*>* GABMIMJOCGD; // 0x30
	::System::String* DNCONFODNOH; // 0x38
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* JKGKMKDODFA; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDecorBase*>* DPJEJHOGEEA; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* MHHHEGDLBPJ; // 0x50
	::System::String* MGEDBKBHJPM; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* JPMGHPCLAPD; // 0x60
	::EENKDDFKHNJ* NCBEKCAOIEA; // 0x68
	::System::UInt64 KNJMKDCODPE; // 0x70
	::System::Int32 BGMOLEPOCBC; // 0x78
	::System::Int32 OFAGJNBBKJM; // 0x7C
	::GLHOLLOPOOB HCFFIHHPOME; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::PCFMJDNECHN*>* ECBNGKBGOLI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::PCFMJDNECHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_ECBNGKBGOLI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* BKJLCKGPEDK()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_BKJLCKGPEDK_OFFSET))(this);
	}

	::System::Void NKEPJMCKKFK(::System::Collections::Generic::Dictionary_2<::System::String*, ::CHDFDOGABHI*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CHDFDOGABHI*>*))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_NKEPJMCKKFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DJBAMLAFPMM(::System::Collections::Generic::Dictionary_2<::System::String*, ::PCFMJDNECHN*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::PCFMJDNECHN*>*))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_DJBAMLAFPMM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ABGCNKNMEDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_ABGCNKNMEDG_OFFSET))(this);
	}

	::System::Void CIPKGLANDJB(::System::Collections::Generic::Dictionary_2<::System::String*, ::GEAPPLEFPJJ*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::GEAPPLEFPJJ*>*))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_CIPKGLANDJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::GEAPPLEFPJJ*>* ANEIDJPIGBI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::GEAPPLEFPJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_ANEIDJPIGBI_OFFSET))(this);
	}

	::System::Boolean LHPBCBDJMBF(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_LHPBCBDJMBF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::CHDFDOGABHI*>* FMPOIGCKNLA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::CHDFDOGABHI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_FMPOIGCKNLA_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void HLIPGAMELAK(::System::Collections::Generic::Dictionary_2<::System::String*, ::EJHHPFFPFOJ*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::EJHHPFFPFOJ*>*))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_HLIPGAMELAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::EJHHPFFPFOJ*>* BABICJCMOOD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::EJHHPFFPFOJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_BABICJCMOOD_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NMLEGIGBGKM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

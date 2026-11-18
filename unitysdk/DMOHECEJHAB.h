#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNDDJPKHKIG.h"
#include "unitysdk/GLHOLLOPOOB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"

class ANOKJGCCGAO;
class BNOCANIDOMJ;
class FKNIEPCILLG;
class FLDPBAPLICI;
class JBMLINGAINC;
class OFEOCBBINAC;
namespace MoleMole::Config { class ConfigGroupMetaData; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMOHECEJHAB_CKMLBAIMHOO_OFFSET UNITYSDK_OFFSET(0x7FCA8A0)
#define DMOHECEJHAB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7FC94F0)
#define DMOHECEJHAB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7FC7DB0)
#define DMOHECEJHAB_GIEMHCFJNOB_OFFSET UNITYSDK_OFFSET(0x7FC9EA0)
#define DMOHECEJHAB_HNCPFIEILCC_1_OFFSET UNITYSDK_OFFSET(0x7FCA2A0)
#define DMOHECEJHAB_HNCPFIEILCC_OFFSET UNITYSDK_OFFSET(0x7FCA590)
#define DMOHECEJHAB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7FC9550)
#define DMOHECEJHAB_JMLDACLFFIK_OFFSET UNITYSDK_OFFSET(0x7FCA180)
#define DMOHECEJHAB_JOBPIPBCBDM_1_OFFSET UNITYSDK_OFFSET(0x7FCA1A0)
#define DMOHECEJHAB_JOBPIPBCBDM_OFFSET UNITYSDK_OFFSET(0x7FC9D80)
#define DMOHECEJHAB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7FC7E30)
#define DMOHECEJHAB__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC9D70)

inline static constexpr unsigned int DMOHECEJHAB_TypeDefinitionIndex = 61303;

class DMOHECEJHAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* ECMJKEOHCDN; // 0x10
	::System::Collections::Generic::List_1<::BNOCANIDOMJ*>* AAMKBMMFEJF; // 0x18
	::System::Collections::Generic::List_1<::JBMLINGAINC*>* CFALPMDFMMH; // 0x20
	::OFEOCBBINAC* NGMJEPKNHND; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FLDPBAPLICI*>* LPOEDJADKFA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ANOKJGCCGAO*>* GMPIOOJLCAM; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JBMLINGAINC*>* MHEGGGCJNCH; // 0x40
	::MoleMole::Config::ConfigGroupMetaData* OGBEIADHMOO; // 0x48
	::System::Collections::Generic::List_1<::ANOKJGCCGAO*>* EBJDDJGJFAI; // 0x50
	::System::Collections::Generic::List_1<::FLDPBAPLICI*>* BPIAGIFIPGP; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* PENJPGNLMGJ; // 0x60
	::GLHOLLOPOOB JIJLINIHCAE; // 0x68
	::BNDDJPKHKIG DAGAKPHKNCO; // 0x6C
	::System::Int32 FNOCCHBKAJO; // 0x70
	::System::Int32 LDHNBMKMAAL; // 0x74
	::System::Int32 KEDBFHFLBHI; // 0x78
	::UnityEngine::Vector3 NPHCMANJFOD; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOHECEJHAB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMOHECEJHAB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMOHECEJHAB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMOHECEJHAB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::FLDPBAPLICI* JOBPIPBCBDM(::System::Int32 FLIAHNMICIG)
	{
		return ((::FLDPBAPLICI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMOHECEJHAB_JOBPIPBCBDM_OFFSET))(this, FLIAHNMICIG);
	}

	::System::Int32 JMLDACLFFIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOHECEJHAB_JMLDACLFFIK_OFFSET))(this);
	}

	::FLDPBAPLICI* JOBPIPBCBDM_1(::System::Int32 FLIAHNMICIG, ::System::Int32 OMDIPCJNPJC)
	{
		return ((::FLDPBAPLICI*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMOHECEJHAB_JOBPIPBCBDM_1_OFFSET))(this, FLIAHNMICIG, OMDIPCJNPJC);
	}

	::System::Boolean GIEMHCFJNOB(::System::Int32 LJMPPBEMEPP, ::ANOKJGCCGAO*& POJCLCJFGIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANOKJGCCGAO*&))((::PBYTE)hIl2Cpp + DMOHECEJHAB_GIEMHCFJNOB_OFFSET))(this, LJMPPBEMEPP, POJCLCJFGIO);
	}

	::System::Boolean HNCPFIEILCC(::Foundation::ViewObject::SuiteInfo DOJFEJPBANP, ::JBMLINGAINC*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::JBMLINGAINC*&))((::PBYTE)hIl2Cpp + DMOHECEJHAB_HNCPFIEILCC_OFFSET))(this, DOJFEJPBANP, DFMKILICPFB);
	}

	::System::Boolean CKMLBAIMHOO(::System::Int32 NDHPMBFEEPG, ::FLDPBAPLICI*& GMNBFDNIPMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLDPBAPLICI*&))((::PBYTE)hIl2Cpp + DMOHECEJHAB_CKMLBAIMHOO_OFFSET))(this, NDHPMBFEEPG, GMNBFDNIPMH);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DMOHECEJHAB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean HNCPFIEILCC_1(::System::Int32 LHKLANIDLKC, ::JBMLINGAINC*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JBMLINGAINC*&))((::PBYTE)hIl2Cpp + DMOHECEJHAB_HNCPFIEILCC_1_OFFSET))(this, LHKLANIDLKC, DFMKILICPFB);
	}
};

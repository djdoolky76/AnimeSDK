#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHLJAABIJKE_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x19A08FC0)
#define CHLJAABIJKE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19A06E10)
#define CHLJAABIJKE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A06200)
#define CHLJAABIJKE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19A06F20)
#define CHLJAABIJKE_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x19A06160)
#define CHLJAABIJKE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19A09060)
#define CHLJAABIJKE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19A06F10)
#define CHLJAABIJKE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19A09210)
#define CHLJAABIJKE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19A06260)
#define CHLJAABIJKE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19A06D10)
#define CHLJAABIJKE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19A06FA0)
#define CHLJAABIJKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A08F40)

inline static constexpr unsigned int CHLJAABIJKE_TypeDefinitionIndex = 52125;

class CHLJAABIJKE : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* OPFNOEGLAHG; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JMHAGKFKJPH; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CKEJIEHIODH; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CEHIHKFKMCH; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* KKLIBHHBNPJ; // 0x40
	::MoleMole::Config::DynamicFloat* JPFMHDKNHEF; // 0x48
	::System::String* DFCJFPNCLEO; // 0x50
	::MoleMole::Config::ConfigPosRot* MHDAMHDEBNO; // 0x58
	::System::String* OPHIKGMDNCJ; // 0x60
	::System::Boolean JNPCBFJOCKG; // 0x68
	::System::Boolean LFHKIFPLNGO; // 0x69
	::System::Boolean LAEEPMAKGOH; // 0x6A
	::System::Boolean KDPNCDNHHEH; // 0x6B
	::System::Single KGFNJOIBCBB; // 0x6C
	::System::Boolean DIALNCFGFBM; // 0x70
	::System::Boolean PLFOKANKEJM; // 0x71
	::System::Boolean BOAOGHNCCJN; // 0x72
	::System::Byte _padding0[0x1];
	::MoleMole::Config::EtherEyesObjectSize AHLFKEDPCKP; // 0x74
	::MoleMole::Config::EtherEyesObjectConfig JLPLJJLGKJD; // 0x78
	::System::Int32 IEFAPMPNDDH; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLJAABIJKE__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + CHLJAABIJKE_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLJAABIJKE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CHLJAABIJKE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLJAABIJKE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLJAABIJKE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CHLJAABIJKE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + CHLJAABIJKE_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::CHLJAABIJKE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CHLJAABIJKE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLJAABIJKE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CHLJAABIJKE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLJAABIJKE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CHLJAABIJKE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CHLJAABIJKE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CHLJAABIJKE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

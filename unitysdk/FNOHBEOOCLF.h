#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNOHBEOOCLF_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x142B16C0)
#define FNOHBEOOCLF_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x142B34A0)
#define FNOHBEOOCLF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x142B1F70)
#define FNOHBEOOCLF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x142B16D0)
#define FNOHBEOOCLF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x142B2080)
#define FNOHBEOOCLF_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x142B1620)
#define FNOHBEOOCLF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x142B3540)
#define FNOHBEOOCLF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x142B2070)
#define FNOHBEOOCLF_GJGLDHBABBJ_OFFSET UNITYSDK_OFFSET(0x142B36F0)
#define FNOHBEOOCLF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x142B3340)
#define FNOHBEOOCLF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x142B1730)
#define FNOHBEOOCLF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x142B1E70)
#define FNOHBEOOCLF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x142B2100)
#define FNOHBEOOCLF__CTOR_OFFSET UNITYSDK_OFFSET(0x142B3330)

inline static constexpr unsigned int FNOHBEOOCLF_TypeDefinitionIndex = 65251;

class FNOHBEOOCLF : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NCICMAGFNPO; // 0x20
	::MoleMole::Config::DynamicFloat* CPGFMCFCDIF; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* MIOBMKMOODC; // 0x30
	::MoleMole::Config::DynamicFloat* LOILCNOBEHB; // 0x38
	::MoleMole::Config::DynamicFloat* KOKLFAEKAAM; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BFBGPGIJCII; // 0x48
	::MoleMole::Config::DynamicFloat* POEIKGDNCEJ; // 0x50
	::System::String* HFHJMKDAMCN; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* CEIJBFNAGMF; // 0x60
	::System::Int32 EPBPBOBPBLF; // 0x68
	::System::Boolean MIBBKDGIFPA; // 0x6C
	::System::Boolean BBLHJKKFNBA; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOHBEOOCLF__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FNOHBEOOCLF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FNOHBEOOCLF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::FNOHBEOOCLF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FNOHBEOOCLF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Int32 GJGLDHBABBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_GJGLDHBABBJ_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FNOHBEOOCLF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

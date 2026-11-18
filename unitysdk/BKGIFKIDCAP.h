#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKGIFKIDCAP_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x115F6600)
#define BKGIFKIDCAP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x115F5D70)
#define BKGIFKIDCAP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x115F5810)
#define BKGIFKIDCAP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x115F5E80)
#define BKGIFKIDCAP_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x115F5770)
#define BKGIFKIDCAP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x115F6800)
#define BKGIFKIDCAP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x115F5E70)
#define BKGIFKIDCAP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x115F66A0)
#define BKGIFKIDCAP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x115F5870)
#define BKGIFKIDCAP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x115F5D20)
#define BKGIFKIDCAP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x115F5F00)
#define BKGIFKIDCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x115F65F0)

inline static constexpr unsigned int BKGIFKIDCAP_TypeDefinitionIndex = 41951;

class BKGIFKIDCAP : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::System::String*>* CPJBPBLIGHG; // 0x20
	::System::Boolean AAEGCDKBAGM; // 0x28
	::System::Boolean ADEAGPILFMH; // 0x29
	::System::Byte _padding0[0x2];
	::MoleMole::Config::TeamRelationship DJOBCCBDGHK; // 0x2C
	::MoleMole::Config::TeamRelationship ECFFMDKJHPJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGIFKIDCAP__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::BKGIFKIDCAP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BKGIFKIDCAP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BKGIFKIDCAP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BKGIFKIDCAP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKGIFKIDCAP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

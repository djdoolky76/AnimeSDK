#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/JJACBOELPML.h"
#include "unitysdk/KIMMNBBAHBA.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DKOIHBOIBDG_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x15A52D70)
#define DKOIHBOIBDG_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x15A55C90)
#define DKOIHBOIBDG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15A537D0)
#define DKOIHBOIBDG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15A52D80)
#define DKOIHBOIBDG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15A538E0)
#define DKOIHBOIBDG_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x15A52CD0)
#define DKOIHBOIBDG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15A55980)
#define DKOIHBOIBDG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15A538D0)
#define DKOIHBOIBDG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15A55B30)
#define DKOIHBOIBDG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15A52DE0)
#define DKOIHBOIBDG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15A53730)
#define DKOIHBOIBDG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15A53960)
#define DKOIHBOIBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A55970)

inline static constexpr unsigned int DKOIHBOIBDG_TypeDefinitionIndex = 88863;

class DKOIHBOIBDG : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::ConfigPosRot* BPLCMMDMCFL; // 0x20
	::System::String* LPLPCCIEHBK; // 0x28
	::MoleMole::Config::ConfigPosRot* KFMHKPMMGFO; // 0x30
	::System::String* BPOPIDAAKAH; // 0x38
	::MoleMole::Config::ConfigPosRot* PKDGCCEADNG; // 0x40
	::System::Single MGMFPLOLBMF; // 0x48
	::System::Single LDGJCHLFHHM; // 0x4C
	::System::Single KCHNDCELHMD; // 0x50
	::System::Single FFNBHEIBGNN; // 0x54
	::System::Boolean HNPKADILOFM; // 0x58
	::System::Byte _padding0[0x3];
	::System::Single GEGDKLAEGBH; // 0x5C
	::System::Single JPBMELLIKPC; // 0x60
	::JJACBOELPML IJNIDDOECJK; // 0x64
	::System::Single CIBCIDCJBDG; // 0x68
	::System::Single MJEBNMKNOHF; // 0x6C
	::System::Single EDPKOOJJJFB; // 0x70
	::System::Single HLPANMHDDAO; // 0x74
	::System::Single AKHCOKBGEEM; // 0x78
	::KIMMNBBAHBA KKFOFKPIFFK; // 0x7C
	::System::Single DNDFAOCCHJE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOIHBOIBDG__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DKOIHBOIBDG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DKOIHBOIBDG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DKOIHBOIBDG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DKOIHBOIBDG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DKOIHBOIBDG_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};

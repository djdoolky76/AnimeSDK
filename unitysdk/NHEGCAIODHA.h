#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class ECDBKIANFHH;
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

#define NHEGCAIODHA_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x12FE7290)
#define NHEGCAIODHA_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x12FE8630)
#define NHEGCAIODHA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12FE7900)
#define NHEGCAIODHA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12FE72A0)
#define NHEGCAIODHA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12FE7A10)
#define NHEGCAIODHA_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x12FE71F0)
#define NHEGCAIODHA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12FE8830)
#define NHEGCAIODHA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12FE7A00)
#define NHEGCAIODHA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12FE86D0)
#define NHEGCAIODHA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12FE7300)
#define NHEGCAIODHA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12FE7870)
#define NHEGCAIODHA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12FE7A90)
#define NHEGCAIODHA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE8620)

inline static constexpr unsigned int NHEGCAIODHA_TypeDefinitionIndex = 39196;

class NHEGCAIODHA : public ::OOHOOAFNBNF
{
public:
	::ECDBKIANFHH* PNBJEIKMEOL; // 0x20
	::System::String* NLMDCHJBIJD; // 0x28
	::MoleMole::Config::DynamicFloat* FEPICAMEKLJ; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KNPONDFFLPE; // 0x38
	::System::Boolean DLAKDBFAIOA; // 0x40
	::System::Boolean OKABBHMIOOM; // 0x41
	::System::Byte _padding0[0x2];
	::MoleMole::Config::AbilityTargetting BHMLIFIKCEL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEGCAIODHA__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + NHEGCAIODHA_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEGCAIODHA_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHEGCAIODHA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NHEGCAIODHA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEGCAIODHA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEGCAIODHA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHEGCAIODHA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + NHEGCAIODHA_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::NHEGCAIODHA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NHEGCAIODHA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHEGCAIODHA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NHEGCAIODHA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NHEGCAIODHA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NHEGCAIODHA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHEGCAIODHA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHEGCAIODHA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

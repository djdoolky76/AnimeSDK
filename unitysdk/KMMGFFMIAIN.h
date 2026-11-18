#pragma once
#include "unitysdk/unitysdk.h"
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

#define KMMGFFMIAIN_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x1A2D3530)
#define KMMGFFMIAIN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A2D2800)
#define KMMGFFMIAIN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2D21A0)
#define KMMGFFMIAIN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2D2910)
#define KMMGFFMIAIN_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x1A2D2100)
#define KMMGFFMIAIN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A2D35D0)
#define KMMGFFMIAIN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A2D2900)
#define KMMGFFMIAIN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A2D3780)
#define KMMGFFMIAIN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A2D2200)
#define KMMGFFMIAIN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A2D2770)
#define KMMGFFMIAIN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A2D2990)
#define KMMGFFMIAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D3520)

inline static constexpr unsigned int KMMGFFMIAIN_TypeDefinitionIndex = 67680;

class KMMGFFMIAIN : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* FEPICAMEKLJ; // 0x20
	::ECDBKIANFHH* PNBJEIKMEOL; // 0x28
	::System::String* NLMDCHJBIJD; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KNPONDFFLPE; // 0x38
	::System::Boolean OKABBHMIOOM; // 0x40
	::System::Boolean DLAKDBFAIOA; // 0x41
	::System::Byte _padding0[0x2];
	::MoleMole::Config::AbilityTargetting BHMLIFIKCEL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGFFMIAIN__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::KMMGFFMIAIN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KMMGFFMIAIN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KMMGFFMIAIN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KMMGFFMIAIN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KMMGFFMIAIN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

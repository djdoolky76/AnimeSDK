#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPHBKEAPPDC_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x1C6B8CA0)
#define PPHBKEAPPDC_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x1C6BA7C0)
#define PPHBKEAPPDC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1C6B92F0)
#define PPHBKEAPPDC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6B8CB0)
#define PPHBKEAPPDC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6B9400)
#define PPHBKEAPPDC_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x1C6B8C00)
#define PPHBKEAPPDC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1C6BA610)
#define PPHBKEAPPDC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1C6B93F0)
#define PPHBKEAPPDC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1C6BA4B0)
#define PPHBKEAPPDC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C6B8D10)
#define PPHBKEAPPDC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1C6B9220)
#define PPHBKEAPPDC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C6B9480)
#define PPHBKEAPPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BA4A0)

inline static constexpr unsigned int PPHBKEAPPDC_TypeDefinitionIndex = 93128;

class PPHBKEAPPDC : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* GDFMHHKNEHH; // 0x20
	::MoleMole::Config::DynamicInt* FENLDJHPFIN; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* MLOKEBDBDCN; // 0x30
	::MoleMole::Config::DynamicInt* HLBKHEFJAPH; // 0x38
	::System::String* EDNNKNHNJNH; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* IDJDKBFAPBJ; // 0x48
	::System::String* NLMDCHJBIJD; // 0x50
	::MoleMole::Config::AbilityTargetting PHLJIOJOELM; // 0x58
	::System::Boolean NMKJDFALIMF; // 0x5C
	::System::Boolean GJINPLFHNPA; // 0x5D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHBKEAPPDC__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PPHBKEAPPDC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PPHBKEAPPDC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PPHBKEAPPDC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PPHBKEAPPDC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PPHBKEAPPDC_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};

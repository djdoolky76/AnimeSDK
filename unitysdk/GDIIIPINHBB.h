#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDIIIPINHBB_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x116E1FA0)
#define GDIIIPINHBB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x116E1430)
#define GDIIIPINHBB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E0E60)
#define GDIIIPINHBB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116E1540)
#define GDIIIPINHBB_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x116E0DC0)
#define GDIIIPINHBB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x116E21A0)
#define GDIIIPINHBB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x116E1530)
#define GDIIIPINHBB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x116E2040)
#define GDIIIPINHBB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x116E0EC0)
#define GDIIIPINHBB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x116E1390)
#define GDIIIPINHBB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x116E15C0)
#define GDIIIPINHBB__CTOR_OFFSET UNITYSDK_OFFSET(0x116E1F30)

inline static constexpr unsigned int GDIIIPINHBB_TypeDefinitionIndex = 77346;

class GDIIIPINHBB : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* HKMIIBGPOLC; // 0x20
	::MoleMole::Config::DynamicFloat* EHNHDIPMFPK; // 0x28
	::System::String* BODECKIDFGF; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* IBAGKOKNNDC; // 0x38
	::MoleMole::Config::ConfigEntityAttackProperty* BJPGCNGIOME; // 0x40
	::MoleMole::Config::DamageElementType OPCMLPOFAEF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIIIPINHBB__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + GDIIIPINHBB_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDIIIPINHBB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GDIIIPINHBB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIIIPINHBB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIIIPINHBB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDIIIPINHBB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + GDIIIPINHBB_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::GDIIIPINHBB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GDIIIPINHBB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDIIIPINHBB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDIIIPINHBB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GDIIIPINHBB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GDIIIPINHBB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDIIIPINHBB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GDIIIPINHBB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

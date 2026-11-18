#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LHHNKBDEMGO;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNGIFKHEFEJ_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x1457E490)
#define CNGIFKHEFEJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1457D680)
#define CNGIFKHEFEJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1457D020)
#define CNGIFKHEFEJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1457D790)
#define CNGIFKHEFEJ_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x1457E230)
#define CNGIFKHEFEJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1457E2E0)
#define CNGIFKHEFEJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1457D780)
#define CNGIFKHEFEJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1457E530)
#define CNGIFKHEFEJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1457D080)
#define CNGIFKHEFEJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1457D5C0)
#define CNGIFKHEFEJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1457D810)
#define CNGIFKHEFEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1457E2D0)

inline static constexpr unsigned int CNGIFKHEFEJ_TypeDefinitionIndex = 42773;

class CNGIFKHEFEJ : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* FCDBDKPCKGM; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* OJGFLGFPPMM; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* LBJAHHEBFKG; // 0x30
	::MoleMole::Config::DynamicFloat* DNLANPMKPBM; // 0x38
	::MoleMole::Config::DynamicFloat* CPAAOKLJMMN; // 0x40
	::System::Collections::Generic::List_1<::LHHNKBDEMGO*>* IBOCOGLLIBN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	static ::CNGIFKHEFEJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CNGIFKHEFEJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CNGIFKHEFEJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CNGIFKHEFEJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CNGIFKHEFEJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class BHEKACANAMA;
class FKNIEPCILLG;
class HIDDFHCDAAC;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALLFCCOFHNC_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x145160B0)
#define ALLFCCOFHNC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x145153D0)
#define ALLFCCOFHNC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14514E50)
#define ALLFCCOFHNC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x145154E0)
#define ALLFCCOFHNC_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x14514B80)
#define ALLFCCOFHNC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14516150)
#define ALLFCCOFHNC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x145154D0)
#define ALLFCCOFHNC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14515F50)
#define ALLFCCOFHNC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14514EB0)
#define ALLFCCOFHNC_LMNBAMEMKMD_OFFSET UNITYSDK_OFFSET(0x14516300)
#define ALLFCCOFHNC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14515310)
#define ALLFCCOFHNC_OPNFLKOCBDM_OFFSET UNITYSDK_OFFSET(0x14514C20)
#define ALLFCCOFHNC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14515560)
#define ALLFCCOFHNC__CTOR_OFFSET UNITYSDK_OFFSET(0x14515F40)

inline static constexpr unsigned int ALLFCCOFHNC_TypeDefinitionIndex = 57640;

class ALLFCCOFHNC : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicInt* NOOLOILNGPL; // 0x20
	::MoleMole::Config::DynamicString* DCJCHGOGLMF; // 0x28
	::BHEKACANAMA* LKJDHLCJLJC; // 0x30
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* ABFKHPGIBNI; // 0x40
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* GFALABPIDGJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFCCOFHNC__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* OPNFLKOCBDM()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_OPNFLKOCBDM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ALLFCCOFHNC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ALLFCCOFHNC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::ALLFCCOFHNC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ALLFCCOFHNC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LMNBAMEMKMD()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFCCOFHNC_LMNBAMEMKMD_OFFSET))(this);
	}
};

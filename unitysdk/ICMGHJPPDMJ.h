#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILFLDNIGKOL.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LHHNKBDEMGO;
class LNFCIBHFJHI;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICMGHJPPDMJ_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0xEBB2430)
#define ICMGHJPPDMJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xEBB1170)
#define ICMGHJPPDMJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEBB0A30)
#define ICMGHJPPDMJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEBB1280)
#define ICMGHJPPDMJ_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0xEBB0990)
#define ICMGHJPPDMJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xEBB2280)
#define ICMGHJPPDMJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xEBB1270)
#define ICMGHJPPDMJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xEBB24D0)
#define ICMGHJPPDMJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xEBB0A90)
#define ICMGHJPPDMJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xEBB1090)
#define ICMGHJPPDMJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xEBB1300)
#define ICMGHJPPDMJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB2210)

inline static constexpr unsigned int ICMGHJPPDMJ_TypeDefinitionIndex = 89480;

class ICMGHJPPDMJ : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MLLFNCPEOFE; // 0x20
	::MoleMole::Config::DynamicInt* CEGCEBMFDOP; // 0x28
	::MoleMole::Config::DynamicInt* DHAJIBEAKJD; // 0x30
	::MoleMole::Config::DynamicFloat* FKAIAHLECAG; // 0x38
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x40
	::System::String* FMADPDCJPGL; // 0x48
	::MoleMole::Config::DynamicInt* CJJOABNKHHP; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* NBDOMJMNBOH; // 0x58
	::ILFLDNIGKOL OMMJHJAHNHA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ICMGHJPPDMJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ICMGHJPPDMJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::ICMGHJPPDMJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ICMGHJPPDMJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICMGHJPPDMJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class EJCJKNFPNKF;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEJGIBHBIFJ_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x19749210)
#define DEJGIBHBIFJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19748340)
#define DEJGIBHBIFJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19747C40)
#define DEJGIBHBIFJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19748450)
#define DEJGIBHBIFJ_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x19747BA0)
#define DEJGIBHBIFJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19749060)
#define DEJGIBHBIFJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19748440)
#define DEJGIBHBIFJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19748F00)
#define DEJGIBHBIFJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19747CA0)
#define DEJGIBHBIFJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19748280)
#define DEJGIBHBIFJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x197484D0)
#define DEJGIBHBIFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19748EF0)

inline static constexpr unsigned int DEJGIBHBIFJ_TypeDefinitionIndex = 77153;

class DEJGIBHBIFJ : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* CEOLDPMBINO; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* DDAFLAEECIJ; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NGLHKOJKCDL; // 0x30
	::MoleMole::Config::DynamicString* LOIGNADNABD; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x40
	::EJCJKNFPNKF* PFCNFKNEMPK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DEJGIBHBIFJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DEJGIBHBIFJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::DEJGIBHBIFJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DEJGIBHBIFJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DEJGIBHBIFJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

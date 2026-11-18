#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAMBOFPEKKH_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x140D5040)
#define IAMBOFPEKKH_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x140D6330)
#define IAMBOFPEKKH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x140D5620)
#define IAMBOFPEKKH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140D5050)
#define IAMBOFPEKKH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140D5730)
#define IAMBOFPEKKH_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x140D4FA0)
#define IAMBOFPEKKH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x140D6020)
#define IAMBOFPEKKH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x140D5720)
#define IAMBOFPEKKH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x140D61D0)
#define IAMBOFPEKKH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x140D50B0)
#define IAMBOFPEKKH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x140D5580)
#define IAMBOFPEKKH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x140D57B0)
#define IAMBOFPEKKH__CTOR_OFFSET UNITYSDK_OFFSET(0x140D6010)

inline static constexpr unsigned int IAMBOFPEKKH_TypeDefinitionIndex = 69723;

class IAMBOFPEKKH : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* HBKKNJIKDIH; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BPKOGLMDECK; // 0x28
	::MoleMole::Config::DynamicFloat* PDNFLOFEGND; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* ONGEJAKHKGO; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* DBBLEEPKCHK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMBOFPEKKH__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IAMBOFPEKKH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IAMBOFPEKKH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IAMBOFPEKKH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IAMBOFPEKKH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + IAMBOFPEKKH_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};

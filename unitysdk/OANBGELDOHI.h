#pragma once
#include "unitysdk/unitysdk.h"
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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OANBGELDOHI_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0xFD5A4C0)
#define OANBGELDOHI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFD58F60)
#define OANBGELDOHI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFD58710)
#define OANBGELDOHI_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFD59070)
#define OANBGELDOHI_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0xFD58670)
#define OANBGELDOHI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFD5A6C0)
#define OANBGELDOHI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFD59060)
#define OANBGELDOHI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFD5A560)
#define OANBGELDOHI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFD58770)
#define OANBGELDOHI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFD58E40)
#define OANBGELDOHI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFD590F0)
#define OANBGELDOHI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD5A4B0)

inline static constexpr unsigned int OANBGELDOHI_TypeDefinitionIndex = 87159;

class OANBGELDOHI : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* HOGPICMHABL; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* PHAMNJJOPOE; // 0x28
	::MoleMole::Config::DynamicFloat* PGBMPFNDBCH; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* EBHNNHHHHOK; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* ANKKLOFNDDG; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* FPIEBDBCJGJ; // 0x48
	::MoleMole::Config::DynamicString* NHCJPNOKDNL; // 0x50
	::MoleMole::Config::DynamicString* BODECKIDFGF; // 0x58
	::MoleMole::Config::DynamicFloat* OHMEBEGIGON; // 0x60
	::System::String* KOIOCMBCHKM; // 0x68
	::MoleMole::Config::DynamicFloat* GJLKCLKBNME; // 0x70
	::MoleMole::Config::AbilityTargetting AKNGNKHIJKP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANBGELDOHI__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + OANBGELDOHI_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OANBGELDOHI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OANBGELDOHI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANBGELDOHI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANBGELDOHI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OANBGELDOHI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + OANBGELDOHI_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OANBGELDOHI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OANBGELDOHI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OANBGELDOHI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OANBGELDOHI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OANBGELDOHI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::OANBGELDOHI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OANBGELDOHI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OANBGELDOHI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

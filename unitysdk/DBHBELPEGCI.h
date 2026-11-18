#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBHBELPEGCI_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x13E30570)
#define DBHBELPEGCI_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x13E320E0)
#define DBHBELPEGCI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13E30D80)
#define DBHBELPEGCI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13E30580)
#define DBHBELPEGCI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13E30E90)
#define DBHBELPEGCI_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x13E304D0)
#define DBHBELPEGCI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13E32180)
#define DBHBELPEGCI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13E30E80)
#define DBHBELPEGCI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13E31F80)
#define DBHBELPEGCI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13E305E0)
#define DBHBELPEGCI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13E30CC0)
#define DBHBELPEGCI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13E30F10)
#define DBHBELPEGCI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E31F70)

inline static constexpr unsigned int DBHBELPEGCI_TypeDefinitionIndex = 42225;

class DBHBELPEGCI : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PKPOMCLFJDJ; // 0x20
	::MoleMole::Config::DynamicString* CKHBAGPGBEF; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x30
	::MoleMole::Config::DynamicFloat* IAINLOPFCEL; // 0x38
	::MoleMole::Config::ConfigPosRot* FNOBMEJODIB; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NDHMHDNKJJH; // 0x48
	::MoleMole::Config::HitForwardType CCIBPHGNHDD; // 0x50
	::System::Boolean DGGENNIJLNP; // 0x54
	::System::Boolean LKMGPLNJDKL; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHBELPEGCI__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DBHBELPEGCI_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHBELPEGCI_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBHBELPEGCI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DBHBELPEGCI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHBELPEGCI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHBELPEGCI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBHBELPEGCI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DBHBELPEGCI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DBHBELPEGCI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBHBELPEGCI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBHBELPEGCI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DBHBELPEGCI_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::DBHBELPEGCI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DBHBELPEGCI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBHBELPEGCI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DBHBELPEGCI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADEPJGBBIOA.h"
#include "unitysdk/INPMAMGELOC.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BODGPGKPAFI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18DB02D0)
#define BODGPGKPAFI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x18DB0F90)
#define BODGPGKPAFI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DAFCC0)
#define BODGPGKPAFI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18DB03E0)
#define BODGPGKPAFI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18DB0DE0)
#define BODGPGKPAFI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18DB03D0)
#define BODGPGKPAFI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18DB1060)
#define BODGPGKPAFI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18DAFD20)
#define BODGPGKPAFI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18DB0230)
#define BODGPGKPAFI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x18DAFBC0)
#define BODGPGKPAFI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18DB0460)
#define BODGPGKPAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB0DD0)

inline static constexpr unsigned int BODGPGKPAFI_TypeDefinitionIndex = 80741;

class BODGPGKPAFI : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterStrengthType>* MKCMCEJHFFH; // 0x40
	::MoleMole::Config::DynamicInt* NAFHEFNJHIK; // 0x48
	::System::Int32 DGIAGIMPCEA; // 0x50
	::INPMAMGELOC KAEENHDGBEF; // 0x54
	::MoleMole::Config::BuffGroupName CIPOPCAGGGI; // 0x58
	::ADEPJGBBIOA ILCBBCAFLLG; // 0x5C
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPGKPAFI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BODGPGKPAFI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BODGPGKPAFI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BODGPGKPAFI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPGKPAFI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPGKPAFI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BODGPGKPAFI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BODGPGKPAFI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BODGPGKPAFI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BODGPGKPAFI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BODGPGKPAFI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BODGPGKPAFI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::BODGPGKPAFI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BODGPGKPAFI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BODGPGKPAFI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BODGPGKPAFI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

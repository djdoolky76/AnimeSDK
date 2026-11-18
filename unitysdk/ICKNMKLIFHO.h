#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ICKNMKLIFHO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x140D8C40)
#define ICKNMKLIFHO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x140D93B0)
#define ICKNMKLIFHO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140D89A0)
#define ICKNMKLIFHO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140D8D50)
#define ICKNMKLIFHO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x140D90A0)
#define ICKNMKLIFHO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x140D8D40)
#define ICKNMKLIFHO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x140D9250)
#define ICKNMKLIFHO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x140D8A00)
#define ICKNMKLIFHO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x140D8BF0)
#define ICKNMKLIFHO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x140D88A0)
#define ICKNMKLIFHO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x140D8DD0)
#define ICKNMKLIFHO__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9090)

inline static constexpr unsigned int ICKNMKLIFHO_TypeDefinitionIndex = 77789;

class ICKNMKLIFHO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::MoleMole::Config::MonsterStrengthType EGOFOKBAILN; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKNMKLIFHO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ICKNMKLIFHO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ICKNMKLIFHO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ICKNMKLIFHO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ICKNMKLIFHO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICKNMKLIFHO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

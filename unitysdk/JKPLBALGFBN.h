#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
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

#define JKPLBALGFBN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x138626E0)
#define JKPLBALGFBN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x13862BD0)
#define JKPLBALGFBN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13862480)
#define JKPLBALGFBN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x138627F0)
#define JKPLBALGFBN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13862A20)
#define JKPLBALGFBN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x138627E0)
#define JKPLBALGFBN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13862CA0)
#define JKPLBALGFBN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x138624E0)
#define JKPLBALGFBN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13862690)
#define JKPLBALGFBN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x13862380)
#define JKPLBALGFBN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13862870)
#define JKPLBALGFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13862A10)

inline static constexpr unsigned int JKPLBALGFBN_TypeDefinitionIndex = 68837;

class JKPLBALGFBN : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::RelayAttackType NLILPIHNFDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPLBALGFBN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JKPLBALGFBN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKPLBALGFBN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JKPLBALGFBN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPLBALGFBN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPLBALGFBN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKPLBALGFBN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JKPLBALGFBN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JKPLBALGFBN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKPLBALGFBN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JKPLBALGFBN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JKPLBALGFBN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JKPLBALGFBN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JKPLBALGFBN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKPLBALGFBN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKPLBALGFBN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

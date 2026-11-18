#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIONAGCDFNM.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
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

#define PDHFMCALGCL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B9CB090)
#define PDHFMCALGCL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1B9CB750)
#define PDHFMCALGCL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9CADF0)
#define PDHFMCALGCL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9CB1A0)
#define PDHFMCALGCL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B9CB5A0)
#define PDHFMCALGCL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B9CB190)
#define PDHFMCALGCL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B9CB820)
#define PDHFMCALGCL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B9CAE50)
#define PDHFMCALGCL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B9CB040)
#define PDHFMCALGCL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1B9CACF0)
#define PDHFMCALGCL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B9CB220)
#define PDHFMCALGCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CB590)

inline static constexpr unsigned int PDHFMCALGCL_TypeDefinitionIndex = 66604;

class PDHFMCALGCL : public ::LHHNKBDEMGO
{
public:
	::CIONAGCDFNM LBHPNGCDNHF; // 0x40
	::MoleMole::Config::EnterBattleState OCOJFKMOKMK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHFMCALGCL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PDHFMCALGCL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDHFMCALGCL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PDHFMCALGCL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHFMCALGCL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHFMCALGCL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDHFMCALGCL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PDHFMCALGCL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PDHFMCALGCL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDHFMCALGCL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PDHFMCALGCL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PDHFMCALGCL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::PDHFMCALGCL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PDHFMCALGCL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDHFMCALGCL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDHFMCALGCL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

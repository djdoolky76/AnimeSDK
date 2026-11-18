#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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

#define DPIFLIHHLFM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x106139F0)
#define DPIFLIHHLFM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x10613E70)
#define DPIFLIHHLFM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10613690)
#define DPIFLIHHLFM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10613B00)
#define DPIFLIHHLFM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x106140A0)
#define DPIFLIHHLFM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10613AF0)
#define DPIFLIHHLFM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10613F40)
#define DPIFLIHHLFM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x106136F0)
#define DPIFLIHHLFM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x106139A0)
#define DPIFLIHHLFM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x10613590)
#define DPIFLIHHLFM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10613B80)
#define DPIFLIHHLFM__CTOR_OFFSET UNITYSDK_OFFSET(0x10613E60)

inline static constexpr unsigned int DPIFLIHHLFM_TypeDefinitionIndex = 58197;

class DPIFLIHHLFM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::System::Int32 AMCDAOJKFNF; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFLIHHLFM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::DPIFLIHHLFM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DPIFLIHHLFM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DPIFLIHHLFM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DPIFLIHHLFM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DPIFLIHHLFM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

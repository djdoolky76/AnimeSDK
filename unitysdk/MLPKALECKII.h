#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
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

#define MLPKALECKII_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14D8E590)
#define MLPKALECKII_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14D8EA80)
#define MLPKALECKII_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14D8E330)
#define MLPKALECKII_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14D8E6A0)
#define MLPKALECKII_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14D8E8D0)
#define MLPKALECKII_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14D8E690)
#define MLPKALECKII_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14D8EB50)
#define MLPKALECKII_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14D8E390)
#define MLPKALECKII_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14D8E540)
#define MLPKALECKII_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14D8E240)
#define MLPKALECKII_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14D8E720)
#define MLPKALECKII__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8E8C0)

inline static constexpr unsigned int MLPKALECKII_TypeDefinitionIndex = 88868;

class MLPKALECKII : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DamageElementType ADOCGKEJEOC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPKALECKII__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MLPKALECKII_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPKALECKII_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MLPKALECKII_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPKALECKII_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPKALECKII_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MLPKALECKII_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MLPKALECKII* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MLPKALECKII*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPKALECKII_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPKALECKII_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MLPKALECKII_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::MLPKALECKII* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MLPKALECKII*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MLPKALECKII_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MLPKALECKII_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

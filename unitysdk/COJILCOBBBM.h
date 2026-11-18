#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
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

#define COJILCOBBBM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16885FD0)
#define COJILCOBBBM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16886620)
#define COJILCOBBBM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16885D70)
#define COJILCOBBBM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x168860E0)
#define COJILCOBBBM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16886470)
#define COJILCOBBBM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x168860D0)
#define COJILCOBBBM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16886310)
#define COJILCOBBBM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16885DD0)
#define COJILCOBBBM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16885F80)
#define COJILCOBBBM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16885C80)
#define COJILCOBBBM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16886160)
#define COJILCOBBBM__CTOR_OFFSET UNITYSDK_OFFSET(0x16886300)

inline static constexpr unsigned int COJILCOBBBM_TypeDefinitionIndex = 52008;

class COJILCOBBBM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DamageHitType CGABFPNPJIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJILCOBBBM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + COJILCOBBBM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + COJILCOBBBM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + COJILCOBBBM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + COJILCOBBBM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJILCOBBBM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + COJILCOBBBM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::COJILCOBBBM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::COJILCOBBBM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + COJILCOBBBM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::COJILCOBBBM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::COJILCOBBBM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + COJILCOBBBM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + COJILCOBBBM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + COJILCOBBBM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + COJILCOBBBM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

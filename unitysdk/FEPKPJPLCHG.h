#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
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

#define FEPKPJPLCHG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x116AC790)
#define FEPKPJPLCHG_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x116ACD30)
#define FEPKPJPLCHG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116AC530)
#define FEPKPJPLCHG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116AC8A0)
#define FEPKPJPLCHG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x116ACB80)
#define FEPKPJPLCHG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x116AC890)
#define FEPKPJPLCHG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x116ACE00)
#define FEPKPJPLCHG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x116AC590)
#define FEPKPJPLCHG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x116AC740)
#define FEPKPJPLCHG_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x116AC430)
#define FEPKPJPLCHG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x116AC920)
#define FEPKPJPLCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x116ACB70)

inline static constexpr unsigned int FEPKPJPLCHG_TypeDefinitionIndex = 73587;

class FEPKPJPLCHG : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::HitDataType CDONJLBGEMN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPKPJPLCHG__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FEPKPJPLCHG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FEPKPJPLCHG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FEPKPJPLCHG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FEPKPJPLCHG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FEPKPJPLCHG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

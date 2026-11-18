#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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

#define FMGKFIIEDOL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E6E1E0)
#define FMGKFIIEDOL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15E6E880)
#define FMGKFIIEDOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E6DF10)
#define FMGKFIIEDOL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E6E2F0)
#define FMGKFIIEDOL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15E6E570)
#define FMGKFIIEDOL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15E6E2E0)
#define FMGKFIIEDOL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15E6E720)
#define FMGKFIIEDOL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E6DF70)
#define FMGKFIIEDOL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15E6E150)
#define FMGKFIIEDOL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15E6DE10)
#define FMGKFIIEDOL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E6E370)
#define FMGKFIIEDOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6E560)

inline static constexpr unsigned int FMGKFIIEDOL_TypeDefinitionIndex = 50031;

class FMGKFIIEDOL : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* HFPCJJLPEBD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKFIIEDOL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FMGKFIIEDOL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FMGKFIIEDOL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FMGKFIIEDOL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FMGKFIIEDOL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FMGKFIIEDOL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

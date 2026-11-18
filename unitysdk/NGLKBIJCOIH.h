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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NGLKBIJCOIH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11F74010)
#define NGLKBIJCOIH_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11F74500)
#define NGLKBIJCOIH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F73D40)
#define NGLKBIJCOIH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F74120)
#define NGLKBIJCOIH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11F745D0)
#define NGLKBIJCOIH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11F74110)
#define NGLKBIJCOIH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11F743A0)
#define NGLKBIJCOIH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11F73DA0)
#define NGLKBIJCOIH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11F73F80)
#define NGLKBIJCOIH_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11F73C40)
#define NGLKBIJCOIH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11F741A0)
#define NGLKBIJCOIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F74390)

inline static constexpr unsigned int NGLKBIJCOIH_TypeDefinitionIndex = 39045;

class NGLKBIJCOIH : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicString* CBHOLKMHFAH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLKBIJCOIH__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGLKBIJCOIH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NGLKBIJCOIH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NGLKBIJCOIH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NGLKBIJCOIH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGLKBIJCOIH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

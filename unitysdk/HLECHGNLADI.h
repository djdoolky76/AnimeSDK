#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
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

#define HLECHGNLADI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15BDAA40)
#define HLECHGNLADI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15BDB090)
#define HLECHGNLADI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15BDA7E0)
#define HLECHGNLADI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15BDAB50)
#define HLECHGNLADI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15BDAD80)
#define HLECHGNLADI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15BDAB40)
#define HLECHGNLADI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15BDAF30)
#define HLECHGNLADI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15BDA840)
#define HLECHGNLADI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15BDA9F0)
#define HLECHGNLADI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15BDA6F0)
#define HLECHGNLADI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15BDABD0)
#define HLECHGNLADI__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDAD70)

inline static constexpr unsigned int HLECHGNLADI_TypeDefinitionIndex = 56234;

class HLECHGNLADI : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::LevelEndType HNCANBIGBPH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECHGNLADI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLECHGNLADI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLECHGNLADI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HLECHGNLADI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECHGNLADI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECHGNLADI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HLECHGNLADI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HLECHGNLADI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HLECHGNLADI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLECHGNLADI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HLECHGNLADI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HLECHGNLADI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HLECHGNLADI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HLECHGNLADI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLECHGNLADI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLECHGNLADI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

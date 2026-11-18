#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
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

#define NOKJIKDNCDD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10680E30)
#define NOKJIKDNCDD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x10681170)
#define NOKJIKDNCDD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10680BD0)
#define NOKJIKDNCDD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10680F40)
#define NOKJIKDNCDD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x106813A0)
#define NOKJIKDNCDD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10680F30)
#define NOKJIKDNCDD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10681240)
#define NOKJIKDNCDD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10680C30)
#define NOKJIKDNCDD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10680DE0)
#define NOKJIKDNCDD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x10680A90)
#define NOKJIKDNCDD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10680FC0)
#define NOKJIKDNCDD__CTOR_OFFSET UNITYSDK_OFFSET(0x10681160)

inline static constexpr unsigned int NOKJIKDNCDD_TypeDefinitionIndex = 49161;

class NOKJIKDNCDD : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::EntityType JAICKFPPOEO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJIKDNCDD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::NOKJIKDNCDD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NOKJIKDNCDD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NOKJIKDNCDD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NOKJIKDNCDD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOKJIKDNCDD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

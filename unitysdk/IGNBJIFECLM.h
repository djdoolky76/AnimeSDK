#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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

#define IGNBJIFECLM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF86D3A0)
#define IGNBJIFECLM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xF86DAC0)
#define IGNBJIFECLM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF86D050)
#define IGNBJIFECLM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF86D4B0)
#define IGNBJIFECLM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF86DB90)
#define IGNBJIFECLM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF86D4A0)
#define IGNBJIFECLM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF86D960)
#define IGNBJIFECLM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF86D0B0)
#define IGNBJIFECLM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF86D310)
#define IGNBJIFECLM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xF86CF60)
#define IGNBJIFECLM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF86D530)
#define IGNBJIFECLM__CTOR_OFFSET UNITYSDK_OFFSET(0xF86D950)

inline static constexpr unsigned int IGNBJIFECLM_TypeDefinitionIndex = 85830;

class IGNBJIFECLM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* HBADNCJHEOJ; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48
	::MoleMole::Config::DamageElementType PGDKBJFNLOG; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNBJIFECLM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IGNBJIFECLM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGNBJIFECLM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IGNBJIFECLM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNBJIFECLM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNBJIFECLM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IGNBJIFECLM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IGNBJIFECLM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IGNBJIFECLM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IGNBJIFECLM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGNBJIFECLM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IGNBJIFECLM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IGNBJIFECLM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IGNBJIFECLM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IGNBJIFECLM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGNBJIFECLM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

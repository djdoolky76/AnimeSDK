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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MDBMEJHDNHF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1569CAF0)
#define MDBMEJHDNHF_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1569D2B0)
#define MDBMEJHDNHF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1569C6D0)
#define MDBMEJHDNHF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1569CC00)
#define MDBMEJHDNHF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1569D4E0)
#define MDBMEJHDNHF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1569CBF0)
#define MDBMEJHDNHF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1569D380)
#define MDBMEJHDNHF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1569C730)
#define MDBMEJHDNHF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1569CA30)
#define MDBMEJHDNHF_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1569C5D0)
#define MDBMEJHDNHF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1569CC80)
#define MDBMEJHDNHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1569D2A0)

inline static constexpr unsigned int MDBMEJHDNHF_TypeDefinitionIndex = 79351;

class MDBMEJHDNHF : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* CHLOIDLBPFP; // 0x40
	::MoleMole::Config::DynamicInt* JOKJCODFPHG; // 0x48
	::MoleMole::Config::DynamicInt* KLBGAHPJAJO; // 0x50
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBMEJHDNHF__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MDBMEJHDNHF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MDBMEJHDNHF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MDBMEJHDNHF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MDBMEJHDNHF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MDBMEJHDNHF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

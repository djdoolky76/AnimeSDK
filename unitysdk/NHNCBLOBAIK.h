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

#define NHNCBLOBAIK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE580760)
#define NHNCBLOBAIK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xE580C50)
#define NHNCBLOBAIK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE580500)
#define NHNCBLOBAIK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE580870)
#define NHNCBLOBAIK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE580AA0)
#define NHNCBLOBAIK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE580860)
#define NHNCBLOBAIK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE580D20)
#define NHNCBLOBAIK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE580560)
#define NHNCBLOBAIK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE580710)
#define NHNCBLOBAIK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xE580400)
#define NHNCBLOBAIK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE5808F0)
#define NHNCBLOBAIK__CTOR_OFFSET UNITYSDK_OFFSET(0xE580A90)

inline static constexpr unsigned int NHNCBLOBAIK_TypeDefinitionIndex = 41254;

class NHNCBLOBAIK : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DamageElementType ADOCGKEJEOC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNCBLOBAIK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NHNCBLOBAIK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NHNCBLOBAIK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NHNCBLOBAIK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NHNCBLOBAIK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHNCBLOBAIK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

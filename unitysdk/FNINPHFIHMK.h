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

#define FNINPHFIHMK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15CB0660)
#define FNINPHFIHMK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15CB0C80)
#define FNINPHFIHMK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15CB0350)
#define FNINPHFIHMK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15CB0770)
#define FNINPHFIHMK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15CB0D50)
#define FNINPHFIHMK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15CB0760)
#define FNINPHFIHMK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15CB0B20)
#define FNINPHFIHMK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15CB03B0)
#define FNINPHFIHMK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15CB05D0)
#define FNINPHFIHMK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15CB0260)
#define FNINPHFIHMK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15CB07F0)
#define FNINPHFIHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB0B10)

inline static constexpr unsigned int FNINPHFIHMK_TypeDefinitionIndex = 63142;

class FNINPHFIHMK : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* GPIOJBLKFAJ; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINPHFIHMK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FNINPHFIHMK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNINPHFIHMK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FNINPHFIHMK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINPHFIHMK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINPHFIHMK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNINPHFIHMK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FNINPHFIHMK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FNINPHFIHMK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNINPHFIHMK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FNINPHFIHMK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNINPHFIHMK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FNINPHFIHMK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FNINPHFIHMK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNINPHFIHMK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FNINPHFIHMK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

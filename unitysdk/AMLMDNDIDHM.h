#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
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

#define AMLMDNDIDHM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12D09EB0)
#define AMLMDNDIDHM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x12D0A770)
#define AMLMDNDIDHM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D09A50)
#define AMLMDNDIDHM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D09FC0)
#define AMLMDNDIDHM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12D0A5C0)
#define AMLMDNDIDHM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12D09FB0)
#define AMLMDNDIDHM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12D0A840)
#define AMLMDNDIDHM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12D09AB0)
#define AMLMDNDIDHM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12D09E20)
#define AMLMDNDIDHM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x12D09950)
#define AMLMDNDIDHM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12D0A040)
#define AMLMDNDIDHM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0A5B0)

inline static constexpr unsigned int AMLMDNDIDHM_TypeDefinitionIndex = 82496;

class AMLMDNDIDHM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* OJFAKMLOBOB; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48
	::MoleMole::Config::BuffGroupName INHOBHGNEAC; // 0x4C
	::System::Int32 DGIAGIMPCEA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLMDNDIDHM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AMLMDNDIDHM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AMLMDNDIDHM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::AMLMDNDIDHM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AMLMDNDIDHM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AMLMDNDIDHM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

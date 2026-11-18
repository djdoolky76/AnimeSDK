#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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

#define EDFBNAMPAPO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12BE4980)
#define EDFBNAMPAPO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x12BE4DE0)
#define EDFBNAMPAPO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12BE46E0)
#define EDFBNAMPAPO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12BE4A90)
#define EDFBNAMPAPO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12BE4EB0)
#define EDFBNAMPAPO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12BE4A80)
#define EDFBNAMPAPO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12BE5060)
#define EDFBNAMPAPO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12BE4740)
#define EDFBNAMPAPO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12BE4930)
#define EDFBNAMPAPO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x12BE45E0)
#define EDFBNAMPAPO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12BE4B10)
#define EDFBNAMPAPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE4DD0)

inline static constexpr unsigned int EDFBNAMPAPO_TypeDefinitionIndex = 41783;

class EDFBNAMPAPO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::MoleMole::Config::CharacterSize IOPMKCNILEP; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBNAMPAPO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::EDFBNAMPAPO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EDFBNAMPAPO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EDFBNAMPAPO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EDFBNAMPAPO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EDFBNAMPAPO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

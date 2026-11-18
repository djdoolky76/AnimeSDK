#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
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

#define OJOLEBIDACJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1844A870)
#define OJOLEBIDACJ_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1844B000)
#define OJOLEBIDACJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1844A540)
#define OJOLEBIDACJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1844A980)
#define OJOLEBIDACJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1844ACF0)
#define OJOLEBIDACJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1844A970)
#define OJOLEBIDACJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1844AEA0)
#define OJOLEBIDACJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1844A5A0)
#define OJOLEBIDACJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1844A820)
#define OJOLEBIDACJ_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1844A440)
#define OJOLEBIDACJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1844AA00)
#define OJOLEBIDACJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1844ACE0)

inline static constexpr unsigned int OJOLEBIDACJ_TypeDefinitionIndex = 79218;

class OJOLEBIDACJ : public ::LHHNKBDEMGO
{
public:
	::System::Boolean MGJFHBJAPDM; // 0x40
	::System::Byte _padding0[0x3];
	::MoleMole::Config::EntitySkillType BHJDNIPGFGN; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOLEBIDACJ__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OJOLEBIDACJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OJOLEBIDACJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OJOLEBIDACJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OJOLEBIDACJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OJOLEBIDACJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

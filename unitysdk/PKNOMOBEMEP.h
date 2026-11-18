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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PKNOMOBEMEP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1BF210C0)
#define PKNOMOBEMEP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1BF21540)
#define PKNOMOBEMEP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BF20D60)
#define PKNOMOBEMEP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BF211D0)
#define PKNOMOBEMEP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1BF21770)
#define PKNOMOBEMEP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1BF211C0)
#define PKNOMOBEMEP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1BF21610)
#define PKNOMOBEMEP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1BF20DC0)
#define PKNOMOBEMEP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1BF21070)
#define PKNOMOBEMEP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1BF20C60)
#define PKNOMOBEMEP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1BF21250)
#define PKNOMOBEMEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF21530)

inline static constexpr unsigned int PKNOMOBEMEP_TypeDefinitionIndex = 92514;

class PKNOMOBEMEP : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::System::Int32 AMCDAOJKFNF; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOMOBEMEP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PKNOMOBEMEP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PKNOMOBEMEP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PKNOMOBEMEP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PKNOMOBEMEP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PKNOMOBEMEP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

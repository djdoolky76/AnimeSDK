#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEHBBEBFDBM.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPONHPDIHLO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16CDBEB0)
#define GPONHPDIHLO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16CDC640)
#define GPONHPDIHLO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CDBAA0)
#define GPONHPDIHLO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16CDBFC0)
#define GPONHPDIHLO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16CDC490)
#define GPONHPDIHLO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16CDBFB0)
#define GPONHPDIHLO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16CDC710)
#define GPONHPDIHLO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16CDBB00)
#define GPONHPDIHLO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16CDBE20)
#define GPONHPDIHLO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16CDB9A0)
#define GPONHPDIHLO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16CDC040)
#define GPONHPDIHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDC480)

inline static constexpr unsigned int GPONHPDIHLO_TypeDefinitionIndex = 69240;

class GPONHPDIHLO : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FGADEGGHMAB; // 0x40
	::LEHBBEBFDBM ALBGCHOAJBK; // 0x48
	::MoleMole::Config::AbilityTargetting DOPBOJAPCIA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONHPDIHLO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GPONHPDIHLO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPONHPDIHLO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GPONHPDIHLO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONHPDIHLO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONHPDIHLO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPONHPDIHLO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GPONHPDIHLO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GPONHPDIHLO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPONHPDIHLO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GPONHPDIHLO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GPONHPDIHLO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::GPONHPDIHLO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GPONHPDIHLO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPONHPDIHLO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPONHPDIHLO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

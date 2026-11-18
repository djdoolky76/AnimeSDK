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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKMPPJEMJOL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1D62F630)
#define PKMPPJEMJOL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1D630280)
#define PKMPPJEMJOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D62F150)
#define PKMPPJEMJOL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1D62F740)
#define PKMPPJEMJOL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1D6300D0)
#define PKMPPJEMJOL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1D62F730)
#define PKMPPJEMJOL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1D62FF70)
#define PKMPPJEMJOL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1D62F1B0)
#define PKMPPJEMJOL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1D62F570)
#define PKMPPJEMJOL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1D62F050)
#define PKMPPJEMJOL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1D62F7C0)
#define PKMPPJEMJOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62FF60)

inline static constexpr unsigned int PKMPPJEMJOL_TypeDefinitionIndex = 69389;

class PKMPPJEMJOL : public ::LHHNKBDEMGO
{
public:
	::System::String* DCJCHGOGLMF; // 0x40
	::MoleMole::Config::DynamicFloat* OMAIMFOELNN; // 0x48
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x50
	::System::Boolean MJJCDLFKFEO; // 0x58
	::System::Byte _padding0[0x3];
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMPPJEMJOL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PKMPPJEMJOL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PKMPPJEMJOL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PKMPPJEMJOL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PKMPPJEMJOL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKMPPJEMJOL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAIOJPGDPCE.h"
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

#define EGKOPGJCICD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11A705A0)
#define EGKOPGJCICD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11A70DF0)
#define EGKOPGJCICD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A701F0)
#define EGKOPGJCICD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11A706B0)
#define EGKOPGJCICD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11A70EC0)
#define EGKOPGJCICD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11A706A0)
#define EGKOPGJCICD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11A70C90)
#define EGKOPGJCICD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11A70250)
#define EGKOPGJCICD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11A70550)
#define EGKOPGJCICD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11A70070)
#define EGKOPGJCICD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11A70730)
#define EGKOPGJCICD__CTOR_OFFSET UNITYSDK_OFFSET(0x11A70C80)

inline static constexpr unsigned int EGKOPGJCICD_TypeDefinitionIndex = 56185;

class EGKOPGJCICD : public ::LHHNKBDEMGO
{
public:
	::System::Single KAMAIIILMIJ; // 0x40
	::System::Boolean JCAFAFAMHCH; // 0x44
	::System::Byte _padding0[0x3];
	::CAIOJPGDPCE GMOGHFDGEMM; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKOPGJCICD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EGKOPGJCICD_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EGKOPGJCICD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EGKOPGJCICD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKOPGJCICD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKOPGJCICD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EGKOPGJCICD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EGKOPGJCICD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EGKOPGJCICD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EGKOPGJCICD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EGKOPGJCICD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EGKOPGJCICD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EGKOPGJCICD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EGKOPGJCICD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EGKOPGJCICD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EGKOPGJCICD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

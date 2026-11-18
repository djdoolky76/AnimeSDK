#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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

#define IHMABBEKCGM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10147DA0)
#define IHMABBEKCGM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x10148750)
#define IHMABBEKCGM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x101479C0)
#define IHMABBEKCGM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10147EB0)
#define IHMABBEKCGM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10148440)
#define IHMABBEKCGM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10147EA0)
#define IHMABBEKCGM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x101485F0)
#define IHMABBEKCGM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10147A20)
#define IHMABBEKCGM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10147CE0)
#define IHMABBEKCGM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x10147890)
#define IHMABBEKCGM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10147F30)
#define IHMABBEKCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x10148430)

inline static constexpr unsigned int IHMABBEKCGM_TypeDefinitionIndex = 74332;

class IHMABBEKCGM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* GGAAIFFGPGF; // 0x40
	::MoleMole::Config::DynamicInt* CEOIMNAAAHA; // 0x48
	::MoleMole::Config::DynamicInt* PHIOHEDLGGH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMABBEKCGM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IHMABBEKCGM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHMABBEKCGM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IHMABBEKCGM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMABBEKCGM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMABBEKCGM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHMABBEKCGM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IHMABBEKCGM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IHMABBEKCGM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHMABBEKCGM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHMABBEKCGM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IHMABBEKCGM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IHMABBEKCGM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHMABBEKCGM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IHMABBEKCGM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IHMABBEKCGM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

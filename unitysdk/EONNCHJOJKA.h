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

#define EONNCHJOJKA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1427B120)
#define EONNCHJOJKA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1427B5E0)
#define EONNCHJOJKA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1427AE10)
#define EONNCHJOJKA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1427B230)
#define EONNCHJOJKA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1427B810)
#define EONNCHJOJKA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1427B220)
#define EONNCHJOJKA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1427B6B0)
#define EONNCHJOJKA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1427AE70)
#define EONNCHJOJKA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1427B090)
#define EONNCHJOJKA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1427AD10)
#define EONNCHJOJKA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1427B2B0)
#define EONNCHJOJKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1427B5D0)

inline static constexpr unsigned int EONNCHJOJKA_TypeDefinitionIndex = 54136;

class EONNCHJOJKA : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* FDOGGANACAP; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONNCHJOJKA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EONNCHJOJKA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EONNCHJOJKA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EONNCHJOJKA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EONNCHJOJKA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EONNCHJOJKA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EONNCHJOJKA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EONNCHJOJKA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EONNCHJOJKA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EONNCHJOJKA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EONNCHJOJKA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EONNCHJOJKA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EONNCHJOJKA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EONNCHJOJKA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EONNCHJOJKA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EONNCHJOJKA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

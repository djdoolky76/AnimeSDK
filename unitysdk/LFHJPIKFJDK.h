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

#define LFHJPIKFJDK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1524A030)
#define LFHJPIKFJDK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1524A4F0)
#define LFHJPIKFJDK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15249D20)
#define LFHJPIKFJDK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1524A140)
#define LFHJPIKFJDK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1524A5C0)
#define LFHJPIKFJDK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1524A130)
#define LFHJPIKFJDK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1524A770)
#define LFHJPIKFJDK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15249D80)
#define LFHJPIKFJDK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15249FA0)
#define LFHJPIKFJDK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15249C30)
#define LFHJPIKFJDK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1524A1C0)
#define LFHJPIKFJDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1524A4E0)

inline static constexpr unsigned int LFHJPIKFJDK_TypeDefinitionIndex = 56826;

class LFHJPIKFJDK : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* AMCDAOJKFNF; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHJPIKFJDK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LFHJPIKFJDK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LFHJPIKFJDK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LFHJPIKFJDK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LFHJPIKFJDK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFHJPIKFJDK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

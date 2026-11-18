#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGGNMGGBDNK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14B9C590)
#define PGGNMGGBDNK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14B9D230)
#define PGGNMGGBDNK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14B9BEE0)
#define PGGNMGGBDNK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14B9C6A0)
#define PGGNMGGBDNK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14B9CF20)
#define PGGNMGGBDNK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14B9C690)
#define PGGNMGGBDNK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14B9D0D0)
#define PGGNMGGBDNK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14B9BF40)
#define PGGNMGGBDNK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14B9C4C0)
#define PGGNMGGBDNK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14B9BDE0)
#define PGGNMGGBDNK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14B9C720)
#define PGGNMGGBDNK__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9CF10)

inline static constexpr unsigned int PGGNMGGBDNK_TypeDefinitionIndex = 56527;

class PGGNMGGBDNK : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* NAFHEFNJHIK; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterFunctionType>* LEFBOJALDDE; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterStrengthType>* GNJEDMMDOLA; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* FEPPCBPGAPD; // 0x58
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMGGBDNK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGGNMGGBDNK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PGGNMGGBDNK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGGNMGGBDNK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PGGNMGGBDNK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PGGNMGGBDNK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

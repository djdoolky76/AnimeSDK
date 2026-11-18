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

#define HFDLJJPCDFE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14945290)
#define HFDLJJPCDFE_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x149457D0)
#define HFDLJJPCDFE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14944FC0)
#define HFDLJJPCDFE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x149453A0)
#define HFDLJJPCDFE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14945620)
#define HFDLJJPCDFE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14945390)
#define HFDLJJPCDFE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x149458A0)
#define HFDLJJPCDFE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14945020)
#define HFDLJJPCDFE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14945200)
#define HFDLJJPCDFE_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14944EC0)
#define HFDLJJPCDFE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14945420)
#define HFDLJJPCDFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14945610)

inline static constexpr unsigned int HFDLJJPCDFE_TypeDefinitionIndex = 89635;

class HFDLJJPCDFE : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* HFPCJJLPEBD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDLJJPCDFE__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HFDLJJPCDFE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HFDLJJPCDFE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::HFDLJJPCDFE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HFDLJJPCDFE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HFDLJJPCDFE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

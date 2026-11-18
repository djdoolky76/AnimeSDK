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

#define JDGLFMPGPDO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14A54DA0)
#define JDGLFMPGPDO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14A55570)
#define JDGLFMPGPDO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14A54A90)
#define JDGLFMPGPDO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14A54EB0)
#define JDGLFMPGPDO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14A553C0)
#define JDGLFMPGPDO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14A54EA0)
#define JDGLFMPGPDO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14A55260)
#define JDGLFMPGPDO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14A54AF0)
#define JDGLFMPGPDO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14A54D10)
#define JDGLFMPGPDO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14A549A0)
#define JDGLFMPGPDO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14A54F30)
#define JDGLFMPGPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A55250)

inline static constexpr unsigned int JDGLFMPGPDO_TypeDefinitionIndex = 40473;

class JDGLFMPGPDO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* GPIOJBLKFAJ; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGLFMPGPDO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JDGLFMPGPDO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JDGLFMPGPDO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JDGLFMPGPDO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JDGLFMPGPDO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JDGLFMPGPDO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

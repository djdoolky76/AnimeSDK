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

#define GNJEKAIJIDI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16CD7400)
#define GNJEKAIJIDI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16CD7A30)
#define GNJEKAIJIDI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CD70D0)
#define GNJEKAIJIDI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16CD7510)
#define GNJEKAIJIDI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16CD7B00)
#define GNJEKAIJIDI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16CD7500)
#define GNJEKAIJIDI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16CD7CB0)
#define GNJEKAIJIDI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16CD7130)
#define GNJEKAIJIDI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16CD7360)
#define GNJEKAIJIDI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16CD6FE0)
#define GNJEKAIJIDI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16CD7590)
#define GNJEKAIJIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD79B0)

inline static constexpr unsigned int GNJEKAIJIDI_TypeDefinitionIndex = 57036;

class GNJEKAIJIDI : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* PDNGMIPNJEO; // 0x40
	::MoleMole::Config::DynamicInt* DNOOAGCPKBD; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJEKAIJIDI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GNJEKAIJIDI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GNJEKAIJIDI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GNJEKAIJIDI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GNJEKAIJIDI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GNJEKAIJIDI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

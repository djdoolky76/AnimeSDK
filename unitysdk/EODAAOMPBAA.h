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

#define EODAAOMPBAA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1724F530)
#define EODAAOMPBAA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1724F8C0)
#define EODAAOMPBAA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1724F260)
#define EODAAOMPBAA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1724F640)
#define EODAAOMPBAA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1724FAF0)
#define EODAAOMPBAA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1724F630)
#define EODAAOMPBAA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1724F990)
#define EODAAOMPBAA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1724F2C0)
#define EODAAOMPBAA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1724F4A0)
#define EODAAOMPBAA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1724F160)
#define EODAAOMPBAA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1724F6C0)
#define EODAAOMPBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1724F8B0)

inline static constexpr unsigned int EODAAOMPBAA_TypeDefinitionIndex = 87552;

class EODAAOMPBAA : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* OIOEHCAFBMI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODAAOMPBAA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EODAAOMPBAA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EODAAOMPBAA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EODAAOMPBAA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EODAAOMPBAA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EODAAOMPBAA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EODAAOMPBAA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EODAAOMPBAA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EODAAOMPBAA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EODAAOMPBAA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EODAAOMPBAA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EODAAOMPBAA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EODAAOMPBAA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EODAAOMPBAA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EODAAOMPBAA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EODAAOMPBAA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

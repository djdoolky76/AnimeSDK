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

#define OKPNMPKLMCM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFB955A0)
#define OKPNMPKLMCM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xFB95D10)
#define OKPNMPKLMCM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB951C0)
#define OKPNMPKLMCM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB956B0)
#define OKPNMPKLMCM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFB95DE0)
#define OKPNMPKLMCM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFB956A0)
#define OKPNMPKLMCM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFB95BB0)
#define OKPNMPKLMCM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFB95220)
#define OKPNMPKLMCM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFB95510)
#define OKPNMPKLMCM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xFB950C0)
#define OKPNMPKLMCM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFB95730)
#define OKPNMPKLMCM__CTOR_OFFSET UNITYSDK_OFFSET(0xFB95BA0)

inline static constexpr unsigned int OKPNMPKLMCM_TypeDefinitionIndex = 69415;

class OKPNMPKLMCM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* NAFHEFNJHIK; // 0x40
	::System::Boolean EFGFIMCLMCK; // 0x48
	::System::Byte _padding0[0x3];
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPNMPKLMCM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OKPNMPKLMCM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OKPNMPKLMCM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::OKPNMPKLMCM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OKPNMPKLMCM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OKPNMPKLMCM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

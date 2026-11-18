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

#define PPDPOEFOGJF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1D1F9A40)
#define PPDPOEFOGJF_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1D1FA0B0)
#define PPDPOEFOGJF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1F9730)
#define PPDPOEFOGJF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1D1F9B50)
#define PPDPOEFOGJF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1D1F9F00)
#define PPDPOEFOGJF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1D1F9B40)
#define PPDPOEFOGJF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1D1FA180)
#define PPDPOEFOGJF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1D1F9790)
#define PPDPOEFOGJF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1D1F99B0)
#define PPDPOEFOGJF_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1D1F9640)
#define PPDPOEFOGJF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1D1F9BD0)
#define PPDPOEFOGJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F9EF0)

inline static constexpr unsigned int PPDPOEFOGJF_TypeDefinitionIndex = 77116;

class PPDPOEFOGJF : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* AMCDAOJKFNF; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPOEFOGJF__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PPDPOEFOGJF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PPDPOEFOGJF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::PPDPOEFOGJF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PPDPOEFOGJF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPDPOEFOGJF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

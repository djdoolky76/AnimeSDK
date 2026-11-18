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
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define JICAHKGGBKP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1873B4B0)
#define JICAHKGGBKP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1873BAF0)
#define JICAHKGGBKP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1873B120)
#define JICAHKGGBKP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1873B5C0)
#define JICAHKGGBKP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1873BD20)
#define JICAHKGGBKP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1873B5B0)
#define JICAHKGGBKP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1873BBC0)
#define JICAHKGGBKP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1873B180)
#define JICAHKGGBKP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1873B410)
#define JICAHKGGBKP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1873B020)
#define JICAHKGGBKP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1873B640)
#define JICAHKGGBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1873BAE0)

inline static constexpr unsigned int JICAHKGGBKP_TypeDefinitionIndex = 89585;

class JICAHKGGBKP : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* AFIKJAIPLNG; // 0x40
	::MoleMole::Config::DynamicInt* OAKNODKILCN; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICAHKGGBKP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JICAHKGGBKP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JICAHKGGBKP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JICAHKGGBKP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICAHKGGBKP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JICAHKGGBKP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JICAHKGGBKP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JICAHKGGBKP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JICAHKGGBKP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JICAHKGGBKP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::JICAHKGGBKP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JICAHKGGBKP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JICAHKGGBKP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JICAHKGGBKP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JICAHKGGBKP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JICAHKGGBKP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

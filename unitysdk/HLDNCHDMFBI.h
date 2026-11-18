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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HLDNCHDMFBI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14D33810)
#define HLDNCHDMFBI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14D33FB0)
#define HLDNCHDMFBI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14D33430)
#define HLDNCHDMFBI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14D33920)
#define HLDNCHDMFBI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14D33E00)
#define HLDNCHDMFBI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14D33910)
#define HLDNCHDMFBI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14D34080)
#define HLDNCHDMFBI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14D33490)
#define HLDNCHDMFBI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14D33780)
#define HLDNCHDMFBI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14D33330)
#define HLDNCHDMFBI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14D339A0)
#define HLDNCHDMFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14D33DF0)

inline static constexpr unsigned int HLDNCHDMFBI_TypeDefinitionIndex = 89129;

class HLDNCHDMFBI : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* GLJKPNGKGJI; // 0x40
	::System::Boolean LCOBNHFBBNO; // 0x48
	::System::Byte _padding0[0x3];
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNCHDMFBI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HLDNCHDMFBI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HLDNCHDMFBI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HLDNCHDMFBI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HLDNCHDMFBI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HLDNCHDMFBI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

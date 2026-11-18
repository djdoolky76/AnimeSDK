#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FOGIIOFMCLL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11D8C3B0)
#define FOGIIOFMCLL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11D8C950)
#define FOGIIOFMCLL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D8C150)
#define FOGIIOFMCLL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D8C4C0)
#define FOGIIOFMCLL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11D8C7A0)
#define FOGIIOFMCLL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11D8C4B0)
#define FOGIIOFMCLL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11D8CA20)
#define FOGIIOFMCLL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11D8C1B0)
#define FOGIIOFMCLL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11D8C360)
#define FOGIIOFMCLL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11D8C050)
#define FOGIIOFMCLL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11D8C540)
#define FOGIIOFMCLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11D8C790)

inline static constexpr unsigned int FOGIIOFMCLL_TypeDefinitionIndex = 75358;

class FOGIIOFMCLL : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::HitStrengthType HLIBANKHJGK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGIIOFMCLL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FOGIIOFMCLL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FOGIIOFMCLL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::FOGIIOFMCLL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FOGIIOFMCLL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOGIIOFMCLL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

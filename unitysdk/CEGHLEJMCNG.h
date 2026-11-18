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

#define CEGHLEJMCNG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16948100)
#define CEGHLEJMCNG_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x169487A0)
#define CEGHLEJMCNG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16947E30)
#define CEGHLEJMCNG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16948210)
#define CEGHLEJMCNG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x169485F0)
#define CEGHLEJMCNG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16948200)
#define CEGHLEJMCNG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16948490)
#define CEGHLEJMCNG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16947E90)
#define CEGHLEJMCNG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16948070)
#define CEGHLEJMCNG_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16947D30)
#define CEGHLEJMCNG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16948290)
#define CEGHLEJMCNG__CTOR_OFFSET UNITYSDK_OFFSET(0x16948480)

inline static constexpr unsigned int CEGHLEJMCNG_TypeDefinitionIndex = 73470;

class CEGHLEJMCNG : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* BLIFOCHPOCF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGHLEJMCNG__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CEGHLEJMCNG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CEGHLEJMCNG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::CEGHLEJMCNG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CEGHLEJMCNG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEGHLEJMCNG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

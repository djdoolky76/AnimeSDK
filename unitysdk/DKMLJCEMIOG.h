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

#define DKMLJCEMIOG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x132A1460)
#define DKMLJCEMIOG_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x132A1B00)
#define DKMLJCEMIOG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x132A1190)
#define DKMLJCEMIOG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x132A1570)
#define DKMLJCEMIOG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x132A1950)
#define DKMLJCEMIOG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x132A1560)
#define DKMLJCEMIOG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x132A17F0)
#define DKMLJCEMIOG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x132A11F0)
#define DKMLJCEMIOG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x132A13D0)
#define DKMLJCEMIOG_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x132A10A0)
#define DKMLJCEMIOG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x132A15F0)
#define DKMLJCEMIOG__CTOR_OFFSET UNITYSDK_OFFSET(0x132A17E0)

inline static constexpr unsigned int DKMLJCEMIOG_TypeDefinitionIndex = 41052;

class DKMLJCEMIOG : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* ONNCNLJAJHL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMLJCEMIOG__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DKMLJCEMIOG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DKMLJCEMIOG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::DKMLJCEMIOG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DKMLJCEMIOG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKMLJCEMIOG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LHHNKBDEMGO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x184F88F0)
#define LHHNKBDEMGO_ELHNPDEPIII_OFFSET UNITYSDK_OFFSET(0x184F8CC0)
#define LHHNKBDEMGO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x184F1920)
#define LHHNKBDEMGO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x184F8A00)
#define LHHNKBDEMGO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x184F8B70)
#define LHHNKBDEMGO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x184F89F0)
#define LHHNKBDEMGO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x184F8A80)
#define LHHNKBDEMGO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x184F8720)
#define LHHNKBDEMGO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x184F1590)
#define LHHNKBDEMGO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x184F1EF0)
#define LHHNKBDEMGO_NIHJJIAMFGK_OFFSET UNITYSDK_OFFSET(0x184F8B50)
#define LHHNKBDEMGO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x184F1B60)
#define LHHNKBDEMGO__CTOR_OFFSET UNITYSDK_OFFSET(0x184F17B0)

inline static constexpr unsigned int LHHNKBDEMGO_TypeDefinitionIndex = 69056;

class LHHNKBDEMGO : public ::System::Object
{
public:
	::MGHNAPKHBOG _PHDPJDMPBEK_k__BackingField; // 0x10
	::System::String* AKHIMBFPCGH; // 0x28
	::System::String* NLMDCHJBIJD; // 0x30
	::MoleMole::Config::AbilityTargetting KEHECMCDLFC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHNKBDEMGO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LHHNKBDEMGO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LHHNKBDEMGO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::MGHNAPKHBOG NIHJJIAMFGK()
	{
		return ((::MGHNAPKHBOG(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_NIHJJIAMFGK_OFFSET))(this);
	}

	static ::LHHNKBDEMGO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LHHNKBDEMGO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void ELHNPDEPIII(::MGHNAPKHBOG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_ELHNPDEPIII_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHHNKBDEMGO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

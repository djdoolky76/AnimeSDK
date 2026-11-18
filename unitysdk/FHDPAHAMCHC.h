#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHDPAHAMCHC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E603E0)
#define FHDPAHAMCHC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15E609F0)
#define FHDPAHAMCHC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E5FF40)
#define FHDPAHAMCHC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E604F0)
#define FHDPAHAMCHC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15E60AC0)
#define FHDPAHAMCHC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15E604E0)
#define FHDPAHAMCHC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15E60C70)
#define FHDPAHAMCHC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E5FFA0)
#define FHDPAHAMCHC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15E60350)
#define FHDPAHAMCHC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15E5FE40)
#define FHDPAHAMCHC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E60570)
#define FHDPAHAMCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E609E0)

inline static constexpr unsigned int FHDPAHAMCHC_TypeDefinitionIndex = 45216;

class FHDPAHAMCHC : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x40
	::MoleMole::Config::AbilityTargetting FOGKMDAEAML; // 0x48
	::System::Boolean HJAOBJNMNLE; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDPAHAMCHC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FHDPAHAMCHC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FHDPAHAMCHC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FHDPAHAMCHC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FHDPAHAMCHC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHDPAHAMCHC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

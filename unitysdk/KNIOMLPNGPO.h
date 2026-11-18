#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
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

#define KNIOMLPNGPO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xD40A210)
#define KNIOMLPNGPO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xD40A980)
#define KNIOMLPNGPO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD409F70)
#define KNIOMLPNGPO_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD40A320)
#define KNIOMLPNGPO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xD40A670)
#define KNIOMLPNGPO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xD40A310)
#define KNIOMLPNGPO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xD40A820)
#define KNIOMLPNGPO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xD409FD0)
#define KNIOMLPNGPO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xD40A1C0)
#define KNIOMLPNGPO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xD409E70)
#define KNIOMLPNGPO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xD40A3A0)
#define KNIOMLPNGPO__CTOR_OFFSET UNITYSDK_OFFSET(0xD40A660)

inline static constexpr unsigned int KNIOMLPNGPO_TypeDefinitionIndex = 49021;

class KNIOMLPNGPO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DamageElementType IOLJKLBJJKA; // 0x40
	::MoleMole::Config::DamageElementType PIAFKNFELFF; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIOMLPNGPO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KNIOMLPNGPO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KNIOMLPNGPO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KNIOMLPNGPO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KNIOMLPNGPO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KNIOMLPNGPO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

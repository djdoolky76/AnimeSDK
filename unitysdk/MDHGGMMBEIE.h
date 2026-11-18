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

#define MDHGGMMBEIE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14D65970)
#define MDHGGMMBEIE_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14D65CB0)
#define MDHGGMMBEIE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14D65710)
#define MDHGGMMBEIE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14D65A80)
#define MDHGGMMBEIE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14D65EE0)
#define MDHGGMMBEIE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14D65A70)
#define MDHGGMMBEIE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14D65D80)
#define MDHGGMMBEIE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14D65770)
#define MDHGGMMBEIE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14D65920)
#define MDHGGMMBEIE_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14D65620)
#define MDHGGMMBEIE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14D65B00)
#define MDHGGMMBEIE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D65CA0)

inline static constexpr unsigned int MDHGGMMBEIE_TypeDefinitionIndex = 93122;

class MDHGGMMBEIE : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DamageElementType DFALMHFEAEF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHGGMMBEIE__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::MDHGGMMBEIE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MDHGGMMBEIE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MDHGGMMBEIE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MDHGGMMBEIE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MDHGGMMBEIE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

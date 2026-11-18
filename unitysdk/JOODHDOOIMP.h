#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDNPMMAAGNF.h"
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

#define JOODHDOOIMP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17B59F30)
#define JOODHDOOIMP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17B5A390)
#define JOODHDOOIMP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17B59C90)
#define JOODHDOOIMP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17B5A040)
#define JOODHDOOIMP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17B5A460)
#define JOODHDOOIMP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17B5A030)
#define JOODHDOOIMP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17B5A610)
#define JOODHDOOIMP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17B59CF0)
#define JOODHDOOIMP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17B59EE0)
#define JOODHDOOIMP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17B59BA0)
#define JOODHDOOIMP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17B5A0C0)
#define JOODHDOOIMP__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5A380)

inline static constexpr unsigned int JOODHDOOIMP_TypeDefinitionIndex = 59099;

class JOODHDOOIMP : public ::LHHNKBDEMGO
{
public:
	::HDNPMMAAGNF BIOHODJJHFO; // 0x40
	::MoleMole::Config::DamageElementType DFALMHFEAEF; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOODHDOOIMP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JOODHDOOIMP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JOODHDOOIMP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JOODHDOOIMP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOODHDOOIMP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOODHDOOIMP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JOODHDOOIMP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JOODHDOOIMP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JOODHDOOIMP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::JOODHDOOIMP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JOODHDOOIMP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JOODHDOOIMP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JOODHDOOIMP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JOODHDOOIMP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JOODHDOOIMP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JOODHDOOIMP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

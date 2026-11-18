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

#define DFNIGOBNALJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D5D440)
#define DFNIGOBNALJ_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x19D5DBA0)
#define DFNIGOBNALJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D5D0C0)
#define DFNIGOBNALJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D5D550)
#define DFNIGOBNALJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D5DDD0)
#define DFNIGOBNALJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D5D540)
#define DFNIGOBNALJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D5DC70)
#define DFNIGOBNALJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D5D120)
#define DFNIGOBNALJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D5D3B0)
#define DFNIGOBNALJ_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x19D5CFD0)
#define DFNIGOBNALJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D5D5D0)
#define DFNIGOBNALJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5DB90)

inline static constexpr unsigned int DFNIGOBNALJ_TypeDefinitionIndex = 89806;

class DFNIGOBNALJ : public ::LHHNKBDEMGO
{
public:
	::System::String* EPBHCNOJCBD; // 0x40
	::System::Single DNNGGMJALLO; // 0x48
	::System::Single AINFOHOCJIL; // 0x4C
	::MoleMole::Config::AbilityTargetting ACCKNFEIBOO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNIGOBNALJ__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DFNIGOBNALJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DFNIGOBNALJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DFNIGOBNALJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DFNIGOBNALJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DFNIGOBNALJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

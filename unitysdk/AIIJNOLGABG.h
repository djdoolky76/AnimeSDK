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

#define AIIJNOLGABG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x135EA3F0)
#define AIIJNOLGABG_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x135EA930)
#define AIIJNOLGABG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x135EA120)
#define AIIJNOLGABG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x135EA500)
#define AIIJNOLGABG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x135EA780)
#define AIIJNOLGABG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x135EA4F0)
#define AIIJNOLGABG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x135EAA00)
#define AIIJNOLGABG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x135EA180)
#define AIIJNOLGABG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x135EA360)
#define AIIJNOLGABG_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x135EA020)
#define AIIJNOLGABG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x135EA580)
#define AIIJNOLGABG__CTOR_OFFSET UNITYSDK_OFFSET(0x135EA770)

inline static constexpr unsigned int AIIJNOLGABG_TypeDefinitionIndex = 43089;

class AIIJNOLGABG : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* BLIFOCHPOCF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIJNOLGABG__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AIIJNOLGABG_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AIIJNOLGABG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AIIJNOLGABG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIJNOLGABG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIJNOLGABG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AIIJNOLGABG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AIIJNOLGABG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AIIJNOLGABG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AIIJNOLGABG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AIIJNOLGABG_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::AIIJNOLGABG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AIIJNOLGABG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AIIJNOLGABG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AIIJNOLGABG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AIIJNOLGABG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

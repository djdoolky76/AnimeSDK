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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNLDANHFGCA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xBB6FFA0)
#define FNLDANHFGCA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xBB704E0)
#define FNLDANHFGCA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBB6FC10)
#define FNLDANHFGCA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBB700B0)
#define FNLDANHFGCA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xBB70330)
#define FNLDANHFGCA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xBB700A0)
#define FNLDANHFGCA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xBB705B0)
#define FNLDANHFGCA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xBB6FC70)
#define FNLDANHFGCA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xBB6FF10)
#define FNLDANHFGCA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xBB6FB10)
#define FNLDANHFGCA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xBB70130)
#define FNLDANHFGCA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB70320)

inline static constexpr unsigned int FNLDANHFGCA_TypeDefinitionIndex = 67935;

class FNLDANHFGCA : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BJOLOBPBNPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLDANHFGCA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FNLDANHFGCA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNLDANHFGCA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FNLDANHFGCA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLDANHFGCA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLDANHFGCA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNLDANHFGCA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FNLDANHFGCA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FNLDANHFGCA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNLDANHFGCA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FNLDANHFGCA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FNLDANHFGCA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNLDANHFGCA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FNLDANHFGCA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FNLDANHFGCA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNLDANHFGCA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

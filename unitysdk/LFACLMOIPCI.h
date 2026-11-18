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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFACLMOIPCI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19988C60)
#define LFACLMOIPCI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x19988FF0)
#define LFACLMOIPCI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199888D0)
#define LFACLMOIPCI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19988D70)
#define LFACLMOIPCI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19989220)
#define LFACLMOIPCI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19988D60)
#define LFACLMOIPCI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x199890C0)
#define LFACLMOIPCI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19988930)
#define LFACLMOIPCI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19988BD0)
#define LFACLMOIPCI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x199887F0)
#define LFACLMOIPCI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19988DF0)
#define LFACLMOIPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x19988FE0)

inline static constexpr unsigned int LFACLMOIPCI_TypeDefinitionIndex = 46997;

class LFACLMOIPCI : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KLDMPGPGMFG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFACLMOIPCI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LFACLMOIPCI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFACLMOIPCI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LFACLMOIPCI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFACLMOIPCI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFACLMOIPCI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFACLMOIPCI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LFACLMOIPCI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LFACLMOIPCI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LFACLMOIPCI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LFACLMOIPCI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFACLMOIPCI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFACLMOIPCI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LFACLMOIPCI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LFACLMOIPCI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFACLMOIPCI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

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

#define PGDJCMFGMCO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDB69D0)
#define PGDJCMFGMCO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xFDB7070)
#define PGDJCMFGMCO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDB6640)
#define PGDJCMFGMCO_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDB6AE0)
#define PGDJCMFGMCO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDB6EC0)
#define PGDJCMFGMCO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDB6AD0)
#define PGDJCMFGMCO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDB6D60)
#define PGDJCMFGMCO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDB66A0)
#define PGDJCMFGMCO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDB6940)
#define PGDJCMFGMCO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xFDB6540)
#define PGDJCMFGMCO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDB6B60)
#define PGDJCMFGMCO__CTOR_OFFSET UNITYSDK_OFFSET(0xFDB6D50)

inline static constexpr unsigned int PGDJCMFGMCO_TypeDefinitionIndex = 51958;

class PGDJCMFGMCO : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDJCMFGMCO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGDJCMFGMCO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PGDJCMFGMCO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGDJCMFGMCO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PGDJCMFGMCO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PGDJCMFGMCO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

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

#define JHEEDCMIGIC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18738B20)
#define JHEEDCMIGIC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x18738EB0)
#define JHEEDCMIGIC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18738790)
#define JHEEDCMIGIC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18738C30)
#define JHEEDCMIGIC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x187390E0)
#define JHEEDCMIGIC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18738C20)
#define JHEEDCMIGIC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18738F80)
#define JHEEDCMIGIC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x187387F0)
#define JHEEDCMIGIC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18738A90)
#define JHEEDCMIGIC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x18738690)
#define JHEEDCMIGIC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18738CB0)
#define JHEEDCMIGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18738EA0)

inline static constexpr unsigned int JHEEDCMIGIC_TypeDefinitionIndex = 78821;

class JHEEDCMIGIC : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KLDMPGPGMFG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEEDCMIGIC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JHEEDCMIGIC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JHEEDCMIGIC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JHEEDCMIGIC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JHEEDCMIGIC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHEEDCMIGIC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

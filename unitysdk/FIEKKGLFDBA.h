#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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

#define FIEKKGLFDBA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14298530)
#define FIEKKGLFDBA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14298CC0)
#define FIEKKGLFDBA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x142981D0)
#define FIEKKGLFDBA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14298640)
#define FIEKKGLFDBA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14298B10)
#define FIEKKGLFDBA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14298630)
#define FIEKKGLFDBA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x142989B0)
#define FIEKKGLFDBA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14298230)
#define FIEKKGLFDBA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x142984E0)
#define FIEKKGLFDBA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x142980D0)
#define FIEKKGLFDBA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x142986C0)
#define FIEKKGLFDBA__CTOR_OFFSET UNITYSDK_OFFSET(0x142989A0)

inline static constexpr unsigned int FIEKKGLFDBA_TypeDefinitionIndex = 72359;

class FIEKKGLFDBA : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::System::Int32 AMCDAOJKFNF; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEKKGLFDBA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FIEKKGLFDBA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FIEKKGLFDBA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FIEKKGLFDBA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FIEKKGLFDBA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FIEKKGLFDBA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

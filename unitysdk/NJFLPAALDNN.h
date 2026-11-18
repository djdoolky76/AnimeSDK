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

#define NJFLPAALDNN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11599A80)
#define NJFLPAALDNN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1159A210)
#define NJFLPAALDNN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x115997E0)
#define NJFLPAALDNN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11599B90)
#define NJFLPAALDNN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11599F00)
#define NJFLPAALDNN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11599B80)
#define NJFLPAALDNN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1159A0B0)
#define NJFLPAALDNN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11599840)
#define NJFLPAALDNN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11599A30)
#define NJFLPAALDNN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x115996E0)
#define NJFLPAALDNN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11599C10)
#define NJFLPAALDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x11599EF0)

inline static constexpr unsigned int NJFLPAALDNN_TypeDefinitionIndex = 80294;

class NJFLPAALDNN : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::System::Single MMNNLOMMNGL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLPAALDNN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NJFLPAALDNN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJFLPAALDNN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NJFLPAALDNN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLPAALDNN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLPAALDNN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NJFLPAALDNN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NJFLPAALDNN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NJFLPAALDNN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJFLPAALDNN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJFLPAALDNN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NJFLPAALDNN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NJFLPAALDNN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NJFLPAALDNN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NJFLPAALDNN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NJFLPAALDNN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

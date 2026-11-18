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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NEBJHHJAMNN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16B67960)
#define NEBJHHJAMNN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16B67FD0)
#define NEBJHHJAMNN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B67650)
#define NEBJHHJAMNN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B67A70)
#define NEBJHHJAMNN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16B67E20)
#define NEBJHHJAMNN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16B67A60)
#define NEBJHHJAMNN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16B680A0)
#define NEBJHHJAMNN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16B676B0)
#define NEBJHHJAMNN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16B678D0)
#define NEBJHHJAMNN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16B67550)
#define NEBJHHJAMNN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16B67AF0)
#define NEBJHHJAMNN__CTOR_OFFSET UNITYSDK_OFFSET(0x16B67E10)

inline static constexpr unsigned int NEBJHHJAMNN_TypeDefinitionIndex = 68152;

class NEBJHHJAMNN : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* HEEGHCECEBB; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBJHHJAMNN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NEBJHHJAMNN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NEBJHHJAMNN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NEBJHHJAMNN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NEBJHHJAMNN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NEBJHHJAMNN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

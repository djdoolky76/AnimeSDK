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

#define AEFDBMHMEON_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12CE2500)
#define AEFDBMHMEON_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x12CE2BA0)
#define AEFDBMHMEON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12CE2170)
#define AEFDBMHMEON_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12CE2610)
#define AEFDBMHMEON_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12CE2890)
#define AEFDBMHMEON_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12CE2600)
#define AEFDBMHMEON_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12CE2A40)
#define AEFDBMHMEON_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12CE21D0)
#define AEFDBMHMEON_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12CE2470)
#define AEFDBMHMEON_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x12CE2070)
#define AEFDBMHMEON_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12CE2690)
#define AEFDBMHMEON__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE2880)

inline static constexpr unsigned int AEFDBMHMEON_TypeDefinitionIndex = 63180;

class AEFDBMHMEON : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IJJDHDHGCEC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDBMHMEON__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AEFDBMHMEON_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFDBMHMEON_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AEFDBMHMEON_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDBMHMEON_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDBMHMEON_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AEFDBMHMEON_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AEFDBMHMEON_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AEFDBMHMEON* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AEFDBMHMEON*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFDBMHMEON_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFDBMHMEON_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AEFDBMHMEON* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AEFDBMHMEON*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AEFDBMHMEON_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AEFDBMHMEON_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

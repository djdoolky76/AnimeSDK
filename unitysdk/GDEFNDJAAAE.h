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

#define GDEFNDJAAAE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13DBF5D0)
#define GDEFNDJAAAE_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x13DBFC70)
#define GDEFNDJAAAE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13DBF300)
#define GDEFNDJAAAE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13DBF6E0)
#define GDEFNDJAAAE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13DBFAC0)
#define GDEFNDJAAAE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13DBF6D0)
#define GDEFNDJAAAE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13DBF960)
#define GDEFNDJAAAE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13DBF360)
#define GDEFNDJAAAE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13DBF540)
#define GDEFNDJAAAE_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x13DBF030)
#define GDEFNDJAAAE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13DBF760)
#define GDEFNDJAAAE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DBF950)

inline static constexpr unsigned int GDEFNDJAAAE_TypeDefinitionIndex = 68929;

class GDEFNDJAAAE : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* NOOLOILNGPL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEFNDJAAAE__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GDEFNDJAAAE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GDEFNDJAAAE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GDEFNDJAAAE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GDEFNDJAAAE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GDEFNDJAAAE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

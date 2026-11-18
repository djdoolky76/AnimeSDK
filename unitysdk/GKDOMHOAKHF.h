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

#define GKDOMHOAKHF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14CF4DC0)
#define GKDOMHOAKHF_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14CF5590)
#define GKDOMHOAKHF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14CF4AB0)
#define GKDOMHOAKHF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14CF4ED0)
#define GKDOMHOAKHF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14CF5280)
#define GKDOMHOAKHF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14CF4EC0)
#define GKDOMHOAKHF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14CF5430)
#define GKDOMHOAKHF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14CF4B10)
#define GKDOMHOAKHF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14CF4D30)
#define GKDOMHOAKHF_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14CF49C0)
#define GKDOMHOAKHF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14CF4F50)
#define GKDOMHOAKHF__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF5270)

inline static constexpr unsigned int GKDOMHOAKHF_TypeDefinitionIndex = 62436;

class GKDOMHOAKHF : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* HBADNCJHEOJ; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDOMHOAKHF__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GKDOMHOAKHF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GKDOMHOAKHF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GKDOMHOAKHF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GKDOMHOAKHF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GKDOMHOAKHF_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BGCDMBKANDI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12D2A5B0)
#define BGCDMBKANDI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x12D2AE60)
#define BGCDMBKANDI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D2A210)
#define BGCDMBKANDI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D2A6C0)
#define BGCDMBKANDI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12D2ACB0)
#define BGCDMBKANDI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12D2A6B0)
#define BGCDMBKANDI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12D2AF30)
#define BGCDMBKANDI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12D2A270)
#define BGCDMBKANDI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12D2A510)
#define BGCDMBKANDI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x12D2A160)
#define BGCDMBKANDI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12D2A740)
#define BGCDMBKANDI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D2ACA0)

inline static constexpr unsigned int BGCDMBKANDI_TypeDefinitionIndex = 59733;

class BGCDMBKANDI : public ::LHHNKBDEMGO
{
public:
	::System::Object* KLBGAHPJAJO; // 0x40
	::MoleMole::Config::DynamicString* KDEFPBLCEHB; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x50
	::BLPJECICNDE JEJABEHHBIJ; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCDMBKANDI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BGCDMBKANDI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BGCDMBKANDI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BGCDMBKANDI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCDMBKANDI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCDMBKANDI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BGCDMBKANDI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BGCDMBKANDI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BGCDMBKANDI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BGCDMBKANDI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BGCDMBKANDI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BGCDMBKANDI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BGCDMBKANDI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::BGCDMBKANDI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BGCDMBKANDI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BGCDMBKANDI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

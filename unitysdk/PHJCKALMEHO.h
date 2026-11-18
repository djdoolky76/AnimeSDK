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

#define PHJCKALMEHO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1C6578D0)
#define PHJCKALMEHO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1C658350)
#define PHJCKALMEHO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C657420)
#define PHJCKALMEHO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6579E0)
#define PHJCKALMEHO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1C6581A0)
#define PHJCKALMEHO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1C6579D0)
#define PHJCKALMEHO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1C658040)
#define PHJCKALMEHO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C657480)
#define PHJCKALMEHO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1C657840)
#define PHJCKALMEHO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1C657290)
#define PHJCKALMEHO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C657A60)
#define PHJCKALMEHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C658030)

inline static constexpr unsigned int PHJCKALMEHO_TypeDefinitionIndex = 63081;

class PHJCKALMEHO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* AMCDAOJKFNF; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48
	::System::Boolean MMAGMGCMCIB; // 0x4C
	::System::Boolean BFNACLEKNNL; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJCKALMEHO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHJCKALMEHO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHJCKALMEHO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PHJCKALMEHO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJCKALMEHO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJCKALMEHO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PHJCKALMEHO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PHJCKALMEHO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PHJCKALMEHO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PHJCKALMEHO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PHJCKALMEHO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PHJCKALMEHO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHJCKALMEHO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHJCKALMEHO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PHJCKALMEHO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHJCKALMEHO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

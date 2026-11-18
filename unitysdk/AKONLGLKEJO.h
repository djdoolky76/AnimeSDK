#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AKONLGLKEJO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x135F4500)
#define AKONLGLKEJO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x135F4E00)
#define AKONLGLKEJO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x135F41B0)
#define AKONLGLKEJO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x135F4610)
#define AKONLGLKEJO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x135F4C50)
#define AKONLGLKEJO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x135F4600)
#define AKONLGLKEJO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x135F4AF0)
#define AKONLGLKEJO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x135F4210)
#define AKONLGLKEJO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x135F4470)
#define AKONLGLKEJO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x135F4080)
#define AKONLGLKEJO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x135F4690)
#define AKONLGLKEJO__CTOR_OFFSET UNITYSDK_OFFSET(0x135F4AE0)

inline static constexpr unsigned int AKONLGLKEJO_TypeDefinitionIndex = 80235;

class AKONLGLKEJO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* NAFHEFNJHIK; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48
	::MoleMole::Config::DamageHitType CBHMMCLFNJK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONLGLKEJO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AKONLGLKEJO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKONLGLKEJO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AKONLGLKEJO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONLGLKEJO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONLGLKEJO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AKONLGLKEJO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKONLGLKEJO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AKONLGLKEJO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AKONLGLKEJO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AKONLGLKEJO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AKONLGLKEJO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::AKONLGLKEJO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AKONLGLKEJO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKONLGLKEJO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AKONLGLKEJO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

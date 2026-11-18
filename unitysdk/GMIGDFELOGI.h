#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GMIGDFELOGI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18159320)
#define GMIGDFELOGI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x18159C10)
#define GMIGDFELOGI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18158ED0)
#define GMIGDFELOGI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18159430)
#define GMIGDFELOGI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18159CE0)
#define GMIGDFELOGI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18159420)
#define GMIGDFELOGI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18159E90)
#define GMIGDFELOGI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18158F30)
#define GMIGDFELOGI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18159260)
#define GMIGDFELOGI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x18158DE0)
#define GMIGDFELOGI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x181594B0)
#define GMIGDFELOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x18159C00)

inline static constexpr unsigned int GMIGDFELOGI_TypeDefinitionIndex = 57616;

class GMIGDFELOGI : public ::LHHNKBDEMGO
{
public:
	::System::String* GLNJPPONNOD; // 0x40
	::MoleMole::Config::DynamicInt* JGFEJAKILNH; // 0x48
	::MoleMole::Config::DynamicInt* NAFHEFNJHIK; // 0x50
	::MoleMole::Config::AbilityTargetting LODIPIJBDJM; // 0x58
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIGDFELOGI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GMIGDFELOGI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMIGDFELOGI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GMIGDFELOGI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIGDFELOGI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIGDFELOGI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMIGDFELOGI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GMIGDFELOGI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::GMIGDFELOGI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GMIGDFELOGI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMIGDFELOGI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GMIGDFELOGI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GMIGDFELOGI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMIGDFELOGI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMIGDFELOGI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GMIGDFELOGI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

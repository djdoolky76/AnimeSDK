#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/POOKDOMDEGK.h"
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

#define MNMMBMNLGGN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x151ECA60)
#define MNMMBMNLGGN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x151ED4E0)
#define MNMMBMNLGGN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x151EC6A0)
#define MNMMBMNLGGN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x151ECB70)
#define MNMMBMNLGGN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x151ED330)
#define MNMMBMNLGGN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x151ECB60)
#define MNMMBMNLGGN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x151ED1D0)
#define MNMMBMNLGGN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x151EC700)
#define MNMMBMNLGGN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x151EC9C0)
#define MNMMBMNLGGN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x151EC5A0)
#define MNMMBMNLGGN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x151ECBF0)
#define MNMMBMNLGGN__CTOR_OFFSET UNITYSDK_OFFSET(0x151ED1C0)

inline static constexpr unsigned int MNMMBMNLGGN_TypeDefinitionIndex = 80894;

class MNMMBMNLGGN : public ::LHHNKBDEMGO
{
public:
	::System::String* KJIJPMFDCIL; // 0x40
	::MoleMole::Config::DynamicInt* OJFAKMLOBOB; // 0x48
	::POOKDOMDEGK LADJDFNJGED; // 0x50
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMMBMNLGGN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MNMMBMNLGGN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MNMMBMNLGGN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MNMMBMNLGGN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MNMMBMNLGGN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MNMMBMNLGGN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

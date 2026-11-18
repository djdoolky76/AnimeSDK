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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ECAGHODAOLD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1588D0F0)
#define ECAGHODAOLD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1588D5B0)
#define ECAGHODAOLD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1588CDE0)
#define ECAGHODAOLD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1588D200)
#define ECAGHODAOLD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1588D680)
#define ECAGHODAOLD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1588D1F0)
#define ECAGHODAOLD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1588D830)
#define ECAGHODAOLD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1588CE40)
#define ECAGHODAOLD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1588D060)
#define ECAGHODAOLD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1588CCE0)
#define ECAGHODAOLD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1588D280)
#define ECAGHODAOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1588D5A0)

inline static constexpr unsigned int ECAGHODAOLD_TypeDefinitionIndex = 80103;

class ECAGHODAOLD : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicString* NLIDCILLAGO; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAGHODAOLD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ECAGHODAOLD_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECAGHODAOLD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ECAGHODAOLD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAGHODAOLD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAGHODAOLD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECAGHODAOLD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECAGHODAOLD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ECAGHODAOLD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::ECAGHODAOLD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ECAGHODAOLD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECAGHODAOLD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ECAGHODAOLD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ECAGHODAOLD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ECAGHODAOLD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECAGHODAOLD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

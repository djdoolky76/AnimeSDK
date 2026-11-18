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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GNBJBOOMKMK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13D6C720)
#define GNBJBOOMKMK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x13D6CEF0)
#define GNBJBOOMKMK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D6C410)
#define GNBJBOOMKMK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D6C830)
#define GNBJBOOMKMK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13D6CD40)
#define GNBJBOOMKMK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13D6C820)
#define GNBJBOOMKMK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13D6CBE0)
#define GNBJBOOMKMK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D6C470)
#define GNBJBOOMKMK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13D6C690)
#define GNBJBOOMKMK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x13D6C310)
#define GNBJBOOMKMK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D6C8B0)
#define GNBJBOOMKMK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6CBD0)

inline static constexpr unsigned int GNBJBOOMKMK_TypeDefinitionIndex = 68788;

class GNBJBOOMKMK : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* DOLPCJCOAFD; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBJBOOMKMK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GNBJBOOMKMK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GNBJBOOMKMK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GNBJBOOMKMK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GNBJBOOMKMK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GNBJBOOMKMK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

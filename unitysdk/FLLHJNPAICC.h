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

#define FLLHJNPAICC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x179B4F70)
#define FLLHJNPAICC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x179B5300)
#define FLLHJNPAICC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x179B4CA0)
#define FLLHJNPAICC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x179B5080)
#define FLLHJNPAICC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x179B53D0)
#define FLLHJNPAICC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x179B5070)
#define FLLHJNPAICC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x179B5580)
#define FLLHJNPAICC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x179B4D00)
#define FLLHJNPAICC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x179B4EE0)
#define FLLHJNPAICC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x179B4BA0)
#define FLLHJNPAICC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x179B5100)
#define FLLHJNPAICC__CTOR_OFFSET UNITYSDK_OFFSET(0x179B52F0)

inline static constexpr unsigned int FLLHJNPAICC_TypeDefinitionIndex = 68790;

class FLLHJNPAICC : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* DBGJNFKBEJK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLHJNPAICC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FLLHJNPAICC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLLHJNPAICC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FLLHJNPAICC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLHJNPAICC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLHJNPAICC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLLHJNPAICC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FLLHJNPAICC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FLLHJNPAICC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FLLHJNPAICC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FLLHJNPAICC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLLHJNPAICC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLLHJNPAICC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FLLHJNPAICC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FLLHJNPAICC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLLHJNPAICC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

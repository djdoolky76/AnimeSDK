#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DGEIEKHPIOJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19A436E0)
#define DGEIEKHPIOJ_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x19A44310)
#define DGEIEKHPIOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A43150)
#define DGEIEKHPIOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19A437F0)
#define DGEIEKHPIOJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19A443E0)
#define DGEIEKHPIOJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19A437E0)
#define DGEIEKHPIOJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19A441B0)
#define DGEIEKHPIOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19A431B0)
#define DGEIEKHPIOJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19A43610)
#define DGEIEKHPIOJ_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x19A43050)
#define DGEIEKHPIOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19A43870)
#define DGEIEKHPIOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19A441A0)

inline static constexpr unsigned int DGEIEKHPIOJ_TypeDefinitionIndex = 87149;

class DGEIEKHPIOJ : public ::LHHNKBDEMGO
{
public:
	::BHEKACANAMA* BOGFFFBPKHC; // 0x40
	::System::String* KDEFPBLCEHB; // 0x48
	::MoleMole::Config::DynamicFloat* MPLPDPMCKEJ; // 0x50
	::MoleMole::Config::DynamicInt* IKMCEIAFPFA; // 0x58
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x60
	::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE OAAIOHFNCHB; // 0x64
	::System::Int32 JEJABEHHBIJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DGEIEKHPIOJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DGEIEKHPIOJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::DGEIEKHPIOJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DGEIEKHPIOJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGEIEKHPIOJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

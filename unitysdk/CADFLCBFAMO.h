#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CADFLCBFAMO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x115276C0)
#define CADFLCBFAMO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11527D40)
#define CADFLCBFAMO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x115272B0)
#define CADFLCBFAMO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x115277D0)
#define CADFLCBFAMO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11527E10)
#define CADFLCBFAMO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x115277C0)
#define CADFLCBFAMO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11527BE0)
#define CADFLCBFAMO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11527310)
#define CADFLCBFAMO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11527620)
#define CADFLCBFAMO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x115271B0)
#define CADFLCBFAMO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11527850)
#define CADFLCBFAMO__CTOR_OFFSET UNITYSDK_OFFSET(0x11527BD0)

inline static constexpr unsigned int CADFLCBFAMO_TypeDefinitionIndex = 66883;

class CADFLCBFAMO : public ::LHHNKBDEMGO
{
public:
	::System::String* OLBGDKKFCFG; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* IBAGKOKNNDC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADFLCBFAMO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CADFLCBFAMO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CADFLCBFAMO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CADFLCBFAMO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CADFLCBFAMO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CADFLCBFAMO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CADFLCBFAMO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CADFLCBFAMO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CADFLCBFAMO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CADFLCBFAMO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CADFLCBFAMO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CADFLCBFAMO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::CADFLCBFAMO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CADFLCBFAMO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CADFLCBFAMO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CADFLCBFAMO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

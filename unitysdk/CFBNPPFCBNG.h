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

#define CFBNPPFCBNG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10E332E0)
#define CFBNPPFCBNG_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x10E33B10)
#define CFBNPPFCBNG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10E32ED0)
#define CFBNPPFCBNG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10E333F0)
#define CFBNPPFCBNG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10E33800)
#define CFBNPPFCBNG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10E333E0)
#define CFBNPPFCBNG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10E339B0)
#define CFBNPPFCBNG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10E32F30)
#define CFBNPPFCBNG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10E33240)
#define CFBNPPFCBNG_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x10E32DD0)
#define CFBNPPFCBNG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10E33470)
#define CFBNPPFCBNG__CTOR_OFFSET UNITYSDK_OFFSET(0x10E337F0)

inline static constexpr unsigned int CFBNPPFCBNG_TypeDefinitionIndex = 80279;

class CFBNPPFCBNG : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* IBAGKOKNNDC; // 0x40
	::System::String* OLBGDKKFCFG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBNPPFCBNG__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CFBNPPFCBNG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CFBNPPFCBNG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CFBNPPFCBNG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CFBNPPFCBNG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CFBNPPFCBNG_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};

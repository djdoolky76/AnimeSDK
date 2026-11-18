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

#define MFLBFGOFDDD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12D82650)
#define MFLBFGOFDDD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x12D82D20)
#define MFLBFGOFDDD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D82240)
#define MFLBFGOFDDD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D82760)
#define MFLBFGOFDDD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12D82B70)
#define MFLBFGOFDDD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12D82750)
#define MFLBFGOFDDD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12D82DF0)
#define MFLBFGOFDDD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12D822A0)
#define MFLBFGOFDDD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12D825B0)
#define MFLBFGOFDDD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x12D82140)
#define MFLBFGOFDDD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12D827E0)
#define MFLBFGOFDDD__CTOR_OFFSET UNITYSDK_OFFSET(0x12D82B60)

inline static constexpr unsigned int MFLBFGOFDDD_TypeDefinitionIndex = 91211;

class MFLBFGOFDDD : public ::LHHNKBDEMGO
{
public:
	::System::String* OLBGDKKFCFG; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* IBAGKOKNNDC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLBFGOFDDD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MFLBFGOFDDD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MFLBFGOFDDD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::MFLBFGOFDDD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MFLBFGOFDDD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFLBFGOFDDD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

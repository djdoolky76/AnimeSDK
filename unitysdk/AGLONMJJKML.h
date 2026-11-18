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

#define AGLONMJJKML_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1439E970)
#define AGLONMJJKML_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1439ED40)
#define AGLONMJJKML_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1439E6D0)
#define AGLONMJJKML_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1439EA80)
#define AGLONMJJKML_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1439EF70)
#define AGLONMJJKML_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1439EA70)
#define AGLONMJJKML_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1439EE10)
#define AGLONMJJKML_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1439E730)
#define AGLONMJJKML_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1439E8E0)
#define AGLONMJJKML_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1439E5D0)
#define AGLONMJJKML_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1439EB00)
#define AGLONMJJKML__CTOR_OFFSET UNITYSDK_OFFSET(0x1439ECD0)

inline static constexpr unsigned int AGLONMJJKML_TypeDefinitionIndex = 51644;

class AGLONMJJKML : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* EIMBCEJMDFJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLONMJJKML__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AGLONMJJKML_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AGLONMJJKML_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AGLONMJJKML_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLONMJJKML_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLONMJJKML_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AGLONMJJKML_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AGLONMJJKML_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AGLONMJJKML_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AGLONMJJKML_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AGLONMJJKML* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AGLONMJJKML*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AGLONMJJKML_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::AGLONMJJKML* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AGLONMJJKML*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AGLONMJJKML_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

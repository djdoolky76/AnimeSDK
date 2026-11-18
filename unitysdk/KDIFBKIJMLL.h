#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/NNKCMCGFGIB.h"
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

#define KDIFBKIJMLL_DCMEIPMELGP_OFFSET UNITYSDK_OFFSET(0x17642B70)
#define KDIFBKIJMLL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x176426C0)
#define KDIFBKIJMLL_ECFODLPONPG_OFFSET UNITYSDK_OFFSET(0x176421F0)
#define KDIFBKIJMLL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176423F0)
#define KDIFBKIJMLL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x176427D0)
#define KDIFBKIJMLL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17642DB0)
#define KDIFBKIJMLL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x176427C0)
#define KDIFBKIJMLL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17642C50)
#define KDIFBKIJMLL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17642450)
#define KDIFBKIJMLL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17642670)
#define KDIFBKIJMLL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17642850)
#define KDIFBKIJMLL__CTOR_OFFSET UNITYSDK_OFFSET(0x176421E0)

inline static constexpr unsigned int KDIFBKIJMLL_TypeDefinitionIndex = 66575;

class KDIFBKIJMLL : public ::NNKCMCGFGIB
{
public:
	::System::String* LFNMPOCHPLP; // 0x18
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIFBKIJMLL__CTOR_OFFSET))(this);
	}

	::System::String* ECFODLPONPG(::KFHNCJALFJK* GBELIHABEDH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::String*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_ECFODLPONPG_OFFSET))(this, GBELIHABEDH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NNKCMCGFGIB* DGNAAPGKIPL()
	{
		return ((::NNKCMCGFGIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::String* DCMEIPMELGP(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::String*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_DCMEIPMELGP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::KDIFBKIJMLL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KDIFBKIJMLL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KDIFBKIJMLL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KDIFBKIJMLL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KDIFBKIJMLL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

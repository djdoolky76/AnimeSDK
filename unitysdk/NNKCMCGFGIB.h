#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALMNPDMOBMO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NNKCMCGFGIB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x105CF030)
#define NNKCMCGFGIB_ECFODLPONPG_OFFSET UNITYSDK_OFFSET(0x105CEDD0)
#define NNKCMCGFGIB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x105CEE60)
#define NNKCMCGFGIB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x105CF140)
#define NNKCMCGFGIB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x105CF410)
#define NNKCMCGFGIB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x105CF130)
#define NNKCMCGFGIB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x105CF340)
#define NNKCMCGFGIB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x105CEEC0)
#define NNKCMCGFGIB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x105CF020)
#define NNKCMCGFGIB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x105CF1C0)
#define NNKCMCGFGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x105CF330)

inline static constexpr unsigned int NNKCMCGFGIB_TypeDefinitionIndex = 89345;

class NNKCMCGFGIB : public ::System::Object
{
public:
	::ALMNPDMOBMO JEJABEHHBIJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCMCGFGIB__CTOR_OFFSET))(this);
	}

	::System::String* ECFODLPONPG(::KFHNCJALFJK* GBELIHABEDH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::String*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_ECFODLPONPG_OFFSET))(this, GBELIHABEDH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NNKCMCGFGIB* DGNAAPGKIPL()
	{
		return ((::NNKCMCGFGIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NNKCMCGFGIB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NNKCMCGFGIB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NNKCMCGFGIB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NNKCMCGFGIB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NNKCMCGFGIB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

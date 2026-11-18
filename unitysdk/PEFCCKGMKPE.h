#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PEFCCKGMKPE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14B96AD0)
#define PEFCCKGMKPE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14B97050)
#define PEFCCKGMKPE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14B96BE0)
#define PEFCCKGMKPE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14B974A0)
#define PEFCCKGMKPE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14B96BD0)
#define PEFCCKGMKPE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14B97650)
#define PEFCCKGMKPE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14B970B0)
#define PEFCCKGMKPE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14B97410)
#define PEFCCKGMKPE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14B96850)
#define PEFCCKGMKPE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14B96A40)
#define PEFCCKGMKPE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14B96C60)
#define PEFCCKGMKPE__CTOR_OFFSET UNITYSDK_OFFSET(0x14B97310)

inline static constexpr unsigned int PEFCCKGMKPE_TypeDefinitionIndex = 60788;

class PEFCCKGMKPE : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::FOBNALGHPPD_1<::System::Single> JBKNHKJFFOA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFCCKGMKPE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::PEFCCKGMKPE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PEFCCKGMKPE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PEFCCKGMKPE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PEFCCKGMKPE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PEFCCKGMKPE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

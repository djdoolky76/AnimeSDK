#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GAEIJBNKANK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11C860E0)
#define GAEIJBNKANK_EAOFNOLGMFG_OFFSET UNITYSDK_OFFSET(0x11C85F70)
#define GAEIJBNKANK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11C86940)
#define GAEIJBNKANK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11C861F0)
#define GAEIJBNKANK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11C86E00)
#define GAEIJBNKANK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11C861E0)
#define GAEIJBNKANK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11C86FB0)
#define GAEIJBNKANK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11C869A0)
#define GAEIJBNKANK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11C86D70)
#define GAEIJBNKANK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11C85950)
#define GAEIJBNKANK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11C86040)
#define GAEIJBNKANK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11C86270)
#define GAEIJBNKANK__CTOR_OFFSET UNITYSDK_OFFSET(0x11C86CE0)

inline static constexpr unsigned int GAEIJBNKANK_TypeDefinitionIndex = 80139;

class GAEIJBNKANK : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x38
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* NHPBLHLEOJB; // 0x58
	::FOBNALGHPPD_1<::System::Boolean> HFPHBFJBLCJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIJBNKANK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIJBNKANK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GAEIJBNKANK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIJBNKANK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIJBNKANK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GAEIJBNKANK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAEIJBNKANK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIJBNKANK_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::GAEIJBNKANK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GAEIJBNKANK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAEIJBNKANK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAEIJBNKANK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::MoleMole::EntityHandle EAOFNOLGMFG()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIJBNKANK_EAOFNOLGMFG_OFFSET))(this);
	}

	static ::GAEIJBNKANK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GAEIJBNKANK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GAEIJBNKANK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GAEIJBNKANK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

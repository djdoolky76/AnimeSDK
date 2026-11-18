#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HAMFDMFGEED_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11005D20)
#define HAMFDMFGEED_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11006400)
#define HAMFDMFGEED_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11005E30)
#define HAMFDMFGEED_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x110069D0)
#define HAMFDMFGEED_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11005E20)
#define HAMFDMFGEED_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11006870)
#define HAMFDMFGEED_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11006460)
#define HAMFDMFGEED_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x110067E0)
#define HAMFDMFGEED_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11005200)
#define HAMFDMFGEED_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11005C80)
#define HAMFDMFGEED_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11005EB0)
#define HAMFDMFGEED__CTOR_OFFSET UNITYSDK_OFFSET(0x11006750)

inline static constexpr unsigned int HAMFDMFGEED_TypeDefinitionIndex = 83664;

class HAMFDMFGEED : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50
	::HBIBNDIOKPG* ALBCFGOBAEK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMFDMFGEED__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMFDMFGEED_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HAMFDMFGEED_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMFDMFGEED_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMFDMFGEED_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HAMFDMFGEED_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HAMFDMFGEED_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HAMFDMFGEED_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMFDMFGEED_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::HAMFDMFGEED* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HAMFDMFGEED*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HAMFDMFGEED_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::HAMFDMFGEED* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HAMFDMFGEED*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HAMFDMFGEED_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HAMFDMFGEED_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

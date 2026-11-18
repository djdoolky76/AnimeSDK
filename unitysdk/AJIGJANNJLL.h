#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AJIGJANNJLL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11BA3300)
#define AJIGJANNJLL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11BA3970)
#define AJIGJANNJLL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11BA3410)
#define AJIGJANNJLL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11BA3F00)
#define AJIGJANNJLL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11BA3400)
#define AJIGJANNJLL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11BA3DA0)
#define AJIGJANNJLL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11BA39D0)
#define AJIGJANNJLL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11BA3D10)
#define AJIGJANNJLL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11BA2CE0)
#define AJIGJANNJLL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11BA3240)
#define AJIGJANNJLL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11BA3490)
#define AJIGJANNJLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA3C80)

inline static constexpr unsigned int AJIGJANNJLL_TypeDefinitionIndex = 73515;

class AJIGJANNJLL : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* JJPNKMAHJHM; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38
	::GPIOLGMOBLJ* NKCPHIGNDDE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIGJANNJLL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIGJANNJLL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AJIGJANNJLL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIGJANNJLL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIGJANNJLL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AJIGJANNJLL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJIGJANNJLL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIGJANNJLL_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::AJIGJANNJLL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AJIGJANNJLL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AJIGJANNJLL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::AJIGJANNJLL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AJIGJANNJLL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJIGJANNJLL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AJIGJANNJLL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJIGJANNJLL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

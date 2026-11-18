#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NAENDKLEPBO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12C2F540)
#define NAENDKLEPBO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12C2FA50)
#define NAENDKLEPBO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12C2F650)
#define NAENDKLEPBO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12C2FEE0)
#define NAENDKLEPBO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12C2F640)
#define NAENDKLEPBO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12C2FD80)
#define NAENDKLEPBO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12C2FAB0)
#define NAENDKLEPBO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12C30090)
#define NAENDKLEPBO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12C2F380)
#define NAENDKLEPBO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12C2F4B0)
#define NAENDKLEPBO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12C2F6D0)
#define NAENDKLEPBO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C2FCF0)

inline static constexpr unsigned int NAENDKLEPBO_TypeDefinitionIndex = 83606;

class NAENDKLEPBO : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> KLBGAHPJAJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENDKLEPBO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENDKLEPBO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NAENDKLEPBO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENDKLEPBO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENDKLEPBO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NAENDKLEPBO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NAENDKLEPBO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NAENDKLEPBO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NAENDKLEPBO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NAENDKLEPBO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NAENDKLEPBO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NAENDKLEPBO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NAENDKLEPBO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NAENDKLEPBO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENDKLEPBO_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NAENDKLEPBO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

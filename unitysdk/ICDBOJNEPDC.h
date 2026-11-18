#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class IHPPCIEFNOC;
class JPPHPNAAJMO;
namespace MoleMole::Config { class DynamicFloat; }

#define ICDBOJNEPDC_AAKOBKIGIOO_OFFSET UNITYSDK_OFFSET(0x15E9F020)
#define ICDBOJNEPDC_DJIJNKFONBM_OFFSET UNITYSDK_OFFSET(0x15E9EEF0)
#define ICDBOJNEPDC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15EA0470)
#define ICDBOJNEPDC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E9F570)
#define ICDBOJNEPDC_HDEMOBEKGIP_OFFSET UNITYSDK_OFFSET(0x15E9EDC0)
#define ICDBOJNEPDC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15EA04D0)
#define ICDBOJNEPDC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E9F5F0)
#define ICDBOJNEPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA09C0)

inline static constexpr unsigned int ICDBOJNEPDC_TypeDefinitionIndex = 82819;

class ICDBOJNEPDC : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* FMFNOMAGGNP; // 0x10
	::MoleMole::Config::DynamicFloat* PGKDDFGBGEM; // 0x18
	::MoleMole::Config::DynamicFloat* NLJMNEOIMID; // 0x20
	::MoleMole::Config::DynamicFloat* FEKBLNAMHGE; // 0x28
	::MoleMole::Config::DynamicFloat* EKOIBKDPJEK; // 0x30
	::MoleMole::Config::DynamicFloat* MDHLLLMEIPA; // 0x38
	::MoleMole::Config::DynamicFloat* FMMBDAHOCAH; // 0x40
	::System::Int32 DGIAGIMPCEA; // 0x48
	::MoleMole::Config::BuffGroupName INHOBHGNEAC; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBOJNEPDC__CTOR_OFFSET))(this);
	}

	::System::Void HDEMOBEKGIP(::JPPHPNAAJMO* AOBNJBCBHAK, ::IHPPCIEFNOC* KAAAHPHMNGI)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_HDEMOBEKGIP_OFFSET))(this, AOBNJBCBHAK, KAAAHPHMNGI);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::System::Void DJIJNKFONBM(::JPPHPNAAJMO* AOBNJBCBHAK)
	{
		return ((::System::Void(*)(::JPPHPNAAJMO*))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_DJIJNKFONBM_OFFSET))(AOBNJBCBHAK);
	}

	::System::Void AAKOBKIGIOO(::System::Int32 KEHNCKBIBFA, ::JPPHPNAAJMO* AOBNJBCBHAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::JPPHPNAAJMO*))((::PBYTE)hIl2Cpp + ICDBOJNEPDC_AAKOBKIGIOO_OFFSET))(this, KEHNCKBIBFA, AOBNJBCBHAK);
	}
};

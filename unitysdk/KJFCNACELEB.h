#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CADBODHLKKJ.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

#define KJFCNACELEB_BEPJLAIMFIL_OFFSET UNITYSDK_OFFSET(0x1765DF30)
#define KJFCNACELEB_DBPAKELFEMK_OFFSET UNITYSDK_OFFSET(0x1765DF20)
#define KJFCNACELEB_FAKECMKLCLK_OFFSET UNITYSDK_OFFSET(0x1765DED0)
#define KJFCNACELEB_HACFIOEGLPN_OFFSET UNITYSDK_OFFSET(0x1765DF00)
#define KJFCNACELEB_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x1765DF10)
#define KJFCNACELEB_KEABBDPLEAG_OFFSET UNITYSDK_OFFSET(0x1765DEF0)
#define KJFCNACELEB_LPFPICKAAMP_OFFSET UNITYSDK_OFFSET(0x1765DEE0)
#define KJFCNACELEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1765DEA0)

inline static constexpr unsigned int KJFCNACELEB_TypeDefinitionIndex = 74095;

class KJFCNACELEB : public ::System::Object
{
public:
	::CADBODHLKKJ _JNJDDIGJLOD_k__BackingField; // 0x10
	::System::Int32 _IBLHLOLGMMD_k__BackingField; // 0x14
	::System::Int32 _MAKHJEGNLHC_k__BackingField; // 0x18
	::System::Int32 _DEPAKONBHAJ_k__BackingField; // 0x1C
	::System::Boolean _LDOPLMHEFIH_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::MoleMole::Level::RatingType _JNEIIMIPDKE_k__BackingField; // 0x24
	::System::Int32 _CLANCNHGEPE_k__BackingField; // 0x28

	::System::Void _ctor(::CADBODHLKKJ FKMHMOELCIO, ::System::Boolean CAAFEGLOALC, ::System::Int32 HOGLMMODMON, ::System::Int32 GLKNCIDNNOG, ::System::Int32 KOOPNFPBCPN, ::System::Int32 ECCDGOMCODD, ::MoleMole::Level::RatingType HCKDKJHAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::CADBODHLKKJ, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + KJFCNACELEB__CTOR_OFFSET))(this, FKMHMOELCIO, CAAFEGLOALC, HOGLMMODMON, GLKNCIDNNOG, KOOPNFPBCPN, ECCDGOMCODD, HCKDKJHAOMF);
	}

	::System::Int32 FAKECMKLCLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_FAKECMKLCLK_OFFSET))(this);
	}

	::System::Int32 LPFPICKAAMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_LPFPICKAAMP_OFFSET))(this);
	}

	::CADBODHLKKJ KEABBDPLEAG()
	{
		return ((::CADBODHLKKJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_KEABBDPLEAG_OFFSET))(this);
	}

	::System::Boolean HACFIOEGLPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_HACFIOEGLPN_OFFSET))(this);
	}

	::MoleMole::Level::RatingType HDDENLNIPMA()
	{
		return ((::MoleMole::Level::RatingType(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_HDDENLNIPMA_OFFSET))(this);
	}

	::System::Int32 DBPAKELFEMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_DBPAKELFEMK_OFFSET))(this);
	}

	::System::Int32 BEPJLAIMFIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFCNACELEB_BEPJLAIMFIL_OFFSET))(this);
	}
};

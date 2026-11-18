#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIKGMKDLGAM.h"
#include "unitysdk/System/Object.h"

class FDOKNLPCNHO;
class ODLBEJANMEG_GDMONCKFNKP;
class ODLBEJANMEG_PNPLCDHDEPA;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI_CMFCECAJEIC_OFFSET UNITYSDK_OFFSET(0xF17BB40)
#define ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI_NJLJAPOANJN_OFFSET UNITYSDK_OFFSET(0xF17BA10)
#define ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI__CTOR_OFFSET UNITYSDK_OFFSET(0xF17BA00)

inline static constexpr unsigned int ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI_TypeDefinitionIndex = 44368;

class ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* CPCOBKCDFIF; // 0x10
	::ODLBEJANMEG_GDMONCKFNKP* KLHPEBKNIFB; // 0x18
	::OIKGMKDLGAM MMBPHBBNGIF; // 0x20
	::ODLBEJANMEG_PNPLCDHDEPA* GLOEBLOLLLD; // 0x50
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x58
	::System::Action* DLMJCFBENGB; // 0x60
	::System::Boolean NKAHBDINMEO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI__CTOR_OFFSET))(this);
	}

	::System::Void NJLJAPOANJN(::System::Boolean IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI_NJLJAPOANJN_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void CMFCECAJEIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_GDMONCKFNKP_GPCMDLKFKAI_CMFCECAJEIC_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class NPJEDAFCDHF;
namespace System { class Action; }

#define EKGAHGCJOAN_CIHJKNFIEGM_MOOEMHPNMOC_OFFSET UNITYSDK_OFFSET(0x11A983B0)
#define EKGAHGCJOAN_CIHJKNFIEGM_NBPOCDAJCJE_OFFSET UNITYSDK_OFFSET(0x11A98370)
#define EKGAHGCJOAN_CIHJKNFIEGM__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98360)

inline static constexpr unsigned int EKGAHGCJOAN_CIHJKNFIEGM_TypeDefinitionIndex = 51209;

class EKGAHGCJOAN_CIHJKNFIEGM : public ::System::Object
{
public:
	::NPJEDAFCDHF* ALLDLGPEHLM; // 0x10
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20
	::System::Int32 AMCNCFDFMEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CIHJKNFIEGM__CTOR_OFFSET))(this);
	}

	::System::Void NBPOCDAJCJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CIHJKNFIEGM_NBPOCDAJCJE_OFFSET))(this);
	}

	::System::Void MOOEMHPNMOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CIHJKNFIEGM_MOOEMHPNMOC_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPFNLOFNPDM.h"

class EIBHHJENHJK_FBLJJPOFPNE;

#define EIBHHJENHJK_LFNBLCKOAID_NMFHLIDMDGL_OFFSET UNITYSDK_OFFSET(0x10F34720)
#define EIBHHJENHJK_LFNBLCKOAID__CTOR_OFFSET UNITYSDK_OFFSET(0x10F34710)

inline static constexpr unsigned int EIBHHJENHJK_LFNBLCKOAID_TypeDefinitionIndex = 71888;

class EIBHHJENHJK_LFNBLCKOAID : public ::System::Object
{
public:
	::EIBHHJENHJK_FBLJJPOFPNE* EEMOEMFLABI; // 0x10
	::MIKOMFIBMBN JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFNBLCKOAID__CTOR_OFFSET))(this);
	}

	::System::Void NMFHLIDMDGL(::DPFNLOFNPDM DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::DPFNLOFNPDM))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFNBLCKOAID_NMFHLIDMDGL_OFFSET))(this, DJCNCELJPOM);
	}
};

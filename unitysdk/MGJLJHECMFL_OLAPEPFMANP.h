#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCFODEKNDLG;

#define MGJLJHECMFL_OLAPEPFMANP_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x1A64C980)
#define MGJLJHECMFL_OLAPEPFMANP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A64C9E0)
#define MGJLJHECMFL_OLAPEPFMANP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A64C970)

inline static constexpr unsigned int MGJLJHECMFL_OLAPEPFMANP_TypeDefinitionIndex = 80055;

class MGJLJHECMFL_OLAPEPFMANP : public ::System::Object
{
public:
	::KCFODEKNDLG* MBAPBCKIBFO; // 0x10
	::System::Int32 POBLGHCEIPG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_OLAPEPFMANP__CTOR_OFFSET))(this);
	}

	::System::Void DFGOJHPONDC(::KCFODEKNDLG* HMMMOCJAEOA, ::System::Int32 BKEFBIIMBLH)
	{
		return ((::System::Void(*)(::PVOID, ::KCFODEKNDLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MGJLJHECMFL_OLAPEPFMANP_DFGOJHPONDC_OFFSET))(this, HMMMOCJAEOA, BKEFBIIMBLH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_OLAPEPFMANP_PHOADBJGFBE_OFFSET))(this);
	}
};

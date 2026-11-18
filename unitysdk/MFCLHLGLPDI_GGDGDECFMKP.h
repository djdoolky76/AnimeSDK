#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MFCLHLGLPDI_GGDGDECFMKP_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1BB16560)
#define MFCLHLGLPDI_GGDGDECFMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB16550)

inline static constexpr unsigned int MFCLHLGLPDI_GGDGDECFMKP_TypeDefinitionIndex = 12230;

class MFCLHLGLPDI_GGDGDECFMKP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLHLGLPDI_GGDGDECFMKP__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLHLGLPDI_GGDGDECFMKP_FBNBBPGPFHK_OFFSET))(this);
	}
};

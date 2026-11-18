#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPAACPONODL.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KAJKOIDHGLK_JOAKHCOIPNC_OFFSET UNITYSDK_OFFSET(0x12971360)
#define KAJKOIDHGLK_KLOONBBCLNJ_OFFSET UNITYSDK_OFFSET(0x12971240)

inline static constexpr unsigned int KAJKOIDHGLK_TypeDefinitionIndex = 46929;

class KAJKOIDHGLK : public ::System::Object
{
public:
	static ::System::Boolean KLOONBBCLNJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KAJKOIDHGLK_KLOONBBCLNJ_OFFSET))();
	}

	static ::System::String* JOAKHCOIPNC(::HPAACPONODL OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::HPAACPONODL))((::PBYTE)hIl2Cpp + KAJKOIDHGLK_JOAKHCOIPNC_OFFSET))(OBNIAHNMHPF);
	}
};

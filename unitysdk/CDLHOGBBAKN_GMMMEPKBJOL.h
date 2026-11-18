#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CDLHOGBBAKN_GMMMEPKBJOL__CTOR_OFFSET UNITYSDK_OFFSET(0x139A54B0)

inline static constexpr unsigned int CDLHOGBBAKN_GMMMEPKBJOL_TypeDefinitionIndex = 46175;

class CDLHOGBBAKN_GMMMEPKBJOL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_GMMMEPKBJOL__CTOR_OFFSET))(this);
	}
};

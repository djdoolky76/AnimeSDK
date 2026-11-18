#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEAOPOBDBBK.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BIIKFADEIKL;

#define MOLEMOLE_GENERALHEADROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16248640)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralHeadRowContext_TypeDefinitionIndex = 63014;

	class GeneralHeadRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BIIKFADEIKL* InfoData; // 0x28
		::IEAOPOBDBBK generalHeadRowState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALHEADROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

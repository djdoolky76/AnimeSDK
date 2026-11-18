#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EDLAOJHICOE;

#define MOLEMOLE_ACTIVITYAVATARWDIGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A21F0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityAvatarWdigetContext_TypeDefinitionIndex = 83217;

	class ActivityAvatarWdigetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EDLAOJHICOE* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYAVATARWDIGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

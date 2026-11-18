#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IDGDIFDMIDP;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINGAMEINVITECIRCLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1901BD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGameInviteCircleRowContext_TypeDefinitionIndex = 40401;

	class UIInGameInviteCircleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IDGDIFDMIDP* CircleDataExt; // 0x28
		::System::Action_1<::IDGDIFDMIDP*>* OnClickCircle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEINVITECIRCLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

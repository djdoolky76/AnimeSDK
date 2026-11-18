#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class IDGDIFDMIDP;
class ONOPMNIIEAF;

#define MOLEMOLE_UISOCIALCIRCLEAPPLYFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169029E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleApplyFriendCardContext_TypeDefinitionIndex = 85414;

	class UISocialCircleApplyFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::ONOPMNIIEAF* CircleMemberApplyData; // 0x68
		::IDGDIFDMIDP* CircleData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEAPPLYFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

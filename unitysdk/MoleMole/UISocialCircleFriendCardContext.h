#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1715B080)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardContext_TypeDefinitionIndex = 71410;

	class UISocialCircleFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::IDGDIFDMIDP* CircleData; // 0x68
		::GBINEPNHKKO* CircleMemberData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

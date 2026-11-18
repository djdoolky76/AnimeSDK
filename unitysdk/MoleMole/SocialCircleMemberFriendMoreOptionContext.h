#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FriendMoreOptionContext.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;

#define MOLEMOLE_SOCIALCIRCLEMEMBERFRIENDMOREOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD7150)

namespace MoleMole
{
	inline static constexpr unsigned int SocialCircleMemberFriendMoreOptionContext_TypeDefinitionIndex = 74632;

	class SocialCircleMemberFriendMoreOptionContext : public ::MoleMole::FriendMoreOptionContext
	{
	public:
		::GBINEPNHKKO* CircleMemberData; // 0x48
		::IDGDIFDMIDP* CircleData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SOCIALCIRCLEMEMBERFRIENDMOREOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

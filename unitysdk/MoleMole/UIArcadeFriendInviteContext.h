#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PDELBPHBJIL.h"

class FBHPDPBIGPK;
class IDGDIFDMIDP;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEFRIENDINVITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C02BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeFriendInviteContext_TypeDefinitionIndex = 62263;

	class UIArcadeFriendInviteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::FBHPDPBIGPK*>* OnClickFriend; // 0x28
		::System::Action_1<::IDGDIFDMIDP*>* OnClickCircle; // 0x30
		::PDELBPHBJIL InteractType; // 0x38
		::System::Int32 InitSelectTabIdx; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

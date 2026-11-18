#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JGBMOOJHMBF;

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18026130)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerInfoPageController_Context_TypeDefinitionIndex = 38901;

	class UIFriendSystemPlayerInfoPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JGBMOOJHMBF* selfSysInfo; // 0x28
		::System::Int32 InitTabIdx; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

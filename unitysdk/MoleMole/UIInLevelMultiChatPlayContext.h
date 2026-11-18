#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFOAKMODLK.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"

#define MOLEMOLE_UIINLEVELMULTICHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182CF440)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMultiChatPlayContext_TypeDefinitionIndex = 72419;

	class UIInLevelMultiChatPlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::Il2CppArray<::FCFOAKMODLK>* chatEntities; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMULTICHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

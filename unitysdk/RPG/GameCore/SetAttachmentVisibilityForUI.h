#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetAttachmentVisibility.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAttachmentVisibilityForUI; }

#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F859440)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F859450)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F859690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentVisibilityForUI_TypeDefinitionIndex = 22785;

	class SetAttachmentVisibilityForUI : public ::RPG::GameCore::SetAttachmentVisibility
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentVisibilityForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentVisibilityForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

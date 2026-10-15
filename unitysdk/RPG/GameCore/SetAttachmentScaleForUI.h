#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetAttachmentScale.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAttachmentScaleForUI; }

#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA671F0)
#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA67210)
#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA67500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentScaleForUI_TypeDefinitionIndex = 22378;

	class SetAttachmentScaleForUI : public ::RPG::GameCore::SetAttachmentScale
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentScaleForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentScaleForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentScaleForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentScaleForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

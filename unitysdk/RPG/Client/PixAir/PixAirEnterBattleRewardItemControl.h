#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
class PJODNGFAAOK;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2EEC0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB2EE10)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB2ED60)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB2ECA0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleRewardItemControl_TypeDefinitionIndex = 79239;

	class PixAirEnterBattleRewardItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeNum; // 0x40
		::UnityEngine::UI::Text* _TextNum; // 0x48
		::UnityEngine::UI::Image* _ImgReward; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::PJODNGFAAOK* get__ViewModel()
		{
			return ((::PJODNGFAAOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}

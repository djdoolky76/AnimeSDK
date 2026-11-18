#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAM_GETPLAYER_OFFSET UNITYSDK_OFFSET(0x130DB1A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAM_GETTARGET_OFFSET UNITYSDK_OFFSET(0x130DB290)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x130DB390)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParam_TypeDefinitionIndex = 43456;

	class MainCityChatCameraParam : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAM__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Battle::Entity* GetPlayer(::MoleMole::UIMainCityChatPlayWidgetController* context)
		{
			return ((::MoleMole::Battle::Entity*(*)(::MoleMole::UIMainCityChatPlayWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAM_GETPLAYER_OFFSET))(context);
		}

		static ::MoleMole::Battle::Entity* GetTarget(::MoleMole::UIMainCityChatPlayWidgetController* context, ::System::Int32 targetTag)
		{
			return ((::MoleMole::Battle::Entity*(*)(::MoleMole::UIMainCityChatPlayWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAM_GETTARGET_OFFSET))(context, targetTag);
		}
	};
}

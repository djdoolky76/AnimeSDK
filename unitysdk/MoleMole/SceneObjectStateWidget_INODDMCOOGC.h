#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;
namespace MoleMole { class SceneObjectStateWidget; }

#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_INODDMCOOGC_FDBNMIILGCE_OFFSET UNITYSDK_OFFSET(0x198D1C90)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_INODDMCOOGC__CTOR_OFFSET UNITYSDK_OFFSET(0x198D1C80)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectStateWidget_INODDMCOOGC_TypeDefinitionIndex = 63267;

	class SceneObjectStateWidget_INODDMCOOGC : public ::System::Object
	{
	public:
		::MoleMole::SceneObjectStateWidget* KLHPEBKNIFB; // 0x10
		::ScreenPlayData* FKKEKMMKJIJ; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_INODDMCOOGC__CTOR_OFFSET))(this);
		}

		::System::Void FDBNMIILGCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_INODDMCOOGC_FDBNMIILGCE_OFFSET))(this);
		}
	};
}

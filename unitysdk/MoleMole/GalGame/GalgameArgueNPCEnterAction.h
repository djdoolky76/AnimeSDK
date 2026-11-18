#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11918E40)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameArgueNPCEnterAction_TypeDefinitionIndex = 91954;

	class GalgameArgueNPCEnterAction : public ::MoleMole::GalGame::GalGameNPCActionBase
	{
	public:
		::System::String* backgroundKey; // 0x40
		::System::String* depthTexturePath; // 0x48
		::System::Boolean useMainCityTimeBackGround; // 0x50
		::System::Byte _padding0[0x3];
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x54
		::MoleMole::GalGame::GalgameSubFilterType subFilterType; // 0x58
		::MoleMole::GalGame::GalgameRainMode rainMode; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION__CTOR_OFFSET))(this);
		}
	};
}

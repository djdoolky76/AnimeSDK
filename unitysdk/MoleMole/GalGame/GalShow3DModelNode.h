#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"

#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1900)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalShow3DModelNode_TypeDefinitionIndex = 49439;

	class GalShow3DModelNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::ModelConfigTemplateType configType; // 0x20
		::System::Int32 modelID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE__CTOR_OFFSET))(this);
		}
	};
}

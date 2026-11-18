#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;

#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_APPENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9750)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySplitTestSubSystem_AppendData_TypeDefinitionIndex = 59555;

	class EntitySplitTestSubSystem_AppendData : public ::System::Object
	{
	public:
		::GEIHCPAOKKK* characterModel; // 0x10
		::UnityEngine::Vector3 targetPosition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_APPENDDATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define HPHLJOEKAOE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D6CFB0)
#define HPHLJOEKAOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D6CF60)

inline static constexpr unsigned int HPHLJOEKAOE_TypeDefinitionIndex = 58566;

	class HPHLJOEKAOE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* NPNDOKCIONI; // 0x10
		::UnityEngine::Vector3 HIPMLABCLGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLJOEKAOE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLJOEKAOE_DISPOSE_OFFSET))(this);
		}

	};

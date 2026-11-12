#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define KKBKKOEIEEG_KAAEHJBPLFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFD190)

inline static constexpr unsigned int KKBKKOEIEEG_KAAEHJBPLFM_TypeDefinitionIndex = 73466;

	class KKBKKOEIEEG_KAAEHJBPLFM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_KAAEHJBPLFM_CTOR_OFFSET))(this);
		}

	};

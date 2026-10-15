#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeItemUseBuffDropConfig; }

#define RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D839F30)
#define RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D839EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeItemUseBuffDropConfig_TypeDefinitionIndex = 21757;

	class MazeItemUseBuffDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeItemUseBuffDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeItemUseBuffDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

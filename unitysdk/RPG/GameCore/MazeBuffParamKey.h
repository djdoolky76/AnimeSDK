#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffParamKey; }

#define RPG_GAMECORE_MAZEBUFFPARAMKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D862BE0)
#define RPG_GAMECORE_MAZEBUFFPARAMKEY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D862AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffParamKey_TypeDefinitionIndex = 18262;

	class MazeBuffParamKey : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 Index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFPARAMKEY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeBuffParamKey* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeBuffParamKey*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFPARAMKEY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffToastConfigLookup; }
namespace RPG::GameCore { class SingleMazeBuffToastConfig; }

#define RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D835380)
#define RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8352C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffToastConfigLookup_TypeDefinitionIndex = 17635;

	class MazeBuffToastConfigLookup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleMazeBuffToastConfig*>* MazeBuffToastConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeBuffToastConfigLookup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeBuffToastConfigLookup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFTOASTCONFIGLOOKUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

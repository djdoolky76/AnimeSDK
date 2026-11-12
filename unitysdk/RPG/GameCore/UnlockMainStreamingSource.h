#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnlockMainStreamingSource; }

#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8AF20)
#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE8AF30)
#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE8AE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockMainStreamingSource_TypeDefinitionIndex = 20839;

	class UnlockMainStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockMainStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockMainStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockMainStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockMainStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

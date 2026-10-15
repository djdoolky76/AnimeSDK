#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfEnterNextDay; }

#define RPG_GAMECORE_ELFENTERNEXTDAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D607BC0)
#define RPG_GAMECORE_ELFENTERNEXTDAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D607BD0)
#define RPG_GAMECORE_ELFENTERNEXTDAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D607B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEnterNextDay_TypeDefinitionIndex = 21734;

	class ElfEnterNextDay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTERNEXTDAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfEnterNextDay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfEnterNextDay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTERNEXTDAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfEnterNextDay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfEnterNextDay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTERNEXTDAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

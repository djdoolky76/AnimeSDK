#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfProgressUpgrade; }

#define RPG_GAMECORE_ELFPROGRESSUPGRADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6376A0)
#define RPG_GAMECORE_ELFPROGRESSUPGRADE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6376B0)
#define RPG_GAMECORE_ELFPROGRESSUPGRADE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6375E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfProgressUpgrade_TypeDefinitionIndex = 21071;

	class ElfProgressUpgrade : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROGRESSUPGRADE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfProgressUpgrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfProgressUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROGRESSUPGRADE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfProgressUpgrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfProgressUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROGRESSUPGRADE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

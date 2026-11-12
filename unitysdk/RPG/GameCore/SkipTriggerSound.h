#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkipTriggerSoundSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkipTriggerSound; }

#define RPG_GAMECORE_SKIPTRIGGERSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED02BB0)
#define RPG_GAMECORE_SKIPTRIGGERSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED02BC0)
#define RPG_GAMECORE_SKIPTRIGGERSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED02B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkipTriggerSound_TypeDefinitionIndex = 20946;

	class SkipTriggerSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Skip; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::SkipTriggerSoundSource>* SourceTypes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPTRIGGERSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkipTriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkipTriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPTRIGGERSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkipTriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkipTriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPTRIGGERSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

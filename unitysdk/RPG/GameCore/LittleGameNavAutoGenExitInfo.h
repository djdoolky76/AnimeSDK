#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameNavAutoGenExitInfo; }

#define RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B7550)
#define RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B7510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavAutoGenExitInfo_TypeDefinitionIndex = 17338;

	class LittleGameNavAutoGenExitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameNavAutoGenExitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameNavAutoGenExitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

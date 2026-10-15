#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScale; }

#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9830)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9840)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A9800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRemoveGlobalTimeScale_TypeDefinitionIndex = 21446;

	class FiveDimRemoveGlobalTimeScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TimeScaleKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

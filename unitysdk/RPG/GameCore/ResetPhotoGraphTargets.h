#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ResetPhotoGraphTargets; }

#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98B620)
#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98B630)
#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98B5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetPhotoGraphTargets_TypeDefinitionIndex = 21641;

	class ResetPhotoGraphTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* BindName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetPhotoGraphTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetPhotoGraphTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetPhotoGraphTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetPhotoGraphTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

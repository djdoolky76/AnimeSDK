#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableFieldEffectSoftZOffset; }

#define RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63ED40)
#define RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63ED50)
#define RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63ED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableFieldEffectSoftZOffset_TypeDefinitionIndex = 22709;

	class EnableFieldEffectSoftZOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableFieldEffectSoftZOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableFieldEffectSoftZOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableFieldEffectSoftZOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableFieldEffectSoftZOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

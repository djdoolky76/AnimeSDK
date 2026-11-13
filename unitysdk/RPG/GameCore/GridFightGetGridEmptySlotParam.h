#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGetGridEmptySlotParam; }

#define RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x20609240)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20609250)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206091F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGetGridEmptySlotParam_TypeDefinitionIndex = 20282;

	class GridFightGetGridEmptySlotParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::RPG::GameCore::GridFightRegion GridRegion; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGetGridEmptySlotParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGetGridEmptySlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGetGridEmptySlotParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGetGridEmptySlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

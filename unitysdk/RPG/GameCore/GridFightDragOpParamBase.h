#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpParamBase; }

#define RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FD3B0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FDB00)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FD5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpParamBase_TypeDefinitionIndex = 19955;

	class GridFightDragOpParamBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

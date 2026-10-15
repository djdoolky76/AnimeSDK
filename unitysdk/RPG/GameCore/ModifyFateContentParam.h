#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyFateContentParam; }

#define RPG_GAMECORE_MODIFYFATECONTENTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8698E0)
#define RPG_GAMECORE_MODIFYFATECONTENTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8698F0)
#define RPG_GAMECORE_MODIFYFATECONTENTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8698A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFateContentParam_TypeDefinitionIndex = 23285;

	class ModifyFateContentParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateContentParamType ValueType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATECONTENTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyFateContentParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyFateContentParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATECONTENTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyFateContentParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyFateContentParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATECONTENTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

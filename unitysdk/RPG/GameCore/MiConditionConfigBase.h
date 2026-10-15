#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_MICONDITIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87F320)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D87F260)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiConditionConfigBase_TypeDefinitionIndex = 17070;

	class MiConditionConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		::System::Boolean Inverse; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

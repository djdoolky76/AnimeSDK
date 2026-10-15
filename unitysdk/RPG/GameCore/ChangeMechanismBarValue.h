#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeMechanismBarValue; }

#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D539C60)
#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D539C70)
#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D539C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMechanismBarValue_TypeDefinitionIndex = 20525;

	class ChangeMechanismBarValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Int32 DeltaValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMechanismBarValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMechanismBarValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMechanismBarValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMechanismBarValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

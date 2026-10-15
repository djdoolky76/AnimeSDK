#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueClientOnly; }

#define RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA0480)
#define RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA04C0)
#define RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAADA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueClientOnly_TypeDefinitionIndex = 23823;

	class SetDynamicValueClientOnly : public ::RPG::GameCore::SetDynamicValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

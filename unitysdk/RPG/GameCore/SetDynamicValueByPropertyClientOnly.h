#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByProperty.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByPropertyClientOnly; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA90B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA90C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA92C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPropertyClientOnly_TypeDefinitionIndex = 23578;

	class SetDynamicValueByPropertyClientOnly : public ::RPG::GameCore::SetDynamicValueByProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

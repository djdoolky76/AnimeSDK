#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceHpChange; }

#define RPG_GAMECORE_CONVINCEHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F0940)
#define RPG_GAMECORE_CONVINCEHPCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7F0950)
#define RPG_GAMECORE_CONVINCEHPCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7F0910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceHpChange_TypeDefinitionIndex = 22226;

	class ConvinceHpChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ChangeNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceHpChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceHpChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceHpChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceHpChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

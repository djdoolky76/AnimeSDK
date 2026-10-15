#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPSortType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBPSortType; }

#define RPG_GAMECORE_SETBPSORTTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA68730)
#define RPG_GAMECORE_SETBPSORTTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA68740)
#define RPG_GAMECORE_SETBPSORTTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA68700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBPSortType_TypeDefinitionIndex = 23221;

	class SetBPSortType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BPSortType SortType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPSORTTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBPSortType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBPSortType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPSORTTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBPSortType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBPSortType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPSORTTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

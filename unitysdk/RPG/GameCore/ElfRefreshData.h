#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfRefreshData; }

#define RPG_GAMECORE_ELFREFRESHDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D609F50)
#define RPG_GAMECORE_ELFREFRESHDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D609F60)
#define RPG_GAMECORE_ELFREFRESHDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D609E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfRefreshData_TypeDefinitionIndex = 21737;

	class ElfRefreshData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFREFRESHDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfRefreshData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfRefreshData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFREFRESHDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfRefreshData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfRefreshData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFREFRESHDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

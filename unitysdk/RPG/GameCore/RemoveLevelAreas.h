#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RemoveLevelAreas; }

#define RPG_GAMECORE_REMOVELEVELAREAS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985910)
#define RPG_GAMECORE_REMOVELEVELAREAS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985920)
#define RPG_GAMECORE_REMOVELEVELAREAS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9858E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveLevelAreas_TypeDefinitionIndex = 20748;

	class RemoveLevelAreas : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVELEVELAREAS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveLevelAreas* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveLevelAreas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVELEVELAREAS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveLevelAreas* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveLevelAreas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVELEVELAREAS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class PointGeneratorMergeConfig; }

#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93D960)
#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93D970)
#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93DBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorMergeConfig_TypeDefinitionIndex = 15628;

	class PointGeneratorMergeConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PointGeneratorConfig*>* Generators; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointGeneratorMergeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointGeneratorMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointGeneratorMergeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointGeneratorMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace RPG::GameCore { class SubLevelGraphDynamicOverrideSet; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }

#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2F420)
#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1E460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubLevelGraphDynamicOverrideSet_TypeDefinitionIndex = 20718;

	class SubLevelGraphDynamicOverrideSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* FloatOverrides; // 0x10
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>* StringOverrides; // 0x18
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* UIntOverrides; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubLevelGraphDynamicOverrideSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubLevelGraphDynamicOverrideSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

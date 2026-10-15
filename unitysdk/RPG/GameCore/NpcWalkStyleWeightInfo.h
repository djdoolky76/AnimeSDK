#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }

#define RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B09A0)
#define RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B0800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcWalkStyleWeightInfo_TypeDefinitionIndex = 16916;

	class NpcWalkStyleWeightInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* Weights; // 0x18
		::System::Single RandomStyleTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcWalkStyleWeightInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcWalkStyleWeightInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

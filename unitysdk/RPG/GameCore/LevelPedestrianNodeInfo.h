#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PedestrianNode.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianNodeInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANNODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D796520)
#define RPG_GAMECORE_LEVELPEDESTRIANNODEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D796340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianNodeInfo_TypeDefinitionIndex = 17286;

	class LevelPedestrianNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalPosition; // 0x10
		::System::Single Width; // 0x1C
		::System::Single LocalRotationY; // 0x20
		::RPG::GameCore::PedestrianNode NodeType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANNODEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANNODEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

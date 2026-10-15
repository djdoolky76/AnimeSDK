#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionConnectAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrosswalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6620)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C6630)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C65F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionCrosswalkInfo_TypeDefinitionIndex = 17300;

	class LevelPedestrianV2IntersectionCrosswalkInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::String* BindCityIntersectionSignName; // 0x50
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*>* AreaInfo; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*>* ConnectAreaInfo; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROSSWALKINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

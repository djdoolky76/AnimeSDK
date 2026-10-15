#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceValueIncreasement; }

#define RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5C9A0)
#define RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5AF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceValueIncreasement_TypeDefinitionIndex = 18061;

	class RtDefenceValueIncreasement : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixVec2>* Increasement; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceValueIncreasement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceValueIncreasement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

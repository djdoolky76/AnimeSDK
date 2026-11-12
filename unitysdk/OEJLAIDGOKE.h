#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHOKLDGHMFG;
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define OEJLAIDGOKE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC6E7DF0)
#define OEJLAIDGOKE_COEMCOBPMKD_OFFSET UNITYSDK_OFFSET(0xC6E8020)

inline static constexpr unsigned int OEJLAIDGOKE_TypeDefinitionIndex = 77341;

	class OEJLAIDGOKE : public ::System::Object
	{
	public:
		static ::AHOKLDGHMFG* BPLPBPMEODA(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::AHOKLDGHMFG*(*)(::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + OEJLAIDGOKE_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::System::Void COEMCOBPMKD(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + OEJLAIDGOKE_COEMCOBPMKD_OFFSET))(a1);
		}

	};

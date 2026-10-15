#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHOKLDGHMFG;
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define OEJLAIDGOKE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE30A10)
#define OEJLAIDGOKE_COEMCOBPMKD_OFFSET UNITYSDK_OFFSET(0xBE30C40)

inline static constexpr unsigned int OEJLAIDGOKE_TypeDefinitionIndex = 75014;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIBILAKDENF;
class OBEPKIPNAHF;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define JHMPCKMLALE_HGBMGFHHCAO_OFFSET UNITYSDK_OFFSET(0xB9E1760)
#define JHMPCKMLALE_PDGIEOJCLDD_OFFSET UNITYSDK_OFFSET(0xB9E1880)

inline static constexpr unsigned int JHMPCKMLALE_TypeDefinitionIndex = 57402;

	class JHMPCKMLALE : public ::System::Object
	{
	public:
		static ::OBEPKIPNAHF* HGBMGFHHCAO(::GIBILAKDENF* a1)
		{
			return ((::OBEPKIPNAHF*(*)(::GIBILAKDENF*))((::PBYTE)hIl2Cpp + JHMPCKMLALE_HGBMGFHHCAO_OFFSET))(a1);
		}

		static ::GIBILAKDENF* PDGIEOJCLDD(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::GIBILAKDENF*(*)(::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JHMPCKMLALE_PDGIEOJCLDD_OFFSET))(a1, a2);
		}

	};

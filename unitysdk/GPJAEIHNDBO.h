#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GPJAEIHNDBO;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define GPJAEIHNDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE77C80)
#define GPJAEIHNDBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE77C90)
#define GPJAEIHNDBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE77C50)

inline static constexpr unsigned int GPJAEIHNDBO_TypeDefinitionIndex = 21505;

	class GPJAEIHNDBO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJAEIHNDBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GPJAEIHNDBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPJAEIHNDBO*))((::PBYTE)hIl2Cpp + GPJAEIHNDBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GPJAEIHNDBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPJAEIHNDBO*))((::PBYTE)hIl2Cpp + GPJAEIHNDBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

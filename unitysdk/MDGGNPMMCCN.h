#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDGGNPMMCCN;
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define MDGGNPMMCCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D116760)
#define MDGGNPMMCCN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D116770)
#define MDGGNPMMCCN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D116730)

inline static constexpr unsigned int MDGGNPMMCCN_TypeDefinitionIndex = 21444;

	class MDGGNPMMCCN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* AHLABPJBCJP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGNPMMCCN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDGGNPMMCCN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDGGNPMMCCN*))((::PBYTE)hIl2Cpp + MDGGNPMMCCN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDGGNPMMCCN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDGGNPMMCCN*))((::PBYTE)hIl2Cpp + MDGGNPMMCCN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

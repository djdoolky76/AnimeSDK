#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAIState.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class FGFNHNOJHBM;

#define FGFNHNOJHBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEC5B0)
#define FGFNHNOJHBM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDEC5C0)
#define FGFNHNOJHBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDEC580)

inline static constexpr unsigned int FGFNHNOJHBM_TypeDefinitionIndex = 21333;

	class FGFNHNOJHBM : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesAIState MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFNHNOJHBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FGFNHNOJHBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FGFNHNOJHBM*))((::PBYTE)hIl2Cpp + FGFNHNOJHBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FGFNHNOJHBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FGFNHNOJHBM*))((::PBYTE)hIl2Cpp + FGFNHNOJHBM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

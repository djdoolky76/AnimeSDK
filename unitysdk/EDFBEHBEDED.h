#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EDFBEHBEDED;
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define EDFBEHBEDED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD42AB0)
#define EDFBEHBEDED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD42AC0)
#define EDFBEHBEDED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD42A80)

inline static constexpr unsigned int EDFBEHBEDED_TypeDefinitionIndex = 22384;

	class EDFBEHBEDED : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* AHLABPJBCJP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBEHBEDED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EDFBEHBEDED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EDFBEHBEDED*))((::PBYTE)hIl2Cpp + EDFBEHBEDED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EDFBEHBEDED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EDFBEHBEDED*))((::PBYTE)hIl2Cpp + EDFBEHBEDED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

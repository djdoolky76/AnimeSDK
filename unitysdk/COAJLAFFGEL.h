#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class COAJLAFFGEL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define COAJLAFFGEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8A430)
#define COAJLAFFGEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB8A470)
#define COAJLAFFGEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB8A3D0)

inline static constexpr unsigned int COAJLAFFGEL_TypeDefinitionIndex = 22951;

	class COAJLAFFGEL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IBOBKJHBHBK; // 0x18
		::RPG::GameCore::TargetEvaluator* NDNEJBFPCHC; // 0x20
		::System::Boolean BKIKMIIPEHA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAJLAFFGEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::COAJLAFFGEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::COAJLAFFGEL*))((::PBYTE)hIl2Cpp + COAJLAFFGEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::COAJLAFFGEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::COAJLAFFGEL*))((::PBYTE)hIl2Cpp + COAJLAFFGEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

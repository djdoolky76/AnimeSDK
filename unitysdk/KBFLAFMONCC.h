#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define KBFLAFMONCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DCCA0)
#define KBFLAFMONCC_EIMOIGKIAGB_1_OFFSET UNITYSDK_OFFSET(0x1C6DC920)
#define KBFLAFMONCC_EIMOIGKIAGB_OFFSET UNITYSDK_OFFSET(0x1C6DC880)

inline static constexpr unsigned int KBFLAFMONCC_TypeDefinitionIndex = 36335;

	class KBFLAFMONCC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFLAFMONCC_CTOR_OFFSET))(this);
		}

		static ::System::Boolean EIMOIGKIAGB(::System::Int32 a1, ::RPG::GameCore::DiceCombatValueCompare a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::DiceCombatValueCompare, ::System::Int32))((::PBYTE)hIl2Cpp + KBFLAFMONCC_EIMOIGKIAGB_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean EIMOIGKIAGB_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DiceCombatValueCompare a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DiceCombatValueCompare, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KBFLAFMONCC_EIMOIGKIAGB_1_OFFSET))(a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AKOHMMLBOOM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define AKOHMMLBOOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD66E0)
#define AKOHMMLBOOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCD66F0)
#define AKOHMMLBOOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD66B0)

	class AKOHMMLBOOM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BCJFPLDEDJE; // 0x18
		::RPG::GameCore::JsonEnum* OOOACLEFDGM; // 0x20
		::RPG::GameCore::TargetEvaluator* BBOFFGLPHCJ; // 0x28
		::RPG::GameCore::TargetEvaluator* CGNJAJMEKOI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOHMMLBOOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKOHMMLBOOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKOHMMLBOOM*))((::PBYTE)hIl2Cpp + AKOHMMLBOOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AKOHMMLBOOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKOHMMLBOOM*))((::PBYTE)hIl2Cpp + AKOHMMLBOOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

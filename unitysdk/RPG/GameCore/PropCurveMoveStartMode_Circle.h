#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropCurveMoveStartMode_Circle; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91A3D0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D91A3E0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91A790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_Circle_TypeDefinitionIndex = 21006;

	class PropCurveMoveStartMode_Circle : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::System::Boolean Positive; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_Circle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_Circle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_Circle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_Circle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropCurveMoveStartMode_Normal; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91A4A0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D91A4B0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91A860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_Normal_TypeDefinitionIndex = 21004;

	class PropCurveMoveStartMode_Normal : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::System::Boolean Positive; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_Normal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_Normal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_Normal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_Normal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

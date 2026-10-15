#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropCurveMoveStartMode_TargetPoint; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91A690)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D91A6A0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91A960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_TargetPoint_TypeDefinitionIndex = 21005;

	class PropCurveMoveStartMode_TargetPoint : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::RPG::GameCore::DynamicString* TargetPointIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

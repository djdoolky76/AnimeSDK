#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropCurveMoveStartMode_PinPong; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D947EE0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D947EF0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9482A0)

namespace RPG::GameCore
{
	class PropCurveMoveStartMode_PinPong : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::RPG::GameCore::DynamicString* PointIndex1; // 0x10
		::RPG::GameCore::DynamicString* PointIndex2; // 0x18
		::System::Boolean Positive; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_PinPong* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_PinPong*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode_PinPong* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode_PinPong*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

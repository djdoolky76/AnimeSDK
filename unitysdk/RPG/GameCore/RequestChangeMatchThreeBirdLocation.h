#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RequestChangeMatchThreeBirdLocation; }

#define RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D988F10)
#define RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D988F20)
#define RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D988EE0)

namespace RPG::GameCore
{
	class RequestChangeMatchThreeBirdLocation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BirdID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

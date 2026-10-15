#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RequestChangeMatchThreeV2BirdLocation; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D329A90)
#define RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D329AA0)
#define RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D329A60)

namespace RPG::Client
{
	inline static constexpr unsigned int RequestChangeMatchThreeV2BirdLocation_TypeDefinitionIndex = 10259;

	class RequestChangeMatchThreeV2BirdLocation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BirdID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

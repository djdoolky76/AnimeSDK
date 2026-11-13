#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionFieldTransportLastCat; }

#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF4470)
#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBF4480)
#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBF4440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionFieldTransportLastCat_TypeDefinitionIndex = 18501;

	class CakeRaceActionFieldTransportLastCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 TriggerOnMaxCatDistanceZ; // 0x10
		::System::UInt32 TransportZ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

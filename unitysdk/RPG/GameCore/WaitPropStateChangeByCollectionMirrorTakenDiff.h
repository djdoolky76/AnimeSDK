#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class WaitPropStateChangeByCollectionMirrorTakenDiff; }

#define RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC71BF0)
#define RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC71C00)
#define RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC71BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropStateChangeByCollectionMirrorTakenDiff_TypeDefinitionIndex = 20414;

	class WaitPropStateChangeByCollectionMirrorTakenDiff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

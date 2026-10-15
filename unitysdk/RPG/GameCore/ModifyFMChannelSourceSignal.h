#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ModifyFMChannelSourceSignal; }

#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8970D0)
#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8970E0)
#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8970A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFMChannelSourceSignal_TypeDefinitionIndex = 20576;

	class ModifyFMChannelSourceSignal : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyFMChannelSourceSignal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyFMChannelSourceSignal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

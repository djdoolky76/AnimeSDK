#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalk.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraPeriodicRandomTalk; }
namespace RPG::GameCore { class ChimeraTalkContentWithWeight; }

#define RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ADC30)
#define RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5ADC40)
#define RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ADBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPeriodicRandomTalk_TypeDefinitionIndex = 15853;

	class ChimeraPeriodicRandomTalk : public ::RPG::GameCore::ChimeraTalk
	{
	public:
		::System::Single Interval; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ChimeraTalkContentWithWeight*>* WeightedTalkConfigs; // 0x28
		::System::Single WeightOfDefault; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPeriodicRandomTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPeriodicRandomTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPeriodicRandomTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPeriodicRandomTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

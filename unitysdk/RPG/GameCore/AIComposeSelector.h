#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AISelectorComposeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIComposeSelector; }
namespace RPG::GameCore { class AISelector; }

#define RPG_GAMECORE_AICOMPOSESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D337FA0)
#define RPG_GAMECORE_AICOMPOSESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337FB0)
#define RPG_GAMECORE_AICOMPOSESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D337F70)

namespace RPG::GameCore
{
	class AIComposeSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AISelectorComposeType ComposeType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AISelector*>* SelectorList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPOSESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIComposeSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIComposeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPOSESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIComposeSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIComposeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPOSESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

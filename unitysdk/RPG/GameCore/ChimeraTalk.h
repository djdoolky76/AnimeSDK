#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTalk; }
namespace RPG::GameCore { class ChimeraTalkCondition; }
namespace RPG::GameCore { class ChimeraTalkContent; }

#define RPG_GAMECORE_CHIMERATALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D580510)
#define RPG_GAMECORE_CHIMERATALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D581280)
#define RPG_GAMECORE_CHIMERATALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D581120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalk_TypeDefinitionIndex = 15850;

	class ChimeraTalk : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraTalkContent* TalkConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::ChimeraTalkCondition*>* Conditions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

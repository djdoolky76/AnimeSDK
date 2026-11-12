#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkContent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTalkContentWithWeight; }

#define RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BEFA0)
#define RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7BEFB0)
#define RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7BF0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkContentWithWeight_TypeDefinitionIndex = 16012;

	class ChimeraTalkContentWithWeight : public ::RPG::GameCore::ChimeraTalkContent
	{
	public:
		::System::Single Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalkContentWithWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalkContentWithWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalkContentWithWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalkContentWithWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

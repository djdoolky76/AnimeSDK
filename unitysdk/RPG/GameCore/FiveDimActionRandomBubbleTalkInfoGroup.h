#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimActionRandomBubbleTalkInfoGroup; }

#define RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D680230)
#define RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6800F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimActionRandomBubbleTalkInfoGroup_TypeDefinitionIndex = 18775;

	class FiveDimActionRandomBubbleTalkInfoGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimActionBubbleTalkInfo*>* BubbleTalkInfoGroup; // 0x10
		::System::Int32 Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

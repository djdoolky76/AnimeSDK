#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }

#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D70A0)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D6F30)

namespace RPG::GameCore
{
	class FiveDimRandomBubbleTalkInfoGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* BubbleTalkInfoGroup; // 0x10
		::System::Int32 Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

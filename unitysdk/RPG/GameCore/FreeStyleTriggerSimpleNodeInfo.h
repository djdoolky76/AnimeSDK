#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLETRIGGERSIMPLENODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7E10)
#define RPG_GAMECORE_FREESTYLETRIGGERSIMPLENODEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C7F80)
#define RPG_GAMECORE_FREESTYLETRIGGERSIMPLENODEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerSimpleNodeInfo_TypeDefinitionIndex = 16941;

	class FreeStyleTriggerSimpleNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>* TransitionInfos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERSIMPLENODEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERSIMPLENODEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERSIMPLENODEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

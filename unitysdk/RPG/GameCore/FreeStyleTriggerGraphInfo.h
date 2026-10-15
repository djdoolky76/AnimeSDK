#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }

#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7810)
#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerGraphInfo_TypeDefinitionIndex = 16943;

	class FreeStyleTriggerGraphInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*>* NodeInfos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerGraphInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerGraphInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

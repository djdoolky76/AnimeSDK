#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C81A0)
#define RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C8090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerTransitionInfo_TypeDefinitionIndex = 16940;

	class FreeStyleTriggerTransitionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* NextUniqueName; // 0x10
		::System::Single Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerTransitionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerTransitionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

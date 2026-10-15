#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageObjectCapture; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEOBJECTCAPTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3BD0)
#define RPG_GAMECORE_STAGEOBJECTCAPTURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageObjectCapture_TypeDefinitionIndex = 17227;

	class StageObjectCapture : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::System::Boolean UseOverridePos; // 0x20
		::System::Boolean ResetAnimatorWhenReload; // 0x21
		::System::Boolean IsLightWeight; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEOBJECTCAPTURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageObjectCapture* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageObjectCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEOBJECTCAPTURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }
namespace System { class String; }

#define RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABCC90)
#define RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABCB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkTargetBehavior_TypeDefinitionIndex = 21122;

	class SimpleTalkTargetBehavior : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Boolean UseMouthTalk; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleTalkTargetBehavior* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleTalkTargetBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

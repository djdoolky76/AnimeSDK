#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveAnimationClip; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEANIMATIONCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D983D70)
#define RPG_GAMECORE_REMOVEANIMATIONCLIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D983D80)
#define RPG_GAMECORE_REMOVEANIMATIONCLIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D983D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAnimationClip_TypeDefinitionIndex = 20284;

	class RemoveAnimationClip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAnimationClip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAnimationClip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEANIMATIONCLIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

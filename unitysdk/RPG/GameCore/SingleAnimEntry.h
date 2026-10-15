#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleAnimEntry; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEANIMENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEAD20)
#define RPG_GAMECORE_SINGLEANIMENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEAC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleAnimEntry_TypeDefinitionIndex = 16290;

	class SingleAnimEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorStateName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleAnimEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleAnimEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

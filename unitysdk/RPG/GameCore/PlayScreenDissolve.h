#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayScreenDissolve; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYSCREENDISSOLVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D903700)
#define RPG_GAMECORE_PLAYSCREENDISSOLVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D903710)
#define RPG_GAMECORE_PLAYSCREENDISSOLVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9036D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayScreenDissolve_TypeDefinitionIndex = 23137;

	class PlayScreenDissolve : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENDISSOLVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayScreenDissolve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayScreenDissolve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENDISSOLVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayScreenDissolve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayScreenDissolve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENDISSOLVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

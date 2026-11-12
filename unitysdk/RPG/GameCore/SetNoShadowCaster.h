#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNoShadowCaster; }
namespace System { class String; }

#define RPG_GAMECORE_SETNOSHADOWCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD0160)
#define RPG_GAMECORE_SETNOSHADOWCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECD0170)
#define RPG_GAMECORE_SETNOSHADOWCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECD0120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNoShadowCaster_TypeDefinitionIndex = 23321;

	class SetNoShadowCaster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NodeName; // 0x18
		::System::Boolean UseAllRenderer; // 0x20
		::System::Boolean IsNoShadow; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNOSHADOWCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNoShadowCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNoShadowCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNOSHADOWCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNoShadowCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNoShadowCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNOSHADOWCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

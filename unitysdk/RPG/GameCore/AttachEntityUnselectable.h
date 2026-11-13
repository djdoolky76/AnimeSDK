#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachEntityUnselectable; }

#define RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9270)
#define RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEB9280)
#define RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEB91B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachEntityUnselectable_TypeDefinitionIndex = 23143;

	class AttachEntityUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachEntityUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachEntityUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

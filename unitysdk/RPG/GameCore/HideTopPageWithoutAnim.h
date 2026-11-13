#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideTopPageWithoutAnim; }

#define RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE752A0)
#define RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE752B0)
#define RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE75270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideTopPageWithoutAnim_TypeDefinitionIndex = 21238;

	class HideTopPageWithoutAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Hide; // 0x18
		::System::Boolean PlayAnim; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideTopPageWithoutAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideTopPageWithoutAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideTopPageWithoutAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideTopPageWithoutAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGEWITHOUTANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

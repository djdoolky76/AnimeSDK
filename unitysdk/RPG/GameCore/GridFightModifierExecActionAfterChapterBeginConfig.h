#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterChapterBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208B8E00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208B8E10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208B8DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterChapterBeginConfig_TypeDefinitionIndex = 19557;

	class GridFightModifierExecActionAfterChapterBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightShowGuideTalk; }

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D742500)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D742510)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7424D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideTalk_TypeDefinitionIndex = 19972;

	class GridFightShowGuideTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

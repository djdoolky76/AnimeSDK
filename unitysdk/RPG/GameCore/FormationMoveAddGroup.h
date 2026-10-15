#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveAddGroup; }
namespace RPG::GameCore { class FormationMoveMemberInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATIONMOVEADDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BCF50)
#define RPG_GAMECORE_FORMATIONMOVEADDGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BCF60)
#define RPG_GAMECORE_FORMATIONMOVEADDGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BCF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveAddGroup_TypeDefinitionIndex = 21256;

	class FormationMoveAddGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Pattern; // 0x20
		::Il2CppArray<::RPG::GameCore::FormationMoveMemberInfo*>* Members; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveAddGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveAddGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveAddGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveAddGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveAddStream; }

#define RPG_GAMECORE_FORMATIONMOVEADDSTREAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD180)
#define RPG_GAMECORE_FORMATIONMOVEADDSTREAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BD190)
#define RPG_GAMECORE_FORMATIONMOVEADDSTREAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveAddStream_TypeDefinitionIndex = 21254;

	class FormationMoveAddStream : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CurveList; // 0x18
		::Il2CppArray<::System::UInt32>* GroupList; // 0x20
		::System::Single Speed; // 0x28
		::System::Int32 SplitCount; // 0x2C
		::System::Single AheadDistance; // 0x30
		::System::Int32 TeleportLod; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDSTREAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveAddStream* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveAddStream*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDSTREAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveAddStream* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveAddStream*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDSTREAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

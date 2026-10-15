#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }

#define RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB10BD0)
#define RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB10A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageMonsterInvasionParamRow_TypeDefinitionIndex = 15160;

	class StageMonsterInvasionParamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 MonsterID; // 0x18
		::System::UInt32 InvasionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageMonsterInvasionParamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageMonsterInvasionParamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

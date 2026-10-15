#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IDBNLIKLDKJ;
namespace RPG::GameCore { class StageInvasionConfigRow; }

#define RPG_GAMECORE_STAGEINVASIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0F3B0)
#define RPG_GAMECORE_STAGEINVASIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0F250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionConfigRow_TypeDefinitionIndex = 15156;

	class StageInvasionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::IDBNLIKLDKJ*>* MonsterInvasionList; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 InvasionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageInvasionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageInvasionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

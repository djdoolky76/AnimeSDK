#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnemyMaterialMapRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58C260)
#define RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58C0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnemyMaterialMapRow_TypeDefinitionIndex = 11077;

	class ChenLingEnemyMaterialMapRow : public ::System::Object
	{
	public:
		::System::String* MaterialPath; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 SoldierID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingEnemyMaterialMapRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
